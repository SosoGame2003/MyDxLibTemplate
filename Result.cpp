// �K�v�ȃw�b�_�[�t�@�C�����C���N���[�h
#include<DxLib.h>
#include"Result.h"

Result::Result()
{
	g = LoadGraph("Data/Graph/DummyResult.png");
}

Result::~Result()
{
}

SCENE_TAG Result::Update(float deltaTime)
{
	if (CheckHitKey(KEY_INPUT_END))
	{
		return SCENE_TAG::MENU;
	}

	return SCENE_TAG::NONE;
}

void Result::Draw()
{
	DrawGraph(0, 0, g, TRUE);
}