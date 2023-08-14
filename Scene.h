#pragma once

enum class SCENE_TAG
{
	MENU,
	PLAY,
	RESULT,
	END,
	NONE,
};

class Scene
{
public:
	Scene() { /*ˆ—‚È‚µ*/ }
	virtual ~Scene() { /*ˆ—‚È‚µ*/ }

	virtual SCENE_TAG Update(float deltaTime) = 0;
	virtual void Draw() = 0;
};