#pragma once	// インクルードガード

// 必要なヘッダーファイルをインクルード
#include"SceneBase.h"
#include"MainMenu.h"
#include"Tutorial.h"
#include"Play.h"
#include"Result.h"

/// <summary>
/// シーン管理クラス
/// </summary>
namespace Scene
{
	class SceneManager
	{
	public:
		SceneManager();
		~SceneManager();

		/// <summary>
		/// 更新処理
		/// </summary>
		void Update();

		/// <summary>
		/// 描画処理
		/// </summary>
		void Draw();

	private:
		SceneBase* nowScene;	// 現在のシーン
		SceneTag scene;			// 動作しているシーンのタグ
	};
}