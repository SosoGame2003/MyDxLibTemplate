#pragma once	// �C���N���[�h�K�[�h

// �K�v�ȃw�b�_�[�t�@�C�����C���N���[�h
#include"SceneBase.h"

class Result : public Scene
{
public:
	Result();
	virtual ~Result();

	void Initialize() override;
	Scene* Update() override;
	void Draw() override;
	void Finalize() override;

private:

};