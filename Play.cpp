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

	void Play::Update()
	{
	}

	void Play::Draw()
	{
		DrawString(900, 520, "Play", GetColor(255, 0, 0));	// �e�X�g�p(��ŏ���)
	}

	SceneTag Play::GetSceneTag()
	{
		return SceneTag::PLAY;
	}
}