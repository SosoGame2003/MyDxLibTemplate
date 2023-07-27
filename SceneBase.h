#pragma once	// �C���N���[�h�K�[�h

// �K�v�ȃw�b�_�[�t�@�C�����C���N���[�h
#include"SceneTag.h"

/// <summary>
/// �e�V�[���̊��N���X
/// </summary>
namespace Scene
{
	class SceneBase
	{
	public:
		SceneBase();
		virtual ~SceneBase() {};

		/// <summary>
		/// ����������
		/// </summary>
		virtual void Initialize() {}

		/// <summary>
		/// �X�V����
		/// </summary>
		virtual void Update() {}

		/// <summary>
		/// �`�揈��
		/// </summary>
		virtual void Draw() {}

		/// <summary>
		/// �V�[���^�O�����p�֐�
		/// </summary>
		/// <returns>�V�[���̃^�O</returns>
		virtual SceneTag GetSceneTag();

	protected:
		SceneTag* nextScene;
	};

	inline SceneBase::SceneBase() : nextScene() {};

	inline SceneTag SceneBase::GetSceneTag() { return SceneTag::DUMMY; }
}