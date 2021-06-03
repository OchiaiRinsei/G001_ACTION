#include"libOne.h"
#include"obstacle.h"

void load(struct OBSTACLE* o) {
    //カボチャの画像読み込み
	o->imgIdx = loadImage("assets/pumpkin.png");
	//カボチャの位置情報
	o->imgW = 364;
	o->imgH = 300;
}

void init(struct OBSTACLE* o) {
	//かぼちゃの初期情報
	o->p.x = width;
	o->p.y = height - o->imgH;
	o->vx = -10;
	o->r.dx = 30;
	o->r.dy = 50;
	o->r.w = o->imgW - o->r.dx * 2;
	o->r.h = o->imgH - o -> r.dy;
}

void move(struct OBSTACLE* o) {
	//カボチャの横移動情報
	o->p.x += o->vx;
	if (o->p.x < -o->imgW) {
		o->p.x = width;
	}
}

void draw(struct OBSTACLE* o) {
	//描写（カボチャ）
		image(o->imgIdx, o->p.x, o->p.y);
}