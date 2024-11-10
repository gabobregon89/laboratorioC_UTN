#include <stdio.h>
#include "raylib.h"
#include "camera.h"



void InitCamera(Camera2D* camera, Player* player, int screenWidth, int screenHeight) {
    if (camera == NULL || player == NULL) return; // Validación de punteros nulos
    camera->target = (Vector2){ player->position.x + 20.0f, player->position.y + 20.0f }; 
    camera->offset = (Vector2){ screenWidth / 2.0f, screenHeight / 2.0f };
    camera->rotation = 0.0f;
    camera->zoom = 0.8f;
}

void UpdateCam(Camera2D* camera, Player* player) {
    if (camera == NULL || player == NULL) return; // Validación de punteros nulos
    camera->target = (Vector2){ player->position.x + 20.0f, player->position.y + 20.0f }; 
}
