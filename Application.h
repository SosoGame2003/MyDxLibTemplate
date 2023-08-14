#pragma once

class Application
{
public:
	Application();
	~Application();

	void GameLoop();

private:
	class SceneManager* sceneMgr;

	const int ScreenSizeX = 960;	// �E�B���h�E�̕�
	const int ScreenSizeY = 540;	// �E�B���h�E�̍���
	const int ColorBitDepth = 32;	// �J���[�r�b�g��
};