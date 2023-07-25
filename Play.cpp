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

	void Play::Update()
	{
	}

	void Play::Draw()
	{
		DrawString(900, 520, "Play", GetColor(255, 0, 0));	// テスト用(後で消す)
	}

	SceneTag Play::GetSceneTag()
	{
		return SceneTag::PLAY;
	}
}