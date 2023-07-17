// �K�v�ȃw�b�_�[�t�@�C�����C���N���[�h
#include"Application.h"

Application::Application()
{
	DxLib_Init();	// DX���C�u��������������

	mProcessCtrl = new ProcessingControl();
}

Application::~Application()
{
}

void Application::Initialize()
{
	mProcessCtrl->Initialize();
}

void Application::GameLoop()
{
	while (ProcessMessage() == 0)
	{

		ClearDrawScreen();	// ��ʍX�V����

		// �X�V����
		mProcessCtrl->Update();

		// �`�揈��
		mProcessCtrl->Draw();

		ScreenFlip();	// �`��m��

		// ESCAPE�L�[�������ꂽ�烋�[�v�𔲂���
		if (CheckHitKey(KEY_INPUT_ESCAPE))
		{
			break;
		}
	}
}

void Application::Finalize()
{
	mProcessCtrl->Finalize();
	delete mProcessCtrl;
	mProcessCtrl = nullptr;

	DxLib_End();	// DX���C�u�����I������
}