#pragma once	// �C���N���[�h�K�[�h

// �K�v�ȃw�b�_�[�t�@�C�����C���N���[�h
#include"SceneBase.h"

namespace Scene
{
	class Tutorial : public SceneBase
	{
	public:
		Tutorial();

		/// <summary>
		/// �R���X�g���N�^
		/// </summary>
		/// <param name="ptr">�V�[���X�V�|�C���^</param>
		Tutorial(SceneTag* ptr);

		~Tutorial();

		/// <summary>
		/// �X�V����
		/// </summary>
		void Update() override;

		/// <summary>
		/// �`�揈��
		/// </summary>
		void Draw() override;

		/// <summary>
		/// �V�[���^�O�����p�֐�
		/// </summary>
		/// <returns>�V�[���̃^�O</returns>
		SceneTag GetSceneTag() override;

	private:

	};
}