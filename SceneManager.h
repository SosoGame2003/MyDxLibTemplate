#pragma once

// 必要なヘッダーファイルをインクルード
#include<DxLib.h>
#include"Scene.h"

/// <summary>
/// シーンマネージャー
/// </summary>
class SceneManager
{
public:
	SceneManager();
	~SceneManager();

	void GameLoop();

	void SetNowScene(const SCENE_TAG& tag);

private:
	void DeleteScene();
	void SaveDeltaTime();
	Scene* currentScene;

	float deltaTime;
	int fps;
	int fpsCounter;
	LONGLONG currentTime;
	LONGLONG time;
	LONGLONG fpsCheckTime;

};