#include "CInput.h"
#include <stdio.h>

CInput::CInput()
{
	printf("インスタンスが生まれました\n");
}
bool CInput::Key(char key)
{
	return GetAsyncKeyState(key) < 0;
}
