#include "raylib.h"

#include "maze.c"

#include "Player.c"



int main(){
	const int screenWidth = 1000;
	const int screenHeight = 1000;

	InitWindow(screenWidth, screenHeight, "This is my maze game!");

	Player player = {};

	maze_map maze = {};
	maze.size_x = 600;
	maze.size_y = 600;
	player.position = ;

}
