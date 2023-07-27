#pragma once	// インクルードガード

// 必要なヘッダーファイルをインクルード
#include"SceneBase.h"

namespace Scene
{
	class Result : public SceneBase
	{
	public:
		Result();

		/// <summary>
		/// コンストラクタ
		/// </summary>
		/// <param name="ptr">シーン更新ポインタ</param>
		Result(SceneTag* ptr);

		~Result();

		/// <summary>
		/// 初期化処理
		/// </summary>
		void Initialize();

		/// <summary>
		/// 更新処理
		/// </summary>
		void Update() override;

		/// <summary>
		/// 描画処理
		/// </summary>
		void Draw() override;

		/// <summary>
		/// シーンタグ所得用関数
		/// </summary>
		/// <returns>シーンのタグ</returns>
		SceneTag GetSceneTag() override;

	private:

	};
}