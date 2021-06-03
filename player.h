#pragma once
#include"float2.h"
#include"rect_area.h"
struct PLAYER {
    //�����摜�ǂݍ���
    int imgIdx = 0;
    int imgW = 0;
    int imgH = 0;
    //�����̈ʒu�ƈړ��ƃW�����v�ɕK�v�ȏ��
    struct FLOAT2 p;
    float vx = 0;
    float vy = 0;
    float initVy = 0;
    float gravity = 0;
    int jumpFlag = 0;
    float limmitPy = p.y;
    struct RECT_AREA r;
};
void load(struct PLAYER* p);
void init(struct PLAYER* p);
void move(struct PLAYER* p);
void draw(struct PLAYER* p);