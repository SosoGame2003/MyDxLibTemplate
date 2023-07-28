// 必要なヘッダーファイルをインクルード
#include<DxLib.h>
#include"Tutorial.h"

namespace Scene
{
	Tutorial::Tutorial() {}

	Tutorial::Tutorial(SceneTag* ptr)
	{
		nextScene = ptr;	// シーン更新ポインタを設定
	}

	Tutorial::~Tutorial() {}

	void Tutorial::Initialize()
	{
	}

	void Tutorial::Update()
	{
		if (CheckHitKey(KEY_INPUT_RETURN))
		{
			*nextScene = SceneTag::PLAY;	// シーン更新ポインタをプレイに設定
			WaitTimer(100);
		}
	}

	void Tutorial::Draw()
	{
		DrawString(900, 520, "Tutorial\n(エンターキーでプレイ画面へ)", GetColor(0, 255, 0));	// テスト用(後で消す)
	}

	SceneTag Tutorial::GetSceneTag()
	{
		return SceneTag::TUTORIAL;
	}
}