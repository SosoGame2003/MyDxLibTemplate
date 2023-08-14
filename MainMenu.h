#pragma once

#include"Scene.h"

class MainMenu : public Scene
{
public:
	MainMenu();
	~MainMenu();

	SCENE_TAG Update(float deltaTime) override;
	void Draw() override;

private:
	int g;
};