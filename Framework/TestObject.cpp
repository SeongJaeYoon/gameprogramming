#include "stdafx.h"
#include "TestObject.h"
#include "InputManager.h"

TestObject::TestObject()
	:GameObject(L"resources/something/title.png"),		//���ӿ�����Ʈ�� �����մϴ�.
	col2(*transform,Vector2(1600.0f, 200.0f))
{
}

void TestObject::Update()
{
	//InputManager::GetMouseVector2(), InputManager::GetMouseX()�� ���� ���콺 ��ġ�� ��ȯ���� �� �ֽ��ϴ�.
	if (col2.Intersected(InputManager::GetMouseVector2()))	//�浹ó��, Player�� �����ϼ���.
		printf("����\n");
}
