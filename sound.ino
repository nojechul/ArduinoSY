int Sound_Sensor = A0;
int Sensor_val;
int count_warn;
void setup() {
  Serial.begin(9600);
}

void loop() {
  Sensor_val=analogRead(Sound_Sensor);
  Serial.println(Sensor_val);
  
  if(Sensor_val>30){
    count_warn++;
    Serial.print("경고");
    Serial.print(count_warn);
    Serial.println("번");
  }
  else{
    Serial.println("조용..");
  }
  delay(1000);
}
