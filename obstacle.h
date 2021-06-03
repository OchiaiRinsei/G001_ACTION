#pragma once
#include"float2.h"
#include"rect_area.h"
struct OBSTACLE {
    //カボチャの画像読み込み
    int imgIdx = 0;
    //カボチャの位置情報
    int imgW = 0;
    int imgH = 0;
    struct FLOAT2 p;
    float vx = 0;
    struct RECT_AREA r;
};
void load(struct OBSTACLE* o);
void init(struct OBSTACLE* o);
void move(struct OBSTACLE* o);
void draw(struct OBSTACLE* o);