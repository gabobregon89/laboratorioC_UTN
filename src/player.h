#ifndef PLAYER_H
#define PLAYER_H

#include "raylib.h" // Para el uso de estructuras de RayLib como Vector2

// Definición de la estructura de datos para el jugador
typedef struct Player {
    Vector2 position;
    int health;
} Player;

// Declaración de funciones
void InitPlayer(Player* player);
void UpdatePlayer(Player* player);
void DrawPlayer(const Player* player);

#endif