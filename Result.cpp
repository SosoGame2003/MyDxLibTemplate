// �K�v�ȃw�b�_�[�t�@�C�����C���N���[�h
#include<DxLib.h>
#include"Result.h"

namespace Scene
{
	Result::Result() {}

	Result::Result(SceneTag* ptr)
	{
		nextScene = ptr;	// �V�[���X�V�|�C���^��ݒ�
	}

	Result::~Result() {}

	void Result::Update()
	{
	}

	void Result::Draw()
	{
	}

	SceneTag Result::GetSceneTag()
	{
		return SceneTag::RESULT;
	}
}