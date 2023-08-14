#pragma once

// �K�v�ȃw�b�_�[�t�@�C�����C���N���[�h
#include<DxLib.h>
#include"Scene.h"

/// <summary>
/// �V�[���}�l�[�W���[
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