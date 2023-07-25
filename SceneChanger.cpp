#include<DxLib.h>
#include"SceneChanger.h"

void Scene::SceneChanger::Initialize()
{
	sceneMgr.Change();
}

void Scene::SceneChanger::Change()
{
	if (CheckHitKey(KEY_INPUT_RETURN))
	{
		SceneManager<Tutorial>;
	}
}

void Scene::SceneChanger::Update()
{
	sceneMgr.Update();
}

void Scene::SceneChanger::Draw()
{
	sceneMgr.Draw();
}

void Scene::SceneChanger::Finalize()
{

}