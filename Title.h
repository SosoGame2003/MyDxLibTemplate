#pragma once	// �C���N���[�h�K�[�h

// �K�v�ȃw�b�_�[�t�@�C�����C���N���[�h
#include"SceneBase.h"

namespace Scene
{
	class Title : public Scene
	{
	public:
		Title();
		virtual ~Title();

		/// <summary>
		/// ����������
		/// </summary>
		void Initialize() override;

		/// <summary>
		/// �X�V����
		/// </summary>
		/// <returns></returns>
		Scene* Update() override;

		/// <summary>
		/// �`�揈��
		/// </summary>
		void Draw() override;

		/// <summary>
		/// �㏈��
		/// </summary>
		void Finalize() override;

	private:

	};
}