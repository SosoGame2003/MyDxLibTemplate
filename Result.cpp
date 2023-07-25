// 必要なヘッダーファイルをインクルード
#include<DxLib.h>
#include"Result.h"

namespace Scene
{
	Result::Result() {}

	Result::Result(SceneTag* ptr)
	{
		nextScene = ptr;	// シーン更新ポインタを設定
	}

	Result::~Result() {}

	void Result::Update()
	{
	}

	void Result::Draw()
	{
	}

	SceneTag Result::GetSceneTag()
	{
		return SceneTag::RESULT;
	}
}