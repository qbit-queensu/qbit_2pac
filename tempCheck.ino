int V1 = 1;
float Rtemp;
float Vtemp;
//int V2 = A2;

void setup() {
  // put your setup code here, to run once:
pinMode(V1, INPUT);
//pinMode(V2, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 Vtemp=analogRead(V1)*0.00290;
 
 Rtemp = ((3.0-Vtemp)*30.0)/Vtemp;
 Serial.println(Rtemp,10);
// Serial.println(Vtemp);
 delay(100);
}
