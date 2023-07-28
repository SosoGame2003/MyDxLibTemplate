// 必要なヘッダーファイルをインクルード
#include"ProcessingControl.h"

ProcessingControl::ProcessingControl()
{
	mWindow		 = new Window();
	sceneManager = SceneManager();
}

ProcessingControl::~ProcessingControl()
{
}

void ProcessingControl::Initialize()
{
	mWindow->Show();
}

void ProcessingControl::Update()
{
	sceneManager.Update();
}

void ProcessingControl::Draw()
{
	sceneManager.Draw();
}

void ProcessingControl::Finalize()
{
	delete mWindow;

	mWindow = nullptr;
}