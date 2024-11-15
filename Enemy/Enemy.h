#pragma once

#include "Character.h"
#include "Weapon.h"

class CEnemy : public CCharacter
{
public:

	CEnemy();                 //�R���X�g���N�^
	~CEnemy();                //�f�X�g���N�^

	void Update();            //�X�V����
	void Draw();              //�`�揈��

	void Attack() override;   //�U������

	void WeaponDrop();    //������v���C���[�ɓn������

private:
	CWeapon* m_Weapon;        //�G�l�~�[�̕���
};

/*
�ǉ���������

*/