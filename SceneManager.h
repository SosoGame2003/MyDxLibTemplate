#pragma once	// インクルードガード

namespace Scene
{
	class Scene;

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
		/// <returns></returns>
		bool Update();

		/// <summary>
		/// 描画処理
		/// </summary>
		void Draw();

		/// <summary>
		/// 後処理
		/// </summary>
		void Finalize();

		Scene* GetTitle();
		Scene* GetTutorial();
		Scene* GetPlay();
		Scene* GetResult();

	private:
		Scene* mScene;
	};
}