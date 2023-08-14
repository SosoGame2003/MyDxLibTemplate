#pragma once

#include"Scene.h"

class Play : public Scene
{
public:
	Play();
	~Play();

	SCENE_TAG Update(float deltaTime) override;

	void Draw() override;

private:
	int g;
};