#pragma once	// �C���N���[�h�K�[�h

// �K�v�ȃw�b�_�[�t�@�C�����C���N���[�h
#include<DxLib.h>	// DX���C�u�����̋@�\���g�p���邽�߂ɕK�v
#include"ProcessingControl.h"

/// <summary>
/// �Q�[���̈�A�̗���
/// </summary>
class Application
{
public:
	Application();
	~Application();

	/// <summary>
	/// ����������
	/// </summary>
	void Initialize();

	/// <summary>
	/// �Q�[�����[�v
	/// </summary>
	void GameLoop();

	/// <summary>
	/// �㏈��
	/// </summary>
	void Finalize();

private:
	ProcessingControl* mProcessCtrl;
};