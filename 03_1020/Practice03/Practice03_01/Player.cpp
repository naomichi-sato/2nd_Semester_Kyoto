﻿
#include "Player.h"
#include <stdio.h>

Player::Player()
{
	printf("Playerのコンストラクタ\n");
}

Player::~Player()
{
	printf("Playerのデストラクタ\n");
}

void Player::Exec()
{
	printf("PlayerのExec\n");
}

void Player::Draw()
{
	printf("PlayerのDraw\n");
}

