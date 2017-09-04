void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  if(Serial1) {
    Serial1.begin(115200);
  } 
        
  // RESET
  pinMode(GMX_RESET,OUTPUT);
  digitalWrite(GMX_RESET,HIGH);

  // Boot
  pinMode(GMX_GPIO1,OUTPUT);
  pinMode(GMX_GPIO2,OUTPUT);
  pinMode(GMX_GPIO3,OUTPUT);
 // pinMode(GMX_GPIO4,OUTPUT);
  pinMode(GMX_GPIO5,OUTPUT);
  
  digitalWrite(GMX_GPIO1,LOW);
  digitalWrite(GMX_GPIO2,LOW);
  digitalWrite(GMX_GPIO3,LOW);

  // Power On
  
//  digitalWrite(GMX_GPIO4,HIGH);
  digitalWrite(GMX_GPIO5,HIGH);
  delay(500);
//  digitalWrite(GMX_GPIO4,LOW);
  digitalWrite(GMX_GPIO5,LOW);
  delay(200);
//  digitalWrite(GMX_GPIO4,HIGH);
  digitalWrite(GMX_GPIO5,HIGH);
  
  
  digitalWrite(GMX_GPIO1,HIGH);
  delay(500);
  digitalWrite(GMX_GPIO1,LOW);    
  digitalWrite(GMX_GPIO2,HIGH);
  delay(500);
  digitalWrite(GMX_GPIO2,LOW);
  digitalWrite(GMX_GPIO3,HIGH);
  delay(500);
  digitalWrite(GMX_GPIO3,LOW);
  digitalWrite(GMX_GPIO1,HIGH);
  delay(500);
  digitalWrite(GMX_GPIO1,LOW);
  digitalWrite(GMX_GPIO2,HIGH);
  delay(500);
  digitalWrite(GMX_GPIO2,LOW);
  digitalWrite(GMX_GPIO3,HIGH);
  delay(500); 
  digitalWrite(GMX_GPIO3,LOW);
  
  
  
  // Reset
  
  digitalWrite(GMX_RESET,HIGH);
  delay(100);
  digitalWrite(GMX_RESET,LOW);
  delay(100);
  digitalWrite(GMX_RESET,HIGH);
  delay(500);
  
 //Serial.println("Reading BOOT:");
 
}

void loop() {
  // put your main code here, to run repeatedly:
  byte ch;

  if (Serial1.available()>0) 
  {
    Serial.write(Serial1.read());
  }

  if (Serial.available()>0) 
  {
    ch = Serial.read();
    Serial1.write(ch);
   // Serial.write(ch);
  }
  
}
