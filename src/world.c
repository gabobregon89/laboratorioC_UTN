#include <stdio.h>
#include "raylib.h"
#include "world.h"
#define SAND CLITERAL(Color){ 250, 216, 147, 255 }
#define Max_Stones 15
#define Max_Ramas 15

Rectangle isle = { 0,0,500,1000 };
Vector2 stones[Max_Stones];
Vector2 ramas[Max_Ramas];

void initWorld() {
    for (int i = 0; i < Max_Stones; i++) {
        stones[i].x = GetRandomValue((int)isle.x, (int)(isle.x + isle.width));
        stones[i].y = GetRandomValue((int)isle.y, (int)(isle.y + isle.height));
    }
    for (int i = 0; i < Max_Ramas; i++)
    {
        ramas[i].x = GetRandomValue((int)isle.x, (int)(isle.x + isle.width));
        ramas[i].y = GetRandomValue((int)isle.y, (int)(isle.y + isle.height));
    }
}
void drawWorld() {
    DrawRectangleRec(isle, SAND); // Dibujamos la isla

    for (int i = 0; i < Max_Stones; i++) {
        DrawRectangle((int)stones[i].x, (int)stones[i].y, 20, 20, GRAY); // Piedritas de 20x20
    }

    for (int i = 0; i < Max_Ramas; i++) {
        DrawRectangle((int)ramas[i].x, (int)ramas[i].y, 10, 10, BLUE); // Ramas de 10x10
    }
}