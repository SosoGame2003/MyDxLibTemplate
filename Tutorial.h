#pragma once	// �C���N���[�h�K�[�h

// �K�v�ȃw�b�_�[�t�@�C�����C���N���[�h
#include"SceneBase.h"

class Tutorial : public Scene
{
public:
	Tutorial();
	virtual ~Tutorial();

	void Initialize() override;
	Scene* Update() override;
	void Draw() override;
	void Finalize() override;

private:

};