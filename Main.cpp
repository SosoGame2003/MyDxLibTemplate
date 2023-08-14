// 必要なヘッダーファイルをインクルード
#include<Windows.h>
#include"Application.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, INT nShowCmd)
{
	Application app;
	app.GameLoop();

	return 0;
}