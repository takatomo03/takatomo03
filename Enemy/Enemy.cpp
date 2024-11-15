#include "Enemy.h"
#include "Geometory.h"

//�R���X�g���N�^
CEnemy::CEnemy():
	CCharacter(),
	m_Weapon(nullptr)
{
	
}

//�f�X�g���N�^
CEnemy::~CEnemy()
{
	delete m_Weapon;
}

//�X�V����
void CEnemy::Update()
{

}

//�`�揈��
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

//�G�l�~�[���U������
void CEnemy::Attack()
{

}

//�|�ꂽ���ɕ���𗎂Ƃ�
void CEnemy::WeaponDrop()
{
	
}