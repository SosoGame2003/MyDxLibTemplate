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
	Scene() { /*�����Ȃ�*/ }
	virtual ~Scene() { /*�����Ȃ�*/ }

	virtual SCENE_TAG Update(float deltaTime) = 0;
	virtual void Draw() = 0;
};