// 必要なヘッダーファイルをインクルード
#include"ProcessingControl.h"

ProcessingControl::ProcessingControl()
{
	mWindow = new Window();
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
}

void ProcessingControl::Draw()
{
}

void ProcessingControl::Finalize()
{
	delete mWindow;
	mWindow = nullptr;
}