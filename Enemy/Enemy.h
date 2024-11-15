#pragma once

#include "Character.h"
#include "Weapon.h"

class CEnemy : public CCharacter
{
public:

	CEnemy();                 //コンストラクタ
	~CEnemy();                //デストラクタ

	void Update();            //更新処理
	void Draw();              //描画処理

	void Attack() override;   //攻撃処理

	void WeaponDrop();    //武器をプレイヤーに渡す処理

private:
	CWeapon* m_Weapon;        //エネミーの武器
};

/*
追加したもの

*/