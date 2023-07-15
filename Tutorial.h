#pragma once	// インクルードガード

// 必要なヘッダーファイルをインクルード
#include"SceneBase.h"

class Tutorial : public Scene
{
public:
	Tutorial();
	virtual ~Tutorial();

	void Initialize() override;
	Scene* Update() override;
	void Draw() override;
	void Finalize() override;

private:

};