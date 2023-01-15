#asm
    .equ __lcd_port=0x05
    .equ __lcd_EN=1
    .equ __lcd_RS=0
    .equ __lcd_D4=2
    .equ __lcd_D5=3
    .equ __lcd_D6=4
    .equ __lcd_D7=5
   #endasm

#include <io.h>
#include <delay.h>
#include <display.h>        
#include <stdio.h>
     
unsigned char min = 0, seg = 0, dec = 0;
char Cadena[5];
char componente[8] = {0x00, 0x00, 0x0A, 0x00, 0x11, 0x1F, 0x00, 0x00};
    

void main()
{
    SetupLCD();  
    MoveCursor(6, 0);
    StringLCD("Hilda");
    MoveCursor(12, 0);
    CreateChar(0, componente); 
    
    
    PORTD = 0x03;
    
    while(1)
    {  
        sprintf(Cadena, "%02u:%02u.%u    ", min, seg, dec); 
        MoveCursor(0,1);
        StringLCDVar(Cadena);
        delay_ms(45);
                
        if(!PIND.0)
            dec++; 
        
        if(!PIND.1){
            dec = 0;
            min = 0;
            seg = 0;
        }            
        
        if(dec>=10){
            seg++;
            dec = 0;
            if(seg>=60){
                min++;
                seg = 0;
                if(min>=60){
                    min = 0;
                }
            }           
        }
        
        if(seg%2 == 0){  
            MoveCursor(10, 1);
            CharLCD(0);
        }
        
        else {
            MoveCursor(10, 1);
            CharLCD('');
        } 
        
        
    }              
}