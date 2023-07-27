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
		/// 初期化処理
		/// </summary>
		void Initialize();

		/// <summary>
		/// 更新処理
		/// </summary>
		void Update();

		/// <summary>
		/// 描画処理
		/// </summary>
		void Draw();

	private:
		/// <summary>
		/// シーン切り替え
		/// </summary>
		void Changer();

		SceneBase* nowScene;	// 現在のシーン
		SceneTag scene;			// 動作しているシーンのタグ
	};
}