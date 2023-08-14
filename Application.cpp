// 必要なヘッダーファイルをインクルード
#include<DxLib.h>
#include"Application.h"
#include"SceneManager.h"
#include"Scene.h"

Application::Application()
{
	SetMainWindowText("Sample");				// ウィンドウのタイトルを変更
	SetGraphMode(ScreenSizeX, ScreenSizeY, ColorBitDepth);	// 画面モードの変更
	ChangeWindowMode(TRUE);							// ウィンドウモード・フルスクリーンモードの変更
	SetWaitVSyncFlag(TRUE);							// ScreenFlip関数実行時にＣＲＴの垂直同期信号待ちをするか
	SetOutApplicationLogValidFlag(FALSE);				// ログ出力を行うか否か

	DxLib_Init();											// DXライブラリ初期化
	SetDrawScreen(DX_SCREEN_BACK);					// 描画先グラフィック領域の指定

	sceneMgr = new SceneManager();
	sceneMgr->SetNowScene(SCENE_TAG::MENU);
}

Application::~Application()
{
	delete sceneMgr;
	sceneMgr = 0;

	DxLib_End();
}

void Application::GameLoop()
{
	sceneMgr->GameLoop();
}