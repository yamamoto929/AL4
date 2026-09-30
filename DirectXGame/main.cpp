#include <Windows.h>
#include <KamataEngine.h>
using namespace KamataEngine;
// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(_In_ HINSTANCE, _In_opt_ HINSTANCE, _In_ LPSTR, _In_ int) {
	KamataEngine::Initialize();
	
	//======================================================================
	// VVV ここでゲームシーンやタイトルシーンのインスタンス作成や初期化 VVV
	//======================================================================


	//======================================================================
	// 初期化終わり
	//======================================================================
	
	// DirectXCommonインスタンス
	DirectXCommon* dxCommon = DirectXCommon::GetInstance();
	// ここでimgui

	// メインループ
	while (true) {
		if (KamataEngine::Update()) {
			break;
		}
		// 更新開始

		// 更新終了
		
		// 描画開始
		dxCommon->PreDraw();

		// 描画終了
		dxCommon->PostDraw();
	}

	KamataEngine::Finalize();

	return 0;
}
