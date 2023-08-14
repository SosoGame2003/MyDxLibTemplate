// �K�v�ȃw�b�_�[�t�@�C�����C���N���[�h
#include<DxLib.h>
#include"Application.h"
#include"SceneManager.h"
#include"Scene.h"

Application::Application()
{
	SetMainWindowText("Sample");				// �E�B���h�E�̃^�C�g����ύX
	SetGraphMode(ScreenSizeX, ScreenSizeY, ColorBitDepth);	// ��ʃ��[�h�̕ύX
	ChangeWindowMode(TRUE);							// �E�B���h�E���[�h�E�t���X�N���[�����[�h�̕ύX
	SetWaitVSyncFlag(TRUE);							// ScreenFlip�֐����s���ɂb�q�s�̐��������M���҂������邩
	SetOutApplicationLogValidFlag(FALSE);				// ���O�o�͂��s�����ۂ�

	DxLib_Init();											// DX���C�u����������
	SetDrawScreen(DX_SCREEN_BACK);					// �`���O���t�B�b�N�̈�̎w��

	sceneMgr = new SceneManager();
	sceneMgr->SetNowScene(SCENE_TAG::MENU);
}

Application::~Application()
{
	delete sceneMgr;
	sceneMgr = 0;

	DxLib_End();
}

void Application::GameLoop()
{
	sceneMgr->GameLoop();
}