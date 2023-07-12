#pragma once	// インクルードガード

/// <summary>
/// ウィンドウのクラス
/// </summary>
class Window
{
public:
	Window() {}
	~Window() {}

	/// <summary>
	/// ウィンドウ表示
	/// </summary>
	void Show();

private:
	const int screenSizeX = 1920;	// ウィンドウの幅
	const int screenSizeY = 1080;	// ウィンドウの高さ
	const int colorBitDepth = 32;	// カラービット数
};
