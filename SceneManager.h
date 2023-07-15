#pragma once	// �C���N���[�h�K�[�h

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