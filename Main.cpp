// 必要なヘッダーファイルをインクルード
#include"Application.h"

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, INT)
{
	Application* mApp;
	mApp = new Application;

	mApp->Initialize();
	mApp->GameLoop();
	mApp->Finalize();

	return 0;
}