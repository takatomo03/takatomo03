#include "Enemy.h"
#include "Geometory.h"

//コンストラクタ
CEnemy::CEnemy():
	CCharacter(),
	m_Weapon(nullptr)
{
	
}

//デストラクタ
CEnemy::~CEnemy()
{
	delete m_Weapon;
}

//更新処理
void CEnemy::Update()
{

}

//描画処理
void CEnemy::Draw()
{
	static float rad = 0.0f;

	DirectX::XMMATRIX Rx;
	DirectX::XMMATRIX Ry;
	DirectX::XMMATRIX Rz;
	DirectX::XMMATRIX T;
	DirectX::XMMATRIX S;
	DirectX::XMMATRIX mat;
	DirectX::XMFLOAT4X4 fMat;


	Rx = DirectX::XMMatrixRotationX(0.0f);
	Ry = DirectX::XMMatrixRotationY(0.0f);
	Rz = DirectX::XMMatrixRotationZ(0.0f);
	T = DirectX::XMMatrixTranslation(0.0f, 0.0f, 1.0f);
	S = DirectX::XMMatrixScaling(0.5f, 0.5f, 0.5f);
	mat = S * T * Rx * Ry * Rz;
	mat = DirectX::XMMatrixTranspose(mat);
	DirectX::XMStoreFloat4x4(&fMat, mat);
	Geometory::SetWorld(fMat);
	rad += 0.00f;

	Geometory::DrawBox();
}

//エネミーが攻撃する
void CEnemy::Attack()
{

}

//倒れた時に武器を落とす
void CEnemy::WeaponDrop()
{
	
}