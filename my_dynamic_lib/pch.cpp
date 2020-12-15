// pch.cpp: 与预编译标头对应的源文件

#include "pch.h"

// 当使用预编译的头时，需要使用此源文件，编译才能成功。

void display()
{
	printf("this is dynamic library\n");
	return;
}

int sum(int num1, int num2)
{
	return num1 +num2;
}
