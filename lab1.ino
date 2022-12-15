int A = 17;
int B = 2;
int C = 15;
int D = 12;
void setup() {
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(D,OUTPUT);

}

void loop() {
  digitalWrite(A, LOW);
  delay(1000);
  digitalWrite(A, HIGH);
  delay(500);
  
   digitalWrite(B, LOW);
  delay(1000);
  digitalWrite(B, HIGH);
  delay(500);
  
   digitalWrite(C, LOW);
  delay(1000);
  digitalWrite(C, HIGH);
  delay(500);
  
   digitalWrite(D, LOW);
  delay(1000);
  digitalWrite(D, HIGH);
  delay(500);
  
 
}
