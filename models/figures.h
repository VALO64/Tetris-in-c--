//Tetris figures.
#include <raylib.h>

class square
{
public:
    void draw(int x, int y)
    {
    //Size per square 20 but I have to multiply it to draw the lines.
    //Think in the formula to follow the lines with the square.
    DrawRectangle(x,y,40,40,WHITE);
    //Research how to make the lines bigger change the thickness
    DrawLine(x+20,y,x+20,y+40,BLACK); //Vertical line.
    DrawLine(x,y+20,x+40,y+20,BLACK); //Horizontal line. 
    }
};

class line
{
public:
    void draw(int x, int y)
    {
        DrawRectangle(x,y,80,20,WHITE);
        //Vertical lines.
        DrawLine(x+20,y,x+20,y+20,BLACK);
        DrawLine(x+40,y,x+40,y+20,BLACK);
        DrawLine(x+60,y,x+60,y+20,BLACK);
    }
};

class ti
{
public:
    void draw(int x, int y)
    {
        //Main squares.
        DrawRectangle(x+20,y+20,20,20,WHITE);       
        DrawRectangle(x,y,60,20,WHITE);
        //Vertical lines.
        DrawLine(x+20,y,x+20,y+20,BLACK);
        DrawLine(x+40,y,x+40,y+20,BLACK);
        //Horizontal line.
        DrawLine(x+20,y+20,x+40,y+20,BLACK);
    }
};

class zi
{
public:
    void draw(int x, int y)
    {
        DrawRectangle(x,y+20,40,20,WHITE); // Down rectangle.
        DrawRectangle(x+20,y,40,20,WHITE); // Uper rectangle.
        //Horizontal line.
        DrawLine(x+20,y+20,x+40,y+20,BLACK); 
        //Vertical lines.
        DrawLine(x+20,y+20,x+20,y+40,BLACK);
        DrawLine(x+40,y,x+40,y+20,BLACK);
    }
};

class invZi
{
public:
    void draw(int x, int y)
    {
        DrawRectangle(x+20,y+20,40,20,WHITE); // Down rectangle.
        DrawRectangle(x,y,40,20,WHITE); // Uper rectangle.  
        //Horizontal line.         
        DrawLine(x+20,y+20,x+40,y+20,BLACK); 
        //Vertical lines.
        DrawLine(x+20,y,x+20,y+20,BLACK); 
        DrawLine(x+40,y+20,x+40,y+40,BLACK);     
    }
};

class el
{
public:
    void draw(int x, int y)
    {
        DrawRectangle(x,y+20,60,20,WHITE); //Down rectangle
        DrawRectangle(x+40,y,20,20,WHITE); //Uper Square 
        //Horizontal line.
        DrawLine(x+40,y+20,x+60,y+20,BLACK);
        //Vertical lines.
        DrawLine(x+20,y+20,x+20,y+40,BLACK);
        DrawLine(x+40,y+20,x+40,y+40,BLACK);
    }
};

class invEl
{
public:
    void draw(int x, int y)
    {
        DrawRectangle(x,y+20,60,20,WHITE); //Down rectangle
        DrawRectangle(x,y,20,20,WHITE); //Uper Square 
        //Horizontal line.
        DrawLine(x,y+20,x+20,y+20,BLACK);
        //Vertical lines.
        DrawLine(x+20,y+20,x+20,y+40,BLACK);
        DrawLine(x+40,y+20,x+40,y+40,BLACK);
    }
};