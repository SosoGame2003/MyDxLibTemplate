// �K�v�ȃw�b�_�[�t�@�C�����C���N���[�h
#include<Windows.h>
#include"Application.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, INT nShowCmd)
{
	Application app;
	app.GameLoop();

	return 0;
}