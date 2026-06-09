/*
This code was created by Oscar Alberto Valles Limas
Tetris game.
This is just for fun without AI and this is just for practice so don't take it seriusly.
Compilation code g++ -Wall main.cpp -o main -lraylib
Personal notes:
1.- Draw a window (Raylib or SDL2).                                         (Checked)
2.- Draw the figures (7 figures).                                           (Checked)
3.- Draw the frame.                                                         (Checked)
4.- Move the figures with keyboard.                                         (Checked)
5.- Set the limits with the frame (Calculate that part).
6.- Create rotation functions.  (I still working on that!!!)
(This is for now so I might add more later).
*/
#include <iostream>
#include <raylib.h>
//#include ".\models\figures.h"
#include ".\models\frame.h"
#include "logic\figureRotation.h"
//Global window size variables.
#define WIDTH 600
#define HEIGHT 600
// Speed init
//#define SPEED 5 //I might usi this variable later for the levels.

int main(void)
{
    std::cout << "Hello this is a tetris game!" << std::endl; //This is just a print.
    InitWindow(WIDTH,HEIGHT, "TETRIS-FAN-GAME"); //Window initialization.
    SetTargetFPS(60); //Game FPS (Change it if necessary)
    //X and Y initial position for the figures.
    int xPos = 0;
    float vel = 1;
    frame mainFrame; //Main frame creation.
    
    while(!WindowShouldClose()) //Main loop
    {
        vel = vel+ 0.5;

        BeginDrawing(); //First drawings
        ClearBackground(BLACK); //Window background (Black)
        if(IsKeyDown(KEY_RIGHT) || IsKeyDown(KEY_A)) xPos --;
        if(IsKeyDown(KEY_LEFT) || IsKeyDown(KEY_D)) xPos ++;
        mainFrame.draw();
        lineRotation(xPos, vel);
        EndDrawing(); 
    }

    CloseWindow(); //Close window
    return 0;
}