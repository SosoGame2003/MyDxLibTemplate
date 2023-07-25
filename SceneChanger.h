#pragma once
#include"SceneManager.h"
#include"MainMenu.h"
#include"Tutorial.h"
#include"Play.h"
#include"Result.h"

namespace Scene
{
	class SceneChanger
	{
	public:
		SceneChanger() {}
		~SceneChanger() {}

		/// <summary>
		/// 初期化処理
		/// </summary>
		void Initialize();

		/// <summary>
		/// シーンチェンジ処理
		/// </summary>
		void Change();

		/// <summary>
		/// 更新処理
		/// </summary>
		void Update();

		/// <summary>
		/// 描画処理
		/// </summary>
		void Draw();

		/// <summary>
		/// 後処理
		/// </summary>
		void Finalize();

	private:
		SceneManager<MainMenu> sceneMgr;
	};
}