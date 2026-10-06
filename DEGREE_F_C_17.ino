float c=46.0;
float f=0.0;
float d=73.0;
float v=0.0;
void setup() {
Serial.begin(9600);
f=c*(9.0/5.0)+32.0;
Serial.print("from C TO THE DEGREE IN F•");
Serial.println(f);
v=(d-32.0)*5.0/9.0;
Serial.print("from F TO THE DEGREE IN C•");
Serial.println(v);
}
void loop() {
}