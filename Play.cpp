// 必要なヘッダーファイルをインクルード
#include<DxLib.h>
#include"Play.h"

namespace Scene
{
	Play::Play() {}

	Play::Play(SceneTag* ptr)
	{
		nextScene = ptr;	// シーン更新ポインタを設定
	}

	Play::~Play() {}

	void Play::Initialize()
	{
	}

	void Play::Update()
	{
		if (CheckHitKey(KEY_INPUT_END))
		{
			*nextScene = SceneTag::MENU;	// シーン更新ポインタをプレイに設定
			WaitTimer(100);
		}
	}

	void Play::Draw()
	{
		DrawString(900, 520, "Play\n(エンドキーでメニューへ)", GetColor(0, 255, 255));	// テスト用(後で消す)
	}

	SceneTag Play::GetSceneTag()
	{
		return SceneTag::PLAY;
	}
}