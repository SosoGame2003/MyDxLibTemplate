#pragma once	// �C���N���[�h�K�[�h

// �K�v�ȃw�b�_�[�t�@�C�����C���N���[�h
#include"SceneBase.h"

class Play : public Scene
{
public:
	Play();
	virtual ~Play();

	void Initialize() override;
	Scene* Update() override;
	void Draw() override;
	void Finalize() override;

private:

};