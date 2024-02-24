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

char x[5]="1 A2c";
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
    int dig=0;
    
    for(int i=0;i<5;i++)
    {     
       
      switch(x[i]){

        case ' ':servo2.write(angle02);
                 servo3.write(angle03);
                 servo4.write(angle04);
                 servo5.write(angle05);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;

        case 'A':caps();
                  
        case 'a':if(dig){
                    sletter();
                    dig=0;
                 }
                 servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle04);
                 servo5.write(angle05);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;
                 
        case 'B':caps();
                  
        case 'b':if(dig){
                    sletter();
                    dig=0;
                 }
                 servo2.write(angle12);
                 servo3.write(angle13);
                 servo4.write(angle04);
                 servo5.write(angle05);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break; 

                                 
        case 'C':caps();
                 delay(1000);
        case 'c':if(dig){
                    sletter();
                    dig=0;
                 }
                 servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle04);
                 servo5.write(angle15);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;             

        case 'D':caps();
                  
        case 'd':if(dig){
                    sletter();
                    dig=0;
                 }
                 servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle04);
                 servo5.write(angle15);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;

        case 'E':caps();
                  
        case 'e':if(dig){
                    sletter();
                    dig=0;
                 }
                 servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle04);
                 servo5.write(angle05);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;

        case 'F':caps();
                  
        case 'f':if(dig){
                    sletter();
                    dig=0;
                 }
                 servo2.write(angle12);
                 servo3.write(angle13);
                 servo4.write(angle04);
                 servo5.write(angle15);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;

        case 'G':caps();
                  
        case 'g':if(dig){
                    sletter();
                    dig=0;
                 }
                 servo2.write(angle12);
                 servo3.write(angle13);
                 servo4.write(angle04);
                 servo5.write(angle15);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;

        case 'H':caps();
                  
        case 'h':if(dig){
                    sletter();
                    dig=0;
                 }
                 servo2.write(angle12);
                 servo3.write(angle13);
                 servo4.write(angle04);
                 servo5.write(angle05);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;

        case 'I':caps();
                  
        case 'i':if(dig){
                    sletter();
                    dig=0;
                 }
                 servo2.write(angle02);
                 servo3.write(angle13);
                 servo4.write(angle04);
                 servo5.write(angle15);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;

        case 'J':caps();
                  
        case 'j':if(dig){
                    sletter();
                    dig=0;
                 }
                 servo2.write(angle02);
                 servo3.write(angle13);
                 servo4.write(angle04);
                 servo5.write(angle15);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;
        case 'K':caps();
                  
        case 'k':if(dig){
                    sletter();
                    dig=0;
                 }
                 servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle14);
                 servo5.write(angle05);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;
        case 'L':caps();
                  
        case 'l':if(dig){
                    sletter();
                    dig=0;
                 }
                 servo2.write(angle12);
                 servo3.write(angle13);
                 servo4.write(angle14);
                 servo5.write(angle05);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;                 
        case 'M':caps();
                  
        case 'm':servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle14);
                 servo5.write(angle15);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;             

        case 'N':caps();
                  
        case 'n':if(dig){
                    sletter();
                    dig=0;
                 }
                 servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle14);
                 servo5.write(angle15);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;

        case 'O':caps();
                  
        case 'o':if(dig){
                    sletter();
                    dig=0;
                 }
                 servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle14);
                 servo5.write(angle05);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;

        case 'P':caps();
                  
        case 'p':if(dig){
                    sletter();
                    dig=0;
                 }
                 servo2.write(angle12);
                 servo3.write(angle13);
                 servo4.write(angle14);
                 servo5.write(angle15);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;

        case 'Q':caps();
                  
        case 'q':if(dig){
                    sletter();
                    dig=0;
                 }
                 servo2.write(angle12);
                 servo3.write(angle13);
                 servo4.write(angle14);
                 servo5.write(angle15);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;

        case 'R':caps();
                  
        case 'r':if(dig){
                    sletter();
                    dig=0;
                 }
                 servo2.write(angle12);
                 servo3.write(angle13);
                 servo4.write(angle14);
                 servo5.write(angle05);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;

        case 'S':caps();
                  
        case 's':if(dig){
                    sletter();
                    dig=0;
                 }
                 servo2.write(angle02);
                 servo3.write(angle13);
                 servo4.write(angle14);
                 servo5.write(angle15);
                 servo6.write(angle06);
                 servo7.write(angle07);
                 break;

        case 'T':caps();
                  
        case 't':if(dig){
                    sletter();
                    dig=0;
                 }
                 servo2.write(angle02);
                 servo3.write(angle13);
                 servo4.write(angle14);
                 servo5.write(angle15);
                 servo6.write(angle16);
                 servo7.write(angle07);
                 break;
        case 'U':caps();
                  
        case 'u':if(dig){
                    sletter();
                    dig=0;
                 }
                 servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle14);
                 servo5.write(angle05);
                 servo6.write(angle06);
                 servo7.write(angle17);
                 break;
        case 'V':caps();
                  
        case 'v':if(dig){
                    sletter();
                    dig=0;
                 }
                 servo2.write(angle12);
                 servo3.write(angle13);
                 servo4.write(angle14);
                 servo5.write(angle05);
                 servo6.write(angle06);
                 servo7.write(angle17);
                 break;                 
        case 'X':caps();
                  
        case 'x':if(dig){
                    sletter();
                    dig=0;
                 }
                 servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle14);
                 servo5.write(angle15);
                 servo6.write(angle06);
                 servo7.write(angle17);
                 break;             

        case 'Y':caps();
                  
        case 'y':if(dig){
                    sletter();
                    dig=0;
                 }
                 servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle14);
                 servo5.write(angle15);
                 servo6.write(angle16);
                 servo7.write(angle17);
                 break;

        case 'Z':caps();
                
        case 'z':if(dig){
                    sletter();
                    dig=0;
                 }
                 servo2.write(angle12);
                 servo3.write(angle03);
                 servo4.write(angle14);
                 servo5.write(angle05);
                 servo6.write(angle16);
                 servo7.write(angle17);
                 break;
        case 'W':caps();
                 
        case 'w':if(dig){
                    sletter();
                    dig=0;
                 }
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
