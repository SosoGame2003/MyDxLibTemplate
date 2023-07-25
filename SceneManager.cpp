// 必要なヘッダーファイルをインクルード
#include"SceneManager.h"

namespace Scene
{
	SceneManager::SceneManager()
	{
		scene = SceneTag::MENU;
		nowScene = new MainMenu(&scene);
	}

	SceneManager::~SceneManager()
	{
		nowScene->~SceneBase();
	}

	void SceneManager::Update()
	{
		if (nowScene->GetSceneTag() != scene)
		{
			nowScene->~SceneBase();

			switch (scene)
			{
			case SceneTag::MENU:
				nowScene = new MainMenu(&scene);
				return;

			case SceneTag::TUTORIAL:
				nowScene = new Tutorial(&scene);
				return;

			case SceneTag::PLAY:
				nowScene = new Play(&scene);
				return;

			case SceneTag::RESULT:
				nowScene = new Result(&scene);
				return;

			default:
				break;
			}
		}
		nowScene->Update();
	}

	void SceneManager::Draw()
	{
		nowScene->Draw();
	}
}