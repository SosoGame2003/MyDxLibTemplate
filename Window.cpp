// 必要なヘッダーファイルをインクルード
#include<DxLib.h>
#include"Window.h"

void Window::Show()
{
    ChangeWindowMode(TRUE);
    SetGraphMode(screenSizeX, screenSizeY, colorBitDepth);
}