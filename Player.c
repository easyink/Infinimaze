#include "raylib.h"
#include "raymath.h"


typedef struct Player {
	Vector2 position;
	float speed;
} Player;


Vector2 randPos(int w, int h){
	Vector2 newPos;

	newPos.y = GetRandomValue(0, h);
	newPos.x = GetRandomValue(0, w);

	return newPos;
}