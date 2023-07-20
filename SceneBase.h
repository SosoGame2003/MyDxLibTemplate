#pragma once	// インクルードガード

namespace Scene
{
	class Scene
	{
	protected:
		Scene() {}

	public:
		virtual ~Scene() = default;

		/// <summary>
		/// 初期化処理
		/// </summary>
		virtual void Initialize() = 0;

		/// <summary>
		/// 更新処理
		/// </summary>
		/// <returns></returns>
		virtual Scene* Update() = 0;

		/// <summary>
		/// 描画処理
		/// </summary>
		virtual void Draw() = 0;

		/// <summary>
		/// 後処理
		/// </summary>
		virtual void Finalize() = 0;

	private:

	};
}