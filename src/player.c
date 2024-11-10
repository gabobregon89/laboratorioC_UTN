#include <stdio.h>
#include "raylib.h"
#include "player.h"

void InitPlayer(Player* player) {
    player->position = (Vector2){ 0, 0 };
    player->health = 100;
}

void UpdatePlayer(Player* player) {
    if (IsKeyDown(KEY_RIGHT)) player->position.x += 2;
    else if (IsKeyDown(KEY_LEFT)) player->position.x -= 2;
    else if (IsKeyDown(KEY_UP))player->position.y -= 2;
    else if (IsKeyDown(KEY_DOWN))player->position.y += 2;

}

void DrawPlayer(const Player* player) {
    // Dibujo del jugador en pantalla
    DrawCircleV(player->position, 10, RED);
}
