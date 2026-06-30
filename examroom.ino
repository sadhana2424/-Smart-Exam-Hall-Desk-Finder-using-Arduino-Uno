#include <Keypad.h>

const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = {2,3,4,5};
byte colPins[COLS] = {6,7,8,9};

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

const int greenLED = 10;
const int redLED = 11;
const int buzzer = 12;

String input = "";

String regNo[] = {"23001","23002","23003","23004","23005"};
String hall[]  = {"A101","A101","A102","A103","A104"};
String desk[]  = {"01","02","15","08","20"};

void setup() {

  Serial.begin(9600);

  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(buzzer, OUTPUT);

  digitalWrite(greenLED, LOW);
  digitalWrite(redLED, LOW);

  Serial.println("================================");
  Serial.println(" SMART EXAM DESK FINDER ");
  Serial.println("================================");
  Serial.println("Enter Register Number");
  Serial.println("Press # to Search");
  Serial.println("Press * to Clear");
}

void loop() {

  char key = keypad.getKey();

  if(key){

    if(key >= '0' && key <= '9'){
      input += key;
      Serial.print(key);
    }

    else if(key == '*'){
      input = "";
      Serial.println();
      Serial.println("Input Cleared");
    }

    else if(key == '#'){
      Serial.println();
      searchStudent();
      input = "";
      Serial.println();
      Serial.println("Enter Register Number");
    }

  }

}

void searchStudent(){

  bool found = false;

  for(int i=0;i<5;i++){

    if(input == regNo[i]){

      found = true;

      Serial.println("REGISTER FOUND");
      Serial.print("Hall : ");
      Serial.println(hall[i]);

      Serial.print("Desk : ");
      Serial.println(desk[i]);

      digitalWrite(greenLED,HIGH);

      tone(buzzer,1000);
      delay(500);
      noTone(buzzer);

      delay(2000);

      digitalWrite(greenLED,LOW);

      break;

    }

  }

  if(!found){

    Serial.println("INVALID REGISTER NUMBER");

    digitalWrite(redLED,HIGH);

    tone(buzzer,500);
    delay(1000);
    noTone(buzzer);

    digitalWrite(redLED,LOW);

  }

}