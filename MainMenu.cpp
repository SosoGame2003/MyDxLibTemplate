// �K�v�ȃw�b�_�[�t�@�C�����C���N���[�h
#include<DxLib.h>
#include"MainMenu.h"
#include"Play.h"
#include"Tutorial.h"

namespace Scene
{
	MainMenu::MainMenu() {}

	MainMenu::MainMenu(SceneTag* ptr)
	{
		nextScene = ptr;	// �V�[���X�V�|�C���^��ݒ�
	}

	MainMenu::~MainMenu() {}

	void MainMenu::Update()
	{
		if (CheckHitKey(KEY_INPUT_RETURN))
		{
			*nextScene = SceneTag::TUTORIAL;	// �V�[���X�V�|�C���^���`���[�g���A���ɐݒ�
			WaitTimer(100);
		}
	}

	void MainMenu::Draw()
	{
		DrawString(900, 520, "MainMenu", GetColor(255, 0, 0));	// �e�X�g�p(��ŏ���)
	}

	SceneTag MainMenu::GetSceneTag()
	{
		return SceneTag::MENU;
	}
}