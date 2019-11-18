#include "stdafx.h"
#include "TestScene2.h"
#include "Player.h"

void TestScene2::Initialize()
{
	GameObject* g = PushBackGameObject(new GameObject(L"resources/background/explain.png"));
	g->transform->SetPosition(1600/2, 900/2);
	
}
