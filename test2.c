#include "raylib.h"

int main(void)
{
	InitWindow(1000, 900, "testing");


	while(!WindowShouldClose()){
		BeginDrawing();
		
		ClearBackground(BLUE);

		DrawText("I am writing my own crap here!", 150, 150, 30, BLACK);

		EndDrawing();
	}

	CloseWindow();

	return 0;


}