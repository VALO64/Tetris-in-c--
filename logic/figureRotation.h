#include <raylib.h>
#include <iostream>
#include "C:\Users\Hero\Documents\code-projects\tetris\models\figures.h"
// I still working in the negative trotations
int count = 0;
void lineRotation(int x, int y){
    line lineRotationf;
    static int roter1 = 80;
    static int roter2 = 20;
    
    if(IsKeyPressed(KEY_UP) || IsKeyPressed(KEY_W))
    {
        roter1 = 80;
        roter2 = 20;
        count ++;
        std::cout << "count" << count << std::endl;
        if(count == 1){
            roter1 = 20;
            roter2 = 80;
            y = 80;            
        }
        if(count == 2){
            roter1 = 80;
            roter2 = 20;
            x = 80;            
        }
        if(count == 3){
            roter1 = 20;
            roter2 = 80;  
            count = 0;         
        }
    }

    if(IsKeyPressed(KEY_DOWN) || IsKeyPressed(KEY_S))
    {
        roter1 = 20;
        roter2 = 80;
    }
    lineRotationf.draw(x, y, roter1, roter2);
}
