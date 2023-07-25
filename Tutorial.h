#pragma once	// インクルードガード

// 必要なヘッダーファイルをインクルード
#include"SceneBase.h"

namespace Scene
{
	class Tutorial : public SceneBase
	{
	public:
		Tutorial();

		/// <summary>
		/// コンストラクタ
		/// </summary>
		/// <param name="ptr">シーン更新ポインタ</param>
		Tutorial(SceneTag* ptr);

		~Tutorial();

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