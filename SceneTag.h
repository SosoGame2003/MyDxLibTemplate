#pragma once	// インクルードガード

/// <summary>
/// シーンのタグ
/// </summary>
enum class SceneTag
{
	DUMMY	 = -1,	// ダミー(実際のシーンではない)
	MENU	 =  0,	// メインメニュー
	TUTORIAL =  1,	// チュートリアル
	PLAY	 =  2,	// プレイ
	RESULT	 =  3,	// リザルト
};