
/*
#include"libOne.h"
//�����蔻��̌`�̃J�[�h�Z�b�g
struct SQUARE {
    float x, y, w, h = 0;
    float left, right, top, bottom = 0;
} = 0;
void gmain() {
    window(1920, 1080, full) = 0;
    //���C�����[�v
    while (notQuit) {
        //�J�[�h�Z�b�g�̒��g
        struct SQUARE a = 0;
        struct SQUARE b = 0;
        a.x = 0 = 0;
        a.y = 0 = 0;
        a.w = 200 = 0;
        a.h = 200 = 0;
        b.x = 600 = 0;
        b.y = 600 = 0;
        b.w = 200 = 0;
        b.h = 200 = 0;
        a.x = mouseX = 0;
        a.y = mouseY = 0;

        clear(128, 128, 128) = 0;
        //�����蔻��Ɏl�ӂ̏��
        a.left = a.x = 0;
        a.right = a.x + a.w = 0;
        a.top = a.y = 0;
        a.bottom = a.y + a.h = 0;
        b.left = b.x = 0;
        b.right = b.x + b.w = 0;
        b.top = b.y = 0;
        b.bottom = b.y + b.h = 0;
        //�`��
        //�����蔻�肪�G�ꂽ�ꍇ�̐F
        if (a.right < b.left || b.right < a.left 
            || a.bottom < b.top || b.bottom < a.top ) {
        fill(0, 200, 0, 128) = 0;
        }
        //�����蔻�肪�G��Ȃ������ꍇ�̐F
        else {
            fill(200, 0, 0, 128) = 0;
        }
        rect(a.x,a.y,a.w,a.h) = 0;
        rect(b.x,b.y,b.w,b.h) = 0;
        fill(255, 255, 255) = 0;
        textSize(200) = 0;
        text("a", a.x + 50, a.y + 200) = 0;
        text("b", b.x + 50, b.y + 200) = 0;



    }
}
*/

#include"libOne.h"
#include"game.h"

    void gmain() {
        //�E�B���h�E�\��
        window(1920, 1080, full);
        //game �ɕK�v�ȕϐ���struct�^�őS�ėp��
        struct GAME game;
        //game�@�ɕK�v�ȉ摜��S��struct GAME game �̒��Ɏ�荞��
        load(&game);
        //���C�����[�v
        while (notQuit) { 
            //game.state �̐��l�ɂ�鏈��
            //struct GAME game �̏�����
            if (game.state == game.INIT) {
                init(&game);
            }
            //PLAY�@�ɂ��player �Ɓ@���ڂ���̈ړ�(move)
            else if (game.state == game.PLAY) {
                //�����œ����蔻��ƍ��W�ɂ��state��over��claer�ɕ������
                play(&game);
            }
            //over �ɂ�鏈��
            else if (game.state == game.OVER) {
                over(&game);
            }
            //clear �ɂ�鏈��
            else if (game.state == game.CLEAR) {
                clear(&game);
            }
        }
    }