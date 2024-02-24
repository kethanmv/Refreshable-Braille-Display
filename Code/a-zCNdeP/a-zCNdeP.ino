#include<Servo.h>            //Servo library
#include<stdio.h>
#include<stdlib.h>


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

int dig=0;
int cap=0;


char x[50]="abcdefghijklmnopqrstuvwxyz";
int d=2000;

void setup() 
{ 
  servo2.attach(2);
  servo3.attach(3);
  servo4.attach(4);
  servo5.attach(5);
  servo6.attach(6);
  servo7.attach(7);
  servo2.write(angle02);
  servo3.write(angle03);
  servo4.write(angle04);
  servo5.write(angle05);
  servo6.write(angle06);
  servo7.write(angle07);
  delay(d);
} 
  
void loop() 
{    
    for(int i=0;i<50;i++)
    {     
      if((x[i]>='A')&&(x[i]<='Z'))
        cap=1;
       
      switch(x[i]){

        case ' ':servo2.write(angle02);
                 servo3.write(angle03);
                 servo4.write(angle04);
                 servo5.write(angle05);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;

        case 'A':
        case 'a':
                 if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle04);
                 servo5.write(angle05);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;
                 
        case 'B':           
        case 'b':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 servo2.write(angle12);
                 servo3.write(angle13);
                 servo4.write(angle04);
                 servo5.write(angle05);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break; 

                                 
        case 'C':
        case 'c':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle04);
                 servo5.write(angle15);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;             

        case 'D':       
        case 'd':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle04);
                 servo5.write(angle15);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;

        case 'E':
        case 'e':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle04);
                 servo5.write(angle05);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;

        case 'F':
        case 'f':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 servo2.write(angle12);
                 servo3.write(angle13);
                 servo4.write(angle04);
                 servo5.write(angle15);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;

        case 'G':
        case 'g':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 servo2.write(angle12);
                 servo3.write(angle13);
                 servo4.write(angle04);
                 servo5.write(angle15);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;

        case 'H':
        case 'h':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 servo2.write(angle12);
                 servo3.write(angle13);
                 servo4.write(angle04);
                 servo5.write(angle05);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;

        case 'I':
        case 'i':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 servo2.write(angle02);
                 servo3.write(angle13);
                 servo4.write(angle04);
                 servo5.write(angle15);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;

        case 'J': 
        case 'j':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 servo2.write(angle02);
                 servo3.write(angle13);
                 servo4.write(angle04);
                 servo5.write(angle15);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;
        case 'K':
        case 'k':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle14);
                 servo5.write(angle05);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;
        case 'L':
        case 'l':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 servo2.write(angle12);
                 servo3.write(angle13);
                 servo4.write(angle14);
                 servo5.write(angle05);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;                 
        case 'M':
        case 'm':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle14);
                 servo5.write(angle15);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;             

        case 'N':
        case 'n':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle14);
                 servo5.write(angle15);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;

        case 'O':
        case 'o':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle14);
                 servo5.write(angle05);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;

        case 'P':
        case 'p':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 servo2.write(angle12);
                 servo3.write(angle13);
                 servo4.write(angle14);
                 servo5.write(angle15);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;

        case 'Q':
        case 'q':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 servo2.write(angle12);
                 servo3.write(angle13);
                 servo4.write(angle14);
                 servo5.write(angle15);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;

        case 'R':
        case 'r':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 servo2.write(angle12);
                 servo3.write(angle13);
                 servo4.write(angle14);
                 servo5.write(angle05);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;

        case 'S':
        case 's':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 servo2.write(angle02);
                 servo3.write(angle13);
                 servo4.write(angle14);
                 servo5.write(angle15);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;

        case 'T':
        case 't':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 servo2.write(angle02);
                 servo3.write(angle13);
                 servo4.write(angle14);
                 servo5.write(angle15);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;
        case 'U':
        case 'u':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle14);
                 servo5.write(angle05);
                 servo6.write(angle06);
                 servo7.write(angle17);
                 break;
        case 'V':
        case 'v':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 servo2.write(angle12);
                 servo3.write(angle13);
                 servo4.write(angle14);
                 servo5.write(angle05);
                 servo6.write(angle06);
                 servo7.write(angle17);
                 break;                 
        case 'X':
        case 'x':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle14);
                 servo5.write(angle15);
                 servo6.write(angle06);
                 servo7.write(angle17);
                 break;             

        case 'Y':
        case 'y':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle14);
                 servo5.write(angle15);
                 servo6.write(angle16);
                 servo7.write(angle17);
                 break;

        case 'Z':
        case 'z':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle14);
                 servo5.write(angle05);
                 servo6.write(angle16);
                 servo7.write(angle17);
                 break;
        case 'W':
        case 'w':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 servo2.write(angle02);
                 servo3.write(angle13);
                 servo4.write(angle04);
                 servo5.write(angle15);
                 servo6.write(angle16);
                 servo7.write(angle17);
                 break;

         case '1':if(!dig){
                    snumber();
                    dig=1;
                 }
                 servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle04);
                 servo5.write(angle05);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;
         case '2':if(!dig){
                    snumber();
                    dig=1;
                 }
                 servo2.write(angle12);
                 servo3.write(angle13);
                 servo4.write(angle04);
                 servo5.write(angle05);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;
          case '3':if(!dig){
                    snumber();
                    dig=1;
                 }
                 servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle04);
                 servo5.write(angle15);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;                
         case '4':if(!dig){
                    snumber();
                    dig=1;
                 }
                 servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle04);
                 servo5.write(angle15);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;
         case '5':if(!dig){
                    snumber();
                    dig=1;
                 }
                 servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle04);
                 servo5.write(angle05);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;

         case '6':if(!dig){
                    snumber();
                    dig=1;
                 }
                 servo2.write(angle12);
                 servo3.write(angle13);
                 servo4.write(angle04);
                 servo5.write(angle15);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;

         case '7':if(!dig){
                    snumber();
                    dig=1;
                 }
                 servo2.write(angle12);
                 servo3.write(angle13);
                 servo4.write(angle04);
                 servo5.write(angle15);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;


         case '8':if(!dig){
                    snumber();
                    dig=1;
                 }
                 servo2.write(angle12);
                 servo3.write(angle13);
                 servo4.write(angle04);
                 servo5.write(angle05);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;

         case '9':if(!dig){
                    snumber();
                    dig=1;
                 }
                 servo2.write(angle02);
                 servo3.write(angle13);
                 servo4.write(angle04);
                 servo5.write(angle15);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;
         case '0':if(!dig){
                    snumber();
                    dig=1;
                 }
                 servo2.write(angle02);
                 servo3.write(angle13);
                 servo4.write(angle04);
                 servo5.write(angle15);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;

        case '.':servo2.write(angle02);
                 servo3.write(angle13);
                 servo4.write(angle04);
                 servo5.write(angle05);
                 servo6.write(angle16);
                 servo7.write(angle17);
                 break;

        case ',':servo2.write(angle02);
                 servo3.write(angle13);
                 servo4.write(angle04);
                 servo5.write(angle05);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;
                 
        case ';':servo2.write(angle02);
                 servo3.write(angle13);
                 servo4.write(angle14);
                 servo5.write(angle05);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;
                 
        case ':':servo2.write(angle02);
                 servo3.write(angle13);
                 servo4.write(angle04);
                 servo5.write(angle05);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;
                 
        case '!':servo2.write(angle02);
                 servo3.write(angle13);
                 servo4.write(angle14);
                 servo5.write(angle05);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;
                 
        case '(':
        case ')':servo2.write(angle02);
                 servo3.write(angle13);
                 servo4.write(angle14);
                 servo5.write(angle05);
                 servo6.write(angle16);
                 servo7.write(angle17);
                 break;
                 
        case '"':
        case '?':servo2.write(angle02);
                 servo3.write(angle13);
                 servo4.write(angle14);
                 servo5.write(angle05);
                 servo6.write(angle06);
                 servo7.write(angle17);
                 break;
                 
        case '*':servo2.write(angle02);
                 servo3.write(angle03);
                 servo4.write(angle14);
                 servo5.write(angle05);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;
                 
        case '\'':servo2.write(angle02);
                 servo3.write(angle13);
                 servo4.write(angle04);
                 servo5.write(angle05);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break; 
                 
        case '-':servo2.write(angle02);
                 servo3.write(angle03);
                 servo4.write(angle14);
                 servo5.write(angle05);
                 servo6.write(angle06);
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
                 cap=0;
                 delay(d); 
                           
}

void sletter()
{
                 servo2.write(angle02);
                 servo3.write(angle03);
                 servo4.write(angle04);
                 servo5.write(angle05);
                 servo6.write(angle16);
                 servo7.write(angle17);
                 delay(d);
}

void snumber()
{
                 servo2.write(angle02);
                 servo3.write(angle03);
                 servo4.write(angle14);
                 servo5.write(angle15);
                 servo6.write(angle16);
                 servo7.write(angle17);
                 delay(d);  
}
