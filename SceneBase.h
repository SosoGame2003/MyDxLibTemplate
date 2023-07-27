#pragma once	// インクルードガード

// 必要なヘッダーファイルをインクルード
#include"SceneTag.h"

/// <summary>
/// 各シーンの基底クラス
/// </summary>
namespace Scene
{
	class SceneBase
	{
	public:
		SceneBase();
		virtual ~SceneBase() {};

		/// <summary>
		/// 初期化処理
		/// </summary>
		virtual void Initialize() {}

		/// <summary>
		/// 更新処理
		/// </summary>
		virtual void Update() {}

		/// <summary>
		/// 描画処理
		/// </summary>
		virtual void Draw() {}

		/// <summary>
		/// シーンタグ所得用関数
		/// </summary>
		/// <returns>シーンのタグ</returns>
		virtual SceneTag GetSceneTag();

	protected:
		SceneTag* nextScene;
	};

	inline SceneBase::SceneBase() : nextScene() {};

	inline SceneTag SceneBase::GetSceneTag() { return SceneTag::DUMMY; }
}