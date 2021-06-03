#pragma once
#include"obstacle.h"
#include"player.h"
struct GAME {
	//ゲームモードの判断
	int state = 0;
	const int INIT = 0;
	const int PLAY = 1;
	const int OVER = 2;
	const int CLEAR = 3;
	struct OBSTACLE obstacle;
	struct PLAYER player;
};
//全体をまとめる関数の宣言
void load(struct GAME* g);
void init(struct GAME* g);
void play(struct GAME* g);
void over(struct GAME* g);
void clear(struct GAME* g);
void draw(struct GAME* g);
int collision(struct PLAYER* p, struct OBSTACLE* o);

