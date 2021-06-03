#include"libOne.h"
#include"player.h"

void load(struct PLAYER* p) {
    p->imgIdx = loadImage("assets/witch.png");
    p->imgH = 500;
    p->imgW = 223;
}

void init(struct PLAYER* p) {
    //player �̏������
    p->p.x = 100;
    p->p.y = height - p->imgH;
    p->vx = 2;
    p->limmitPy = p->p.y;
    p->initVy = -66;
    p->gravity = 3;
    p->jumpFlag = 0;
    p->r.dx = 83;
    p->r.dy = 0;
    p->r.w = p->imgW - p->r.dx * 2+6;
    p->r.h = p->imgH;

}

void move(struct PLAYER* p) {
    //�������ւ̈ړ�
    p->p.x += p->vx;
    //spece �ɂ�鏑������
    if (p->jumpFlag == 0) {
        if (isTrigger(KEY_SPACE)) {
            p->vy = p->initVy;
            p->jumpFlag = 1;
        }
    }
    //�󒆂ł̈ړ�
    if (p->jumpFlag == 1) {
        p->p.y += p->vy;
        p->vy += p->gravity;
        if (p->p.y > p->limmitPy) {
            //���n
            p->p.y = p->limmitPy;
            p->jumpFlag = 0;
        }
    }
}

void draw(struct PLAYER* p){
            //�`��
            image(p->imgIdx, p->p.x, p->p.y);
}