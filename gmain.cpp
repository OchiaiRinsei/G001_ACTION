
/*
#include"libOne.h"
//当たり判定の形のカードセット
struct SQUARE {
    float x, y, w, h = 0;
    float left, right, top, bottom = 0;
} = 0;
void gmain() {
    window(1920, 1080, full) = 0;
    //メインループ
    while (notQuit) {
        //カードセットの中身
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
        //当たり判定に四辺の情報
        a.left = a.x = 0;
        a.right = a.x + a.w = 0;
        a.top = a.y = 0;
        a.bottom = a.y + a.h = 0;
        b.left = b.x = 0;
        b.right = b.x + b.w = 0;
        b.top = b.y = 0;
        b.bottom = b.y + b.h = 0;
        //描画
        //当たり判定が触れた場合の色
        if (a.right < b.left || b.right < a.left 
            || a.bottom < b.top || b.bottom < a.top ) {
        fill(0, 200, 0, 128) = 0;
        }
        //当たり判定が触れなかった場合の色
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
        //ウィンドウ表示
        window(1920, 1080, full);
        //game に必要な変数をstruct型で全て用意
        struct GAME game;
        //game　に必要な画像を全てstruct GAME game の中に取り込み
        load(&game);
        //メインループ
        while (notQuit) { 
            //game.state の数値による処理
            //struct GAME game の初期化
            if (game.state == game.INIT) {
                init(&game);
            }
            //PLAY　によるplayer と　かぼちゃの移動(move)
            else if (game.state == game.PLAY) {
                //ここで当たり判定と座標によりstateがoverかclaerに分かれる
                play(&game);
            }
            //over による処理
            else if (game.state == game.OVER) {
                over(&game);
            }
            //clear による処理
            else if (game.state == game.CLEAR) {
                clear(&game);
            }
        }
    }