#pragma once	// �C���N���[�h�K�[�h

// �K�v�ȃw�b�_�[�t�@�C�����C���N���[�h
#include"SceneBase.h"
#include"MainMenu.h"
#include"Tutorial.h"
#include"Play.h"
#include"Result.h"

/// <summary>
/// �V�[���Ǘ��N���X
/// </summary>
namespace Scene
{
	class SceneManager
	{
	public:
		SceneManager();
		~SceneManager();

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

	private:
		/// <summary>
		/// �V�[���؂�ւ�
		/// </summary>
		void Changer();

		SceneBase* nowScene;	// ���݂̃V�[��
		SceneTag scene;			// ���삵�Ă���V�[���̃^�O
	};
}