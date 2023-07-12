// 必要なヘッダーファイルをインクルード
#include"ProcessingControl.h"

ProcessingControl::ProcessingControl()
{
	window = new Window();
}

ProcessingControl::~ProcessingControl()
{
}

void ProcessingControl::Initialize()
{
	window->Show();
}

void ProcessingControl::Update()
{
}

void ProcessingControl::Draw()
{
}

void ProcessingControl::Finalize()
{
	delete window;
	window = nullptr;
}
