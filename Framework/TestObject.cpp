#include "stdafx.h"
#include "TestObject.h"
#include "InputManager.h"

TestObject::TestObject()
	:GameObject(L"resources/something/title.png"),		//게임오브젝트를 생성합니다.
	col2(*transform,Vector2(1600.0f, 200.0f))
{
}

void TestObject::Update()
{
	//InputManager::GetMouseVector2(), InputManager::GetMouseX()를 통해 마우스 위치를 반환받을 수 있습니다.
	if (col2.Intersected(InputManager::GetMouseVector2()))	//충돌처리, Player를 참고하세요.
		printf("아하\n");
}
