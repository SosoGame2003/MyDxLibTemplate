// 必要なヘッダーファイルをインクルード
#include<DxLib.h>
#include"MainMenu.h"

MainMenu::MainMenu()
{
	g = LoadGraph("Data/Graph/DummyTitle.png");
}

MainMenu::~MainMenu()
{
}

SCENE_TAG MainMenu::Update(float deltaTime)
{
	if (CheckHitKey(KEY_INPUT_RETURN))
	{
		return SCENE_TAG::PLAY;
	}

	return SCENE_TAG::NONE;	// シーンの変更なし
}

void MainMenu::Draw()
{
	DrawGraph(0, 0, g, TRUE);
}