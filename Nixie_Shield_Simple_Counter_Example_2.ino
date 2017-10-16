/*
  Nixie Shield Simple Counter Example 2

  This example shows how to make a simple nixie counter.
  Functions help keep code organized.

  Nixie Shield uses five digital outputs to drive nixie tube. 
  Pin A0 as on/off line, 13,12,11,10 as an address of nixie tube cathode.

  This example code is in the public domain.

  http://www.nixietester.com
*/
const int EN = A0;                  // A0 pin is attached to on/off line
const int A = 13;                   // 13,12,11,10 pins are attached to address lines
const int B = 12;           
const int C = 11;           
const int D = 10;           

void setup() {
  pinMode(EN, OUTPUT);              // declare pin A0 as output
  pinMode(A, OUTPUT);               // declare pins 13,12,11,10 as output
  pinMode(B, OUTPUT);       
  pinMode(C, OUTPUT);       
  pinMode(D, OUTPUT);       
}

// the loop routine runs over and over again forever:
void loop() {
    
  nixietubeON();                    // Turn on the tube

  for(int i = 0; i < 10; i++ ){
      nixietube(i);                 // Display digit 0 to 9  
      delay (1000);
  }
      
  nixietubeOFF();                   // Turn off the tube
  delay(2000); 
}


void nixietube(int digit){          // Nixie Tube Display Function
    switch (digit) {
      case 0:                       //   ___    
          digitalWrite(A, LOW);     //  |   |
          digitalWrite(B, LOW);     //  |   |
          digitalWrite(C, LOW);     //  |   |
          digitalWrite(D, LOW);     //  |___|
        break;
      case 1:
          digitalWrite(A, HIGH);    //    /|   
          digitalWrite(B, LOW);     //   / |   
          digitalWrite(C, LOW);     //     |  
          digitalWrite(D, LOW);     //     |
        break;
      case 2:                       //   ___ 
          digitalWrite(A, LOW);     //      |   
          digitalWrite(B, HIGH);    //   ___|   
          digitalWrite(C, LOW);     //  |  
          digitalWrite(D, LOW);     //  |___
        break;
      case 3:                       //   ___ 
          digitalWrite(A, HIGH);    //      |   
          digitalWrite(B, HIGH);    //   ___|   
          digitalWrite(C, LOW);     //      |  
          digitalWrite(D, LOW);     //   ___|
        break;
      case 4:
          digitalWrite(A, LOW);     //  |   | 
          digitalWrite(B, LOW);     //  |___|   
          digitalWrite(C, HIGH);    //      |  
          digitalWrite(D, LOW);     //      |
        break;
      case 5:                       //   ___ 
          digitalWrite(A, HIGH);    //  |      
          digitalWrite(B, LOW);     //  |___   
          digitalWrite(C, HIGH);    //      |  
          digitalWrite(D, LOW);     //   ___|
        break;
      case 6:                       //   ___ 
          digitalWrite(A, LOW);     //  |      
          digitalWrite(B, HIGH);    //  |___   
          digitalWrite(C, HIGH);    //  |   |  
          digitalWrite(D, LOW);     //  |___|
        break;
      case 7:                       //   ___
          digitalWrite(A, HIGH);    //      |   
          digitalWrite(B, HIGH);    //      |   
          digitalWrite(C, HIGH);    //      |  
          digitalWrite(D, LOW);     //      |
        break;
      case 8:                       //   ___ 
          digitalWrite(A, LOW);     //  |   |   
          digitalWrite(B, LOW);     //  |___|   
          digitalWrite(C, LOW);     //  |   |  
          digitalWrite(D, HIGH);    //  |___|
        break;
      case 9:                       //   ___ 
          digitalWrite(A, HIGH);    //  |   |   
          digitalWrite(B, LOW);     //  |___|   
          digitalWrite(C, LOW);     //      |  
          digitalWrite(D, HIGH);    //   ___|
        break;
        }
    }

  void nixietubeON(){               // Turn on the tube Function
    digitalWrite(EN, LOW);    
  }
 
  void nixietubeOFF(){              // Turn off the tube Function
    digitalWrite(EN, HIGH);
  }


