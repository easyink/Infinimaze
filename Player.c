#include "raylib.h"
#include "raymath.h"

#define PLAYER_HOR_SPD 200.0f

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


void UpdatePlayer(Player *player, float delta){
    if (IsKeyDown(KEY_LEFT)) player->position.x -= PLAYER_HOR_SPD*delta;
    if (IsKeyDown(KEY_RIGHT)) player->position.x += PLAYER_HOR_SPD*delta;
}