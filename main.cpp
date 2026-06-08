/*
This code was created by Oscar Alberto Valles Limas
Tetris game.
This is just for fun without AI and this is just for practice so don't take it seriusly.
Compilation code g++ -Wall main.cpp -o main -lraylib
Personal notes:
1.- Draw a window (Raylib or SDL2).                                         (Checked)
2.- Draw the figures (7 figures).                                           (Checked)
3.- Draw the frame.
4.- Move the figures with keyboard.                                         (Checked)
5.- Set the limits with the frame (Calculate that part).
6.- Create rotation functions.
(This is for now so I might add more later).
*/
#include <iostream>
#include <raylib.h>
#include ".\models\figures.h"
//Global window size variables.
#define WIDTH 900
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
    int yPos = 0;
    //square firstSquare; //Object creation.
    //line firstLine; //Object creation.
    //ti firstTi; //Object creation.
    //zi firstZi; //Object creation.
    //el firstEl; //Object creation.
    //invZi firstInvZi; //Object creation.
    invEl firstInvEl; //ObjectCreation
    while(!WindowShouldClose()) //Main loop
    {
        if(IsKeyDown(KEY_UP) || IsKeyDown(KEY_W)) yPos --;
        if(IsKeyDown(KEY_DOWN) || IsKeyDown(KEY_S)) yPos ++;
        if(IsKeyDown(KEY_RIGHT) || IsKeyDown(KEY_A)) xPos --;
        if(IsKeyDown(KEY_LEFT) || IsKeyDown(KEY_D)) xPos ++;
        BeginDrawing(); //First drawings
        ClearBackground(BLACK); //Window background (Black)
        //firstSquare.draw(xPos, yPos); //Square drawing.
        //firstLine.draw(xPos,yPos); //Line drawing.
        //firstTi.draw(xPos,yPos);
        //firstZi.draw(xPos, yPos);
        //firstEl.draw(xPos, yPos);
        //firstInvZi.draw(xPos, yPos);
        firstInvEl.draw(xPos, yPos);
        EndDrawing(); 
    }

    CloseWindow(); //Close window
    return 0;
}