// �K�v�ȃw�b�_�[�t�@�C�����C���N���[�h
#include"Application.h"

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, INT)
{
	Application* app;
	app = new Application;

	app->Initialize();
	app->GameLoop();
	app->Finalize();

	return 0;
}