// �K�v�ȃw�b�_�[�t�@�C�����C���N���[�h
#include<DxLib.h>
#include"Window.h"

void Window::Show()
{
    ChangeWindowMode(TRUE);
    SetGraphMode(screenSizeX, screenSizeY, colorBitDepth);
}