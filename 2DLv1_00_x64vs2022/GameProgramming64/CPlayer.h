#pragma once
#ifndef CPLAYER_H
#define CPLAYER_H
//キャラクタークラスのインクルード

#include "CCharacter3.h"
#include "CInput.h"
#include "CBullet.h"
#include "CColliderLine.h"
/*
プレイヤークラス
キャラクタクラスを継承
*/

class CPlayer : public CCharacter3
{
public:
	CPlayer();
	//CPlayer(位置、回転、スケール)
	CPlayer(const CVector& pos, const CVector& rot, const CVector& scale);
	//CBullet bullet;
	//更新処理
	void Update();
private:
	CInput mInput;
	CColliderLine mLine; //線分コライダ
	CColliderLine mLine2; //線分コライダ]
	CColliderLine mLine3; //線分コライダ]

};
#endif


