// �K�v�ȃw�b�_�[�t�@�C�����C���N���[�h
#include<DxLib.h>
#include"Tutorial.h"

namespace Scene
{
	Tutorial::Tutorial() {}

	Tutorial::Tutorial(SceneTag* ptr)
	{
		nextScene = ptr;	// �V�[���X�V�|�C���^��ݒ�
	}

	Tutorial::~Tutorial() {}

	void Tutorial::Update()
	{
		if (CheckHitKey(KEY_INPUT_RETURN))
		{
			*nextScene = SceneTag::PLAY;	// �V�[���X�V�|�C���^���v���C�ɐݒ�
			WaitTimer(100);
		}
	}

	void Tutorial::Draw()
	{
		DrawString(900, 520, "Tutorial", GetColor(255, 0, 0));	// �e�X�g�p(��ŏ���)
	}

	SceneTag Tutorial::GetSceneTag()
	{
		return SceneTag::TUTORIAL;
	}
}