#pragma once	// インクルードガード

class Scene;

class SceneManager
{
public:
	SceneManager();
	~SceneManager();

	void Initialize();
	bool Update();
	void Draw();
	void Finalize();

	Scene* GetTitle();
	Scene* GetTutorial();
	Scene* GetPlay();
	Scene* GetResult();

private:
	Scene* mScene;
};