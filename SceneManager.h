#pragma once	// �C���N���[�h�K�[�h

namespace Scene
{
	class Scene;

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
		/// <returns></returns>
		bool Update();

		/// <summary>
		/// �`�揈��
		/// </summary>
		void Draw();

		/// <summary>
		/// �㏈��
		/// </summary>
		void Finalize();

		Scene* GetTitle();
		Scene* GetTutorial();
		Scene* GetPlay();
		Scene* GetResult();

	private:
		Scene* mScene;
	};
}