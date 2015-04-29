#include "lcd_controller/LCD.h"
#include "button_controller/BTN.h"

int main(void)
{

	//lcd_display_scroll("THESE ARMS OF MINE --- ", 10,6);

	init_btn();
    while(1)
    {
    	if(is_btn_clicked()){
    		lcd_display_scroll("THESE ARMS OF MINE --- ", 10,6);
    	}
    }
}
