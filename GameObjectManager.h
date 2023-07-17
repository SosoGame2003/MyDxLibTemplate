#pragma once	// �C���N���[�h�K�[�h

class GameObject;

class GameObjectManager
{
public:
	GameObjectManager();
	~GameObjectManager();

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
	GameObject* mGameObject;
};