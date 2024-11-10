#include <stdio.h>
#include "raylib.h"
#include "world.h"
#define SAND CLITERAL(Color){ 250, 216, 147, 255 }
#define Max_Stones 10

Rectangle isle = { 0,0,1000,1000 };
Vector2 stones[Max_Stones];


void initWorld() {
    for (int i = 0; i < Max_Stones; i++) {
        stones[i].x = GetRandomValue((int)isle.x, (int)(isle.x + isle.width));
        stones[i].y = GetRandomValue((int)isle.y, (int)(isle.y + isle.height));
    }
}
void drawWorld() {
    DrawRectangleRec(isle, SAND); // Dibujamos la isla

    for (int i = 0; i < Max_Stones; i++) {
        DrawRectangle((int)stones[i].x, (int)stones[i].y, 10, 10, GRAY); // Piedritas de 10x10
    }
}