#include "raylib.h"

#include "maze.c"

#include "Player.c"



int main(){
	const int screenWidth = 1000;
	const int screenHeight = 650;

	InitWindow(screenWidth, screenHeight, "This is my maze game!");

	//set up maze size
	maze_map maze = {};
	maze.size_x = 600;
	maze.size_y = 600;
	
	//set up player
	Player player = {};
	player.position = randPos(maze.size_x, maze.size_y);


	//set up camera
	Camera2D camera = {};
    camera.target = player.position;
    camera.offset = (Vector2){ screenWidth/2.0f, screenHeight/2.0f };
    camera.rotation = 0.0f;
    camera.zoom = 1.0f;

	SetTargetFPS(60);



    // Main game loop
    while (!WindowShouldClose())
    {
        // Update
        //----------------------------------------------------------------------------------
        float deltaTime = GetFrameTime();

		UpdatePlayer(&player, deltaTime);



		//Draw
		BeginDrawing();

		ClearBackground(BLACK);

		BeginMode2D(camera);




		EndDrawing();
	}

	CloseWindow();

	return 0;
}
