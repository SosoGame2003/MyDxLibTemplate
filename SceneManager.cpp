// 必要なヘッダーファイルをインクルード
#include"SceneManager.h"
#include"Title.h"
#include"Tutorial.h"
#include"Play.h"
#include"Result.h"

SceneManager::SceneManager()
	: mScene(new Title)
{
}

SceneManager::~SceneManager()
{
}

void SceneManager::Initialize()
{
}

bool SceneManager::Update()
{
	Scene* pScene = mScene->Update();

	if (pScene == nullptr)
	{
		return false;
	}

	if (pScene != mScene)
	{
		delete mScene;
		mScene = pScene;
	}

	return true;
}

void SceneManager::Draw()
{
	mScene->Draw();
}

void SceneManager::Finalize()
{
	if (mScene)
	{
		delete mScene;
		mScene = nullptr;
	}
}

Scene* SceneManager::GetTitle()
{
	return new Title;
}

Scene* SceneManager::GetTutorial()
{
	return new Tutorial;
}

Scene* SceneManager::GetPlay()
{
	return new Play;
}

Scene* SceneManager::GetResult()
{
	return new Result;
}
