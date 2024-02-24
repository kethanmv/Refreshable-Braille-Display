#include<Servo.h>            //Servo library
 

Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;
Servo servo7;//initialize a servo object for the connected servo  
                
int angle02 = 100;
int angle12 = 20;
int angle03 = 85;
int angle13 = 0;
int angle04 = 80;
int angle14 = 10;   
int angle05 = 180;
int angle15 = 110;
int angle06 = 100;
int angle16 = 0;
int angle07 = 180;
int angle17 = 105;

char x[26]="AbCdAefghijklmnopqrstuvwxyz";

void setup() 
{ 
  servo2.attach(2);
  servo3.attach(3);
  servo4.attach(4);
  servo5.attach(5);
  servo6.attach(6);
  servo7.attach(7);// attach the signal pin of servo to pin9 of arduino
} 
  
void loop() 
{ 
    
    for(int i=0;i<26;i++)
    {     
       
      switch(x[i]){
                       
        case 'a':servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle04);
                 servo5.write(angle05);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;
                 

        case 'b':servo2.write(angle12);
                 servo3.write(angle13);
                 servo4.write(angle04);
                 servo5.write(angle05);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break; 

                                 
        
        case 'c':servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle04);
                 servo5.write(angle15);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;             


        case 'd':servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle04);
                 servo5.write(angle15);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;


        case 'e':servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle04);
                 servo5.write(angle05);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;


        case 'f':servo2.write(angle12);
                 servo3.write(angle13);
                 servo4.write(angle04);
                 servo5.write(angle15);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;


        case 'g':servo2.write(angle12);
                 servo3.write(angle13);
                 servo4.write(angle04);
                 servo5.write(angle15);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;


        case 'h':servo2.write(angle12);
                 servo3.write(angle13);
                 servo4.write(angle04);
                 servo5.write(angle05);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;


        case 'i':servo2.write(angle02);
                 servo3.write(angle13);
                 servo4.write(angle04);
                 servo5.write(angle15);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;


        case 'j':servo2.write(angle02);
                 servo3.write(angle13);
                 servo4.write(angle04);
                 servo5.write(angle15);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;

        case 'k':servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle14);
                 servo5.write(angle05);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;

        case 'l':servo2.write(angle12);
                 servo3.write(angle13);
                 servo4.write(angle14);
                 servo5.write(angle05);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;                 

        case 'm':servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle14);
                 servo5.write(angle15);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;             


        case 'n':servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle14);
                 servo5.write(angle15);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;


        case 'o':servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle14);
                 servo5.write(angle05);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;


        case 'p':servo2.write(angle12);
                 servo3.write(angle13);
                 servo4.write(angle14);
                 servo5.write(angle15);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;


        case 'q':servo2.write(angle12);
                 servo3.write(angle13);
                 servo4.write(angle14);
                 servo5.write(angle15);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;


        case 'r':servo2.write(angle12);
                 servo3.write(angle13);
                 servo4.write(angle14);
                 servo5.write(angle05);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;


        case 's':servo2.write(angle02);
                 servo3.write(angle13);
                 servo4.write(angle14);
                 servo5.write(angle15);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;


        case 't':servo2.write(angle02);
                 servo3.write(angle13);
                 servo4.write(angle14);
                 servo5.write(angle15);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;

        case 'u':servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle14);
                 servo5.write(angle05);
                 servo6.write(angle06);
                 servo7.write(angle17);
                 break;

        case 'v':servo2.write(angle12);
                 servo3.write(angle13);
                 servo4.write(angle14);
                 servo5.write(angle05);
                 servo6.write(angle06);
                 servo7.write(angle17);
                 break;                 

        case 'x':servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle14);
                 servo5.write(angle15);
                 servo6.write(angle06);
                 servo7.write(angle17);
                 break;             


        case 'y':servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle14);
                 servo5.write(angle15);
                 servo6.write(angle16);
                 servo7.write(angle17);
                 break;


        case 'z':servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle14);
                 servo5.write(angle05);
                 servo6.write(angle16);
                 servo7.write(angle17);
                 break;
                 
        case 'w':servo2.write(angle02);
                 servo3.write(angle13);
                 servo4.write(angle04);
                 servo5.write(angle15);
                 servo6.write(angle16);
                 servo7.write(angle17);
                 break;
      
      }    
                 delay(3000);
    }
}
