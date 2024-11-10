#ifndef CAMERA_H
#define CAMERA_H
#include "raylib.h"
#include "player.h"
// Para el uso de estructuras de RayLib como Vector2

// Declaración de funciones
void InitCamera(Camera2D* camera, Player* player, int screenWidth, int screenHeight);
void UpdateCam(Camera2D* camera, Player* player);
#endif