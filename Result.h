#pragma once

#include"Scene.h"

class Result : public Scene
{
public:
	Result();
	~Result();

	SCENE_TAG Update(float deltaTime) override;

	void Draw();

private:
	int g;
};