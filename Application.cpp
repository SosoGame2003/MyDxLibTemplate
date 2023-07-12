// 必要なヘッダーファイルをインクルード
#include"Application.h"

Application::Application()
{
	DxLib_Init();	// DXライブラリ初期化処理

	processCtrl = new ProcessingControl();
}

Application::~Application()
{
}

void Application::Initialize()
{
	processCtrl->Initialize();
}

void Application::GameLoop()
{
	while (ProcessMessage() == 0)
	{

		ClearDrawScreen();	// 画面更新処理

		// 更新処理
		processCtrl->Update();

		// 描画処理
		processCtrl->Draw();

		ScreenFlip();	// 描画確定

		// ESCAPEキーが押されたらループを抜ける
		if (CheckHitKey(KEY_INPUT_ESCAPE))
		{
			break;
		}
	}
}

void Application::Finalize()
{
	processCtrl->Finalize();
	delete processCtrl;
	processCtrl = nullptr;

	DxLib_End();	// DXライブラリ終了処理
}
