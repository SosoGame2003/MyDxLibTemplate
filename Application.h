#pragma once

class Application
{
public:
	Application();
	~Application();

	void GameLoop();

private:
	class SceneManager* sceneMgr;

	const int ScreenSizeX = 960;	// ウィンドウの幅
	const int ScreenSizeY = 540;	// ウィンドウの高さ
	const int ColorBitDepth = 32;	// カラービット数
};