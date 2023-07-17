#pragma once	// インクルードガード

// 必要なヘッダーファイルをインクルード
#include"Window.h"
#include"SceneManager.h"
#include"GameObjectManager.h"

/// <summary>
/// 処理統括
/// </summary>
class ProcessingControl
{
public:
	ProcessingControl();
	~ProcessingControl();

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
	Window* mWindow;
};