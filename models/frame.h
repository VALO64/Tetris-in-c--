#include <raylib.h>

class frame
{
    public:
    void draw(){
        //Vertical lines
        for(int i = 0; i < 5; i++)
        {
            DrawLine(15+i,15,15+i,585, WHITE);
        }
        for(int i = 0; i < 5; i++)
        {
            DrawLine(340+i,15,340+i,585, WHITE);
        }
        //Horizontal lines.
        for(int i = 0; i < 5; i++)
        {
            DrawLine(15,15+i,340,15+i, WHITE);
        }
        for(int i = 0; i < 5; i++)
        {
            DrawLine(15,580+i,340,580+i, WHITE);
        }
    }
};