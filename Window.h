#pragma once	// �C���N���[�h�K�[�h

/// <summary>
/// �E�B���h�E�̃N���X
/// </summary>
class Window
{
public:
	Window() {}
	~Window() {}

	/// <summary>
	/// �E�B���h�E�\��
	/// </summary>
	void Show();

private:
	const int screenSizeX = 1920;	// �E�B���h�E�̕�
	const int screenSizeY = 1080;	// �E�B���h�E�̍���
	const int colorBitDepth = 32;	// �J���[�r�b�g��
};
