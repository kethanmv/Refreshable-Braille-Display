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

int dig=0;
int cap=0;
String text="";

char ch;
int d=3000;
int i=0;

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
  Serial.begin(9600);
  
} 
  
void loop() 
{   
    while (Serial.available()==0)  
    {                                       //Wait for user input  
    
    }
    text=Serial.readString();
    d=text.toInt();
    d=d*1000;
    Serial.println(d);
    while(1){
    while (Serial.available()==0)  
    {                                       //Wait for user input  
    
    }
    text=Serial.readString();
    Serial.println(text);
    while(text[i])
    {
      ch=text[i];
      Serial.println(ch);
      if((ch>='A')&&(ch<='Z'))
        cap=1;
       
      switch(ch){

        case ' ':pass("000000");
                 break;

        case 'A':
        case 'a':
                 if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 pass("100000");
                 break;
                 
        case 'B':           
        case 'b':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 pass("110000");
                 break; 

                                 
        case 'C':
        case 'c':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 pass("100100");
                 break;             

        case 'D':       
        case 'd':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 pass("100110");
                 break;

        case 'E':
        case 'e':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 pass("100010");
                 break;

        case 'F':
        case 'f':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 pass("110100");
                 break;

        case 'G':
        case 'g':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 pass("110110");
                 break;

        case 'H':
        case 'h':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 pass("110010");
                 break;

        case 'I':
        case 'i':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 pass("010100");
                 break;

        case 'J': 
        case 'j':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 pass("010110");
                 break;
        case 'K':
        case 'k':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 pass("101000");
                 break;
        case 'L':
        case 'l':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 pass("111000");
                 break;                 
        case 'M':
        case 'm':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 pass("101100");
                 break;             

        case 'N':
        case 'n':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 pass("101110");
                 break;

        case 'O':
        case 'o':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 pass("101010");
                 break;

        case 'P':
        case 'p':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 pass("111100");
                 break;

        case 'Q':
        case 'q':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 pass("111110");
                 break;

        case 'R':
        case 'r':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 pass("111010");
                 break;

        case 'S':
        case 's':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 pass("011100");
                 break;

        case 'T':
        case 't':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 pass("011110");
                 break;
        case 'U':
        case 'u':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 pass("101001");
                 break;
        case 'V':
        case 'v':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 pass("111001");
                 break;                 
        case 'X':
        case 'x':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 pass("101101");
                 break;             

        case 'Y':
        case 'y':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 pass("101111");
                 break;

        case 'Z':
        case 'z':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 pass("101011");
                 break;
        case 'W':
        case 'w':if(dig){
                    sletter();
                    dig=0;
                 }
                 if(cap)
                   caps();
                 pass("010111");
                 break;

         case '1':if(!dig){
                    snumber();
                    dig=1;
                 }
                 pass("100000");
                 break;
         case '2':if(!dig){
                    snumber();
                    dig=1;
                 }
                 pass("110000");
                 break;
          case '3':if(!dig){
                    snumber();
                    dig=1;
                 }
                 pass("100100");
                 break;                
         case '4':if(!dig){
                    snumber();
                    dig=1;
                 }
                 pass("100110");
                 break;
         case '5':if(!dig){
                    snumber();
                    dig=1;
                 }
               pass("100010");
                 break;

         case '6':if(!dig){
                    snumber();
                    dig=1;
                 }
                 pass("110100");
                 break;

         case '7':if(!dig){
                    snumber();
                    dig=1;
                 }
                 pass("110110");
                 break;


         case '8':if(!dig){
                    snumber();
                    dig=1;
                 }
                 pass("110010");
                 break;

         case '9':if(!dig){
                    snumber();
                    dig=1;
                 }
                 pass("010100");
                 break;
         case '0':if(!dig){
                    snumber();
                    dig=1;
                 }
                 pass("010110");
                 break;

        case '.':pass("010011");
                 break;

        case ',':pass("010000");
                 break;
                 
        case ';':pass("011000");
                 break;
                 
        case ':':pass("010010");
                 break;
                 
        case '!':pass("011010");
                 break;
                 
        case '(':
        case ')':pass("011011");
                 break;
                 
        case '"':
        case '?':pass("011001");
                 break;
                 
        case '*':pass("001010");
                 break;
                 
        case '\'':pass("010000");
                 break; 
                 
        case '-':pass("001001");
                 break;               
      } 
      i++; 
      delay(d);      
    }
                 pass("000000");
                 i=0;
    }
                 
}
    


void pass(char a[])
{
  if(a[0]=='1')
    servo2.write(angle12);
  else
    servo2.write(angle02);
  if(a[1]=='1')
    servo3.write(angle13);
  else
    servo3.write(angle03);
  if(a[2]=='1')
    servo4.write(angle14);
  else
    servo4.write(angle04);   
  if(a[3]=='1')
    servo5.write(angle15);
  else
    servo5.write(angle05);
  if(a[4]=='1')
    servo6.write(angle16);
  else
    servo6.write(angle06);
  if(a[5]=='1')
    servo7.write(angle17);
  else
    servo7.write(angle07);
}



void caps()
{
                 pass("000001");
                 cap=0;
                 delay(d); 
                           
}

void sletter()
{
                 pass("000011");
                 delay(d);
}

void snumber()
{
                 pass("001111");
                 delay(d);  
}
