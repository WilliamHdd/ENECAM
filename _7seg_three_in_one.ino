
int ledPin1 = 2;
int ledPin2 = 3;
int ledPin3 = 4;
int segA = 5;
int segB = 6;
int segC = 7;
int segD = 8;
int segE = 9;
int segF = 10;
int segG = 11;
int segDP = 12; 
int aff1 = 0;
int aff2 = 0;
int aff3= 0;
int PotState = 0;
int deg10T = 0;
 
int PotPin = A0;



void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  
}

void loop() {
  PotState = analogRead (PotPin);
  deg10T=  (PotState/1023)*400;
  aff1 = deg10T/100;
  aff2 = deg10T/10 ;
  aff3 = deg10T%10;
  digitalWrite(ledPin1, HIGH);
  switch (aff1){
    case '0':
      zero();
      break;
    case '1':
      one();
      break;
    case'2':
      two();
      break;
    case'3':
      three();
      break;
    case'4':
      four();
      break;
    case'5':
      five();
      break;
    case '6':
      six();
      break;
    case'7':
      seven();
      break;
    case'8':
      eight();
      break;
    case'9':
      nine();
      break;
    default:
      zero();
   
  }
  digitalWrite (ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
   switch (aff2){
    digitalWrite (segDP, HIGH);
    case '0':
      zero();
      break;
    case '1':
      one();
      break;
    case'2':
      two();
      break;
    case'3':
      three();
      break;
    case'4':
      four();
      break;
    case'5':
      five();
      break;
    case '6':
      six();
      break;
    case'7':
      seven();
      break;
    case'8':
      eight();
      break;
    case'9':
      nine();
      break;
    default:
      zero();
   
  }
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, HIGH);
   switch (aff3){
    case '0':
      zero();
      break;
    case '1':
      one();
      break;
    case'2':
      two();
      break;
    case'3':
      three();
      break;
    case'4':
      four();
      break;
    case'5':
      five();
      break;
    case '6':
      six();
      break;
    case'7':
      seven();
      break;
    case'8':
      eight();
      break;
    case'9':
      nine();
      break;
    default:
      zero();
   
  }
  digitalWrite(ledPin3, LOW);
}

void one(){
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);
  digitalWrite(segA, LOW);
}
void two(){
  digitalWrite(segB, HIGH);
  digitalWrite(segC, LOW);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, LOW);
  digitalWrite(segG, HIGH);
  digitalWrite(segA, HIGH);
}
void three(){
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, HIGH);
  digitalWrite(segA, HIGH);
}
void four(){
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
  digitalWrite(segA, LOW);
}
void five(){
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, LOW);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
  digitalWrite(segA, HIGH);
}
void six(){
  digitalWrite(segB, LOW);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
  digitalWrite(segA, HIGH);
}
void seven(){
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);
  digitalWrite(segA, HIGH);
}
void eight(){
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
  digitalWrite(segA, HIGH);
}
void nine(){
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, LOW);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
  digitalWrite(segA, HIGH);
}
void zero(){
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, LOW);
  digitalWrite(segA, HIGH);
}


