#pragma once	// �C���N���[�h�K�[�h

class Scene
{
protected:
	Scene() {}

public:
	virtual ~Scene() = default;

	virtual void Initialize() = 0;
	virtual Scene* Update() = 0;
	virtual void Draw() = 0;
	virtual void Finalize() = 0;

private:

};