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

char x[26]="EsHwAr";
int d=5000;

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

        case 'A':caps();
                 delay(d);
        case 'a':servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle04);
                 servo5.write(angle05);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;
                 
        case 'B':caps();
                 delay(d);
        case 'b':servo2.write(angle12);
                 servo3.write(angle13);
                 servo4.write(angle04);
                 servo5.write(angle05);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break; 

                                 
        case 'C':caps();
                 delay(1000);
        case 'c':servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle04);
                 servo5.write(angle15);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;             

        case 'D':caps();
                 delay(d);
        case 'd':servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle04);
                 servo5.write(angle15);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;

        case 'E':caps();
                 delay(d);
        case 'e':servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle04);
                 servo5.write(angle05);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;

        case 'F':caps();
                 delay(d);
        case 'f':servo2.write(angle12);
                 servo3.write(angle13);
                 servo4.write(angle04);
                 servo5.write(angle15);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;

        case 'G':caps();
                 delay(d);
        case 'g':servo2.write(angle12);
                 servo3.write(angle13);
                 servo4.write(angle04);
                 servo5.write(angle15);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;

        case 'H':caps();
                 delay(d);
        case 'h':servo2.write(angle12);
                 servo3.write(angle13);
                 servo4.write(angle04);
                 servo5.write(angle05);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;

        case 'I':caps();
                 delay(d);
        case 'i':servo2.write(angle02);
                 servo3.write(angle13);
                 servo4.write(angle04);
                 servo5.write(angle15);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;

        case 'J':caps();
                 delay(d);
        case 'j':servo2.write(angle02);
                 servo3.write(angle13);
                 servo4.write(angle04);
                 servo5.write(angle15);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;
        case 'K':caps();
                 delay(d);
        case 'k':servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle14);
                 servo5.write(angle05);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;
        case 'L':caps();
                 delay(d);
        case 'l':servo2.write(angle12);
                 servo3.write(angle13);
                 servo4.write(angle14);
                 servo5.write(angle05);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;                 
        case 'M':caps();
                 delay(d);
        case 'm':servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle14);
                 servo5.write(angle15);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;             

        case 'N':caps();
                 delay(d);
        case 'n':servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle14);
                 servo5.write(angle15);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;

        case 'O':caps();
                 delay(d);
        case 'o':servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle14);
                 servo5.write(angle05);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;

        case 'P':caps();
                 delay(d);
        case 'p':servo2.write(angle12);
                 servo3.write(angle13);
                 servo4.write(angle14);
                 servo5.write(angle15);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;

        case 'Q':caps();
                 delay(d);
        case 'q':servo2.write(angle12);
                 servo3.write(angle13);
                 servo4.write(angle14);
                 servo5.write(angle15);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;

        case 'R':caps();
                 delay(d);
        case 'r':servo2.write(angle12);
                 servo3.write(angle13);
                 servo4.write(angle14);
                 servo5.write(angle05);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;

        case 'S':caps();
                 delay(d);
        case 's':servo2.write(angle02);
                 servo3.write(angle13);
                 servo4.write(angle14);
                 servo5.write(angle15);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;

        case 'T':caps();
                 delay(d);
        case 't':servo2.write(angle02);
                 servo3.write(angle13);
                 servo4.write(angle14);
                 servo5.write(angle15);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;
        case 'U':caps();
                 delay(d);
        case 'u':servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle14);
                 servo5.write(angle05);
                 servo6.write(angle06);
                 servo7.write(angle17);
                 break;
        case 'V':caps();
                 delay(d);
        case 'v':servo2.write(angle12);
                 servo3.write(angle13);
                 servo4.write(angle14);
                 servo5.write(angle05);
                 servo6.write(angle06);
                 servo7.write(angle17);
                 break;                 
        case 'X':caps();
                 delay(d);
        case 'x':servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle14);
                 servo5.write(angle15);
                 servo6.write(angle06);
                 servo7.write(angle17);
                 break;             

        case 'Y':caps();
                 delay(d);
        case 'y':servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle14);
                 servo5.write(angle15);
                 servo6.write(angle16);
                 servo7.write(angle17);
                 break;

        case 'Z':caps();
                 delay(d);
        case 'z':servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle14);
                 servo5.write(angle05);
                 servo6.write(angle16);
                 servo7.write(angle17);
                 break;
        case 'W':caps();
                 delay(d);         
        case 'w':servo2.write(angle02);
                 servo3.write(angle13);
                 servo4.write(angle04);
                 servo5.write(angle15);
                 servo6.write(angle16);
                 servo7.write(angle17);
                 break;
      
      }    
                 delay(d);
    }
}
    




void caps()
{
                 servo2.write(angle02);
                 servo3.write(angle03);
                 servo4.write(angle04);
                 servo5.write(angle05);
                 servo6.write(angle06);
                 servo7.write(angle17);
}
