#pragma once	// �C���N���[�h�K�[�h

// �K�v�ȃw�b�_�[�t�@�C�����C���N���[�h
#include"Window.h"
#include"SceneManager.h"
#include"GameObjectManager.h"

/// <summary>
/// ��������
/// </summary>
class ProcessingControl
{
public:
	ProcessingControl();
	~ProcessingControl();

	/// <summary>
	/// ����������
	/// </summary>
	void Initialize();

	/// <summary>
	/// �X�V����
	/// </summary>
	void Update();

	/// <summary>
	/// �`�揈��
	/// </summary>
	void Draw();

	/// <summary>
	/// �㏈��
	/// </summary>
	void Finalize();

private:
	Window* mWindow;
};