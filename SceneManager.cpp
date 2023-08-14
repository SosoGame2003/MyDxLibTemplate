// 必要なヘッダーファイルをインクルード
#include"SceneManager.h"
#include"MainMenu.h"
#include"Play.h"
#include"Result.h"

SceneManager::SceneManager()
	: currentScene(nullptr)
	, deltaTime(0.0f)
	, time(0)
	, fpsCheckTime(0)
	, fps(0)
	, fpsCounter(0)
{
	deltaTime = 0.000001f;					// 最初の経過時間は仮に0.000001f秒にしておく
	time = GetNowHiPerformanceCount();	// システム時間を取得しておく
	fpsCheckTime = GetNowHiPerformanceCount();
}

SceneManager::~SceneManager()
{
	DeleteScene();
}

void SceneManager::GameLoop()
{
	while (!ProcessMessage())
	{
#ifdef _DEBUG
		if (CheckHitKey(KEY_INPUT_ESCAPE))	// エスケープキーを押すと
		{
			break;	// ループを抜ける
		}
#endif // _DEBUG
		auto tag = currentScene->Update(deltaTime);

		ClearDrawScreen();	// 画面に描かれていたものを消去する
		clsDx();			// 簡易画面出力履歴をクリア

#ifdef _DEBUG
		printfDx("deltaTime:%f\n", deltaTime);
		printfDx("FPS:%d\n", fps);
#endif // _DEBUG
		currentScene->Draw();

		ScreenFlip();	// 画面の裏ページの内容を表ページに反映する

		SaveDeltaTime();

		if (tag == SCENE_TAG::NONE)
		{
			continue;
		}

		DeleteScene();

		if (tag == SCENE_TAG::END)
		{
			break;
		}

		SetNowScene(tag);
	}
}

void SceneManager::SetNowScene(const SCENE_TAG& tag)
{
	switch (tag)
	{
	case SCENE_TAG::MENU:
		currentScene = new MainMenu();
		break;

	case SCENE_TAG::PLAY:
		currentScene = new Play();
		break;

	case SCENE_TAG::RESULT:
		currentScene = new Result();
		break;

	case SCENE_TAG::NONE:
		break;

	default:
		break;
	}
}

void SceneManager::DeleteScene()
{
	if (currentScene != nullptr)
	{
		delete currentScene;
		currentScene = nullptr;
	}
}

void SceneManager::SaveDeltaTime()
{
	currentTime = GetNowHiPerformanceCount();	// 現在のシステム時間を取得

	deltaTime = (currentTime - time) / 1000000.0f;	// 前回取得した時間からの経過時間を秒に変換してセット

	time = currentTime;	// 今回取得した時間を保存

	// FPS関係の処理
	fpsCounter++;
	if (currentTime - fpsCheckTime > 1000000)
	{
		fps = fpsCounter;
		fpsCounter = 0;
		fpsCheckTime = currentTime;
	}
}