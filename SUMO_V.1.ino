    long cm;
    long cm2;
    long cm3;
    
    
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 
  pinMode(11, INPUT);   //kanan
  pinMode(12, OUTPUT); 
  pinMode(9, INPUT);   //kiri
  pinMode(10, OUTPUT); 
  pinMode(6, INPUT); 
  pinMode(7, OUTPUT); 
  

}

void loop() {
  // put your main code here, to run repeatedly:
    ambil_data1();
    ambil_data2();
    ambil_data3();
   //Serial.println(cm2);
   if (cm < 40) {
      if (cm<cm2){
      Serial.print("1");
      }
   }
    if (cm2 < 40) {
      if (cm2<cm){
        Serial.print("2");
      }
   }
   if (cm>40 and cm2>40){
      Serial.print("0");
      
   }
     

}

void ambil_data1(){
    digitalWrite(12, LOW);                      
    delayMicroseconds(2);   
    digitalWrite(12, HIGH);                     
    delayMicroseconds(10);   
    digitalWrite(12, LOW);                      
    int distance = pulseIn(11, HIGH);           
    cm = microsecondsToCentimeters(distance);   
}

void ambil_data2(){
    digitalWrite(10, LOW);                      
    delayMicroseconds(2);   
    digitalWrite(10, HIGH);                     
    delayMicroseconds(10);   
    digitalWrite(10, LOW);                      
    int distance2 = pulseIn(9, HIGH);           
    cm2 = microsecondsToCentimeters2(distance2);   
}

void ambil_data3(){
    digitalWrite(7, LOW);                      
    delayMicroseconds(2);   
    digitalWrite(7, HIGH);                     
    delayMicroseconds(10);   
    digitalWrite(7, LOW);                      
    int distance3 = pulseIn(6, HIGH);           
    cm3 = microsecondsToCentimeters3(distance3);   
}

long microsecondsToCentimeters(long microseconds) {
  return microseconds / 29 / 2;
}
long microsecondsToCentimeters2(long microseconds2) {
  return microseconds2 / 29 / 2;
}
long microsecondsToCentimeters3(long microseconds3) {
  return microseconds3 / 29 / 2;
}
