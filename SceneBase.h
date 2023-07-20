#pragma once	// �C���N���[�h�K�[�h

namespace Scene
{
	class Scene
	{
	protected:
		Scene() {}

	public:
		virtual ~Scene() = default;

		/// <summary>
		/// ����������
		/// </summary>
		virtual void Initialize() = 0;

		/// <summary>
		/// �X�V����
		/// </summary>
		/// <returns></returns>
		virtual Scene* Update() = 0;

		/// <summary>
		/// �`�揈��
		/// </summary>
		virtual void Draw() = 0;

		/// <summary>
		/// �㏈��
		/// </summary>
		virtual void Finalize() = 0;

	private:

	};
}