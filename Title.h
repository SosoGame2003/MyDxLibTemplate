#pragma once	// �C���N���[�h�K�[�h

// �K�v�ȃw�b�_�[�t�@�C�����C���N���[�h
#include"SceneBase.h"

class Title : public Scene
{
public:
	Title();
	virtual ~Title();

	void Initialize() override;
	Scene* Update() override;
	void Draw() override;
	void Finalize() override;

private:

};