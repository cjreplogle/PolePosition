#include <FEHLCD.h>

int main()
{
    int startFlag=0;
    LCD.SetFontColor(LIGHTSKYBLUE);
    LCD.FillRectangle(0,0,320,120);
    
    LCD.SetFontColor(0x00CC00);
    LCD.FillRectangle(0,120,320,120);

    LCD.SetFontColor(WHITE);
    LCD.WriteLine("Pole Position\nBy: CJ Replogle and Marco Brunette");
    
    
    while (1) {
        LCD.Update();
        // Never end
    }
    return 0;
}