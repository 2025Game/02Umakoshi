#pragma once
#include "CRectangle.h"
#include "CTexture.h"
#include "CCharacter.h"
#include "CBullet.h"
#include "CEnemy.h"
#include "CPlayer.h"
#include "CFont.h"
#include "CMiss.h"
#include "CCharacterManager.h"
#include "CGame.h"
#include "CSound.h"
#include "CVector.h"

class CApplication
{
public:
	static CCharacterManager* CharacterManager();
	static CTexture* Texture();

	enum class EState
	{
		ESTART,	//ゲーム開始
		EPLAY,	//ゲーム中
		ECLEAR,	//ゲームクリア
		EOVER,	//ゲームオーバー
	};
	
	//最初に一度だけ実行するプログラム
	void Start();
	//繰り返し実行するプログラム
	void Update();
	

private:
	CVector mEye;

	CSound mSoundOver;
	
	CSound mSoundBgm;	//BGM

	CGame* mpGame;
	

//	CBullet* mpBullet;
	CEnemy* mpEnemy;
	CPlayer* mpPlayer;
	CMiss* mpMiss;
	

	    EState mState;
		CFont mFont;
		CInput mInput;

		static CCharacterManager mCharacterManager;
		static CTexture mTexture;
		

};