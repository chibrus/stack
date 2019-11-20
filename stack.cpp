#include<iostream>
#include<cstdlib>
#include "stack_header.h"

int main()
{
	Stack_T<int> Stack;
	Stack.construct();
	Stack.push(1);
	Stack.push(2);
	Stack.push(3);
	Stack.push(4);
	Stack.push(5);
	Stack.allpop();
	Stack.distruct();
	system("pause");
	return 0;
}
