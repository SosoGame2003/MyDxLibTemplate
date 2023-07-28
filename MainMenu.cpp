// 必要なヘッダーファイルをインクルード
#include<DxLib.h>
#include"MainMenu.h"
#include"Play.h"
#include"Tutorial.h"

namespace Scene
{
	MainMenu::MainMenu() {}

	MainMenu::MainMenu(SceneTag* ptr)
	{
		nextScene = ptr;	// シーン更新ポインタを設定
	}

	MainMenu::~MainMenu() {}

	void MainMenu::Initialize()
	{
	}

	void MainMenu::Update()
	{
		if (CheckHitKey(KEY_INPUT_RETURN))
		{
			*nextScene = SceneTag::TUTORIAL;	// シーン更新ポインタをチュートリアルに設定
			WaitTimer(100);
		}
		if (CheckHitKey(KEY_INPUT_SPACE))
		{
			*nextScene = SceneTag::PLAY;	// シーン更新ポインタをプレイに設定
			WaitTimer(100);
		}
	}

	void MainMenu::Draw()
	{
		DrawString(900, 520, "MainMenu\n(エンターキーでチュートリアルへ)\n(スペースキーでプレイへ)", GetColor(255, 0, 0));	// テスト用(後で消す)
	}

	SceneTag MainMenu::GetSceneTag()
	{
		return SceneTag::MENU;
	}
}