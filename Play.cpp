// 必要なヘッダーファイルをインクルード
#include<DxLib.h>
#include"Play.h"

Play::Play()
{
	g = LoadGraph("Data/Graph/DummyPlay.png");
}

Play::~Play()
{
}

SCENE_TAG Play::Update(float deltaTime)
{
	if (CheckHitKey(KEY_INPUT_SPACE))
	{
		return SCENE_TAG::RESULT;
	}

	if (CheckHitKey(KEY_INPUT_END))
	{
		return SCENE_TAG::MENU;
	}

	return SCENE_TAG::NONE;
}

void Play::Draw()
{
	DrawGraph(0, 0, g, TRUE);
}