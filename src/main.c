#include "raylib.h"
#include "world.h"
#include "player.h"
#include "camera.h"


//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Proyecto C");

    Player player;
    Camera2D camera = { 0 };
   
    InitPlayer(&player);
    InitCamera(&camera,&player, screenWidth, screenHeight);
    initWorld();

   

    SetTargetFPS(60);                   // Set our game to run at 60 frames-per-second
    
  
    
    // Main game loop
    while (!WindowShouldClose())        // Detect window close button or ESC key
    {
        float x = player.position.x;
        float y = player.position.y;
        
        // Camera target follows player
        UpdateCam(&camera,&player);

        UpdatePlayer(&player);
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(DARKBLUE);
      
        BeginMode2D(camera);
        drawWorld();
        DrawPlayer(&player);
        EndMode2D();


        DrawText(TextFormat("Player position: [%i, %i]", (int)x, (int)y), 20, 30, 10, BLACK);
       

        EndDrawing();
       
    }

 
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}