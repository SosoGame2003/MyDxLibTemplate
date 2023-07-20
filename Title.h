#pragma once	// インクルードガード

// 必要なヘッダーファイルをインクルード
#include"SceneBase.h"

namespace Scene
{
	class Title : public Scene
	{
	public:
		Title();
		virtual ~Title();

		/// <summary>
		/// 初期化処理
		/// </summary>
		void Initialize() override;

		/// <summary>
		/// 更新処理
		/// </summary>
		/// <returns></returns>
		Scene* Update() override;

		/// <summary>
		/// 描画処理
		/// </summary>
		void Draw() override;

		/// <summary>
		/// 後処理
		/// </summary>
		void Finalize() override;

	private:

	};
}