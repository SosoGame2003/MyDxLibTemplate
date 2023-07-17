#pragma once	// インクルードガード

class GameObject;

class GameObjectManager
{
public:
	GameObjectManager();
	~GameObjectManager();

	/// <summary>
	/// 初期化処理
	/// </summary>
	void Initialize();

	/// <summary>
	/// 更新処理
	/// </summary>
	void Update();

	/// <summary>
	/// 描画処理
	/// </summary>
	void Draw();

	/// <summary>
	/// 後処理
	/// </summary>
	void Finalize();

private:
	GameObject* mGameObject;
};