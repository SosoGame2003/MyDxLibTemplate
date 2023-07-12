// �K�v�ȃw�b�_�[�t�@�C�����C���N���[�h
#include"Application.h"

Application::Application()
{
	DxLib_Init();	// DX���C�u��������������

	processCtrl = new ProcessingControl();
}

Application::~Application()
{
}

void Application::Initialize()
{
	processCtrl->Initialize();
}

void Application::GameLoop()
{
	while (ProcessMessage() == 0)
	{

		ClearDrawScreen();	// ��ʍX�V����

		// �X�V����
		processCtrl->Update();

		// �`�揈��
		processCtrl->Draw();

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
	processCtrl->Finalize();
	delete processCtrl;
	processCtrl = nullptr;

	DxLib_End();	// DX���C�u�����I������
}
