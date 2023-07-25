#pragma once	// インクルードガード

/// <summary>
/// シーンのタグ
/// </summary>
enum class SceneTag
{
	DUMMY	 = -1,
	MENU	 =  0,	// メインメニュー
	TUTORIAL =  1,	// チュートリアル
	PLAY	 =  2,	// プレイ
	RESULT	 =  3,	// リザルト
};