/* B25 Voltage Sensor DC0~25V [B125] : http://rdiot.tistory.com/250 [RDIoT Demo] */
#include <Wire.h>

float val1; 
float val2;

void setup() 
{    
  Serial.begin(9600);   
  Serial.println("B25 Voltage Test: ");
}

void loop() 
{       
  float temp;       
  val1=analogRead(1);       
  temp=val1/4.092;
  
  Serial.print("analog:"+(String)val1+", "+(String)val1+"/4.092="+(String)temp);
  
  val1=temp;
  val2=((val1)*10)/100;       
  
  Serial.println(" =====> "+(String)val2+" V");          
  delay(1000); 
}
