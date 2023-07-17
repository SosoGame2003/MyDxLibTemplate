#pragma once	// インクルードガード

// 必要なヘッダーファイルをインクルード
#include<DxLib.h>	// DXライブラリの機能を使用するために必要
#include"ProcessingControl.h"

/// <summary>
/// ゲームの一連の流れ
/// </summary>
class Application
{
public:
	Application();
	~Application();

	/// <summary>
	/// 初期化処理
	/// </summary>
	void Initialize();

	/// <summary>
	/// ゲームループ
	/// </summary>
	void GameLoop();

	/// <summary>
	/// 後処理
	/// </summary>
	void Finalize();

private:
	ProcessingControl* mProcessCtrl;
};