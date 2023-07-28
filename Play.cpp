// �K�v�ȃw�b�_�[�t�@�C�����C���N���[�h
#include<DxLib.h>
#include"Play.h"

namespace Scene
{
	Play::Play() {}

	Play::Play(SceneTag* ptr)
	{
		nextScene = ptr;	// �V�[���X�V�|�C���^��ݒ�
	}

	Play::~Play() {}

	void Play::Initialize()
	{
	}

	void Play::Update()
	{
		if (CheckHitKey(KEY_INPUT_END))
		{
			*nextScene = SceneTag::MENU;	// �V�[���X�V�|�C���^���v���C�ɐݒ�
			WaitTimer(100);
		}
	}

	void Play::Draw()
	{
		DrawString(900, 520, "Play\n(�G���h�L�[�Ń��j���[��)", GetColor(0, 255, 255));	// �e�X�g�p(��ŏ���)
	}

	SceneTag Play::GetSceneTag()
	{
		return SceneTag::PLAY;
	}
}