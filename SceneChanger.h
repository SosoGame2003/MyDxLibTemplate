#pragma once
#include"SceneManager.h"
#include"MainMenu.h"
#include"Tutorial.h"
#include"Play.h"
#include"Result.h"

namespace Scene
{
	class SceneChanger
	{
	public:
		SceneChanger() {}
		~SceneChanger() {}

		/// <summary>
		/// ����������
		/// </summary>
		void Initialize();

		/// <summary>
		/// �V�[���`�F���W����
		/// </summary>
		void Change();

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
		SceneManager<MainMenu> sceneMgr;
	};
}