#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

typedef struct
{
	int data;
	int hash;
}cell;

int stack_push(cell *stk,int count)
{
	printf("Enter data:\t");
	scanf("%i", &stk[count].data);
	stk[count].hash = stk[count - 1].data + stk[count].data;
	count++;
	return count;
}
int stack_pop( cell *stk, int count)
{
	if (count >= 1)
	{
		printf("%i - number %i cell\n", stk[count - 1].data, count);
		count--;
	}
	else
		printf("stack is empty\n");
	return count;
}
int main(void)
{
	int* data;
	int count = 0;
	cell *stk;
	stk = (int)calloc(100, sizeof(int));
	int temp, ask;
	while (1)
	{
		printf("IF push, enter 1,if pop - 2, if u want to exit press 3\n");
		scanf("%i", &ask);
		if (ask == 1)
		{
			count = stack_push(stk, count);
		}
		else if (ask == 2)
		{
			count = stack_pop(stk, count);
		}
		else
		{
			break;
		}
	}
	printf("There was %i cell(-s) in stack\n", count);
	system("pause");
	return 0;
}
