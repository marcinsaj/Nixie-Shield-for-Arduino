/*
  Nixie Shield Basic Example 

  This example shows how to control a nixie tube with an Arduino using Nixie Shield

  Nixie Shield uses five digital outputs to drive nixie tube. 
  Pin A0 as on/off line, 13,12,11,10 as an address of nixie tube cathode.

  This example code is in the public domain.

  http://www.nixietester.com
*/
const int EN = A0;          // A0 pin is attached to on/off line
const int A = 13;           // 13,12,11,10 pins are attached to address lines
const int B = 12;           
const int C = 11;           
const int D = 10;           

void setup() {
  pinMode(EN, OUTPUT);      // declare pin A0 as output
  pinMode(A, OUTPUT);       // declare pins 13,12,11,10 as output
  pinMode(B, OUTPUT);       
  pinMode(C, OUTPUT);       
  pinMode(D, OUTPUT);       
}

void loop() {
  delay (1000);
  digitalWrite(EN, LOW);    //turn on the tube

// set address of the tube cathode '0':  
                            //   ___    
  digitalWrite(A, LOW);     //  |   |
  digitalWrite(B, LOW);     //  |   |
  digitalWrite(C, LOW);     //  |   |
  digitalWrite(D, LOW);     //  |___|

  delay (1000);
  
// set address of the tube cathode '1':                                    
  
  digitalWrite(A, HIGH);    //   /|   
  digitalWrite(B, LOW);     //  / |   
  digitalWrite(C, LOW);     //    |  
  digitalWrite(D, LOW);     //    |

  delay (1000);  
  digitalWrite(EN, HIGH);   //turn off the tube
}
