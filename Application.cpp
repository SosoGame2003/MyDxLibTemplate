// 必要なヘッダーファイルをインクルード
#include"Application.h"

Application::Application()
{
	DxLib_Init();	// DXライブラリ初期化処理

	mProcessCtrl = new ProcessingControl();
}

Application::~Application()
{
}

void Application::Initialize()
{
	mProcessCtrl->Initialize();
}

void Application::GameLoop()
{
	while (ProcessMessage() == 0)
	{

		ClearDrawScreen();	// 画面更新処理

		// 更新処理
		mProcessCtrl->Update();

		// 描画処理
		mProcessCtrl->Draw();

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
	mProcessCtrl->Finalize();
	delete mProcessCtrl;
	mProcessCtrl = nullptr;

	DxLib_End();	// DXライブラリ終了処理
}