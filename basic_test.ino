/* QRD1114 Reflective Object Sensor (QRD1114) [S210] : http://rdiot.tistory.com/51 [RDIoT Demo] */

int signal = 4;
int onoff;    
 
void setup()   
{
  Serial.begin(9600); 
}
 
void loop()
{
  onoff = digitalRead(signal);
  Serial.println(onoff);    
}
