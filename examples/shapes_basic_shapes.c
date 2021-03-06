/*******************************************************************************************
*
*   raylib [shapes] example - Draw basic shapes 2d (rectangle, circle, line...)
*
*   This example has been created using raylib 1.0 (www.raylib.com)
*   raylib is licensed under an unmodified zlib/libpng license (View raylib.h for details)
*
*   Copyright (c) 2014 Ramon Santamaria (Ray San - raysan@raysanweb.com)
*
********************************************************************************************/

#include "raylib.h"

int main()
{
    // Initialization
    //--------------------------------------------------------------------------------------
    int screenWidth = 800;
    int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "raylib [shapes] example - basic shapes drawing");
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(RAYWHITE);

            DrawText("some basic shapes available on raylib", 20, 20, 20, DARKGRAY);

            DrawLine(18, 42, screenWidth - 18, 42, BLACK);

            DrawCircle(screenWidth/4, 120, 35, DARKBLUE);
            DrawCircleGradient(screenWidth/4, 220, 60, GREEN, SKYBLUE);
            DrawCircleLines(screenWidth/4, 340, 80, DARKBLUE);

            DrawRectangle(screenWidth/4*2 - 60, 100, 120, 60, RED);
            DrawRectangleGradient(screenWidth/4*2 - 90, 170, 180, 130, MAROON, GOLD);
            DrawRectangleLines(screenWidth/4*2 - 40, 320, 80, 60, ORANGE);

            DrawTriangle((Vector2){screenWidth/4*3, 80},
                         (Vector2){screenWidth/4*3 - 60, 150},
                         (Vector2){screenWidth/4*3 + 60, 150}, VIOLET);

            DrawTriangleLines((Vector2){screenWidth/4*3, 160},
                              (Vector2){screenWidth/4*3 - 20, 230},
                              (Vector2){screenWidth/4*3 + 20, 230}, DARKBLUE);

            DrawPoly((Vector2){screenWidth/4*3, 320}, 6, 80, 0, BROWN);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}