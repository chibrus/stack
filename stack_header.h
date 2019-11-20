#include<iomanip>
#include<cstdlib>
#include<iostream>
#include<string>
using namespace std;

template<typename T>
class Stack_T
{
private:
	T * stk;
	int stk_size;
	unsigned long long data_num;
public:
	void construct();
	void extend();
	void push(const T &);
	void pop();
	void allpop();
	void distruct();
};


template<typename T>
void Stack_T<T>::construct()
{
	stk = new T[10];
	stk_size += 10;
	data_num = 0;
}

template<typename T>
void Stack_T<T>::extend()
{
	T * tempstk = new T[stk_size];
	for (int i = 0; i < stk_size; i++)
	{
		tempstk[i] = stk[i];
	}
	stk_size += 10;
	T * stk = new T[stk_size];
	for (int i = 0; i < stk_size; i++)
	{
		stk[i] = tempstk[i];
	}
	stk_size += 10;
	delete[] tempstk;
}

template<typename T>
void Stack_T<T>::push(const T &data)
{
	if (data_num < stk_size)
	{
		stk[data_num] = data;
		data_num += 1;
	}
	else
	{
		Stack_T<T>::extend();
		stk[data_num] = data;
		data_num += 1;
	}
}


template<typename T>
void Stack_T<T>::pop()
{
	if (data_num >= 1)
	{
		cout << stk[data_num -1] <<  "\t";
		data_num-=1;
	}
	else
		cout << "stack is empty\n";
}


template<typename T>
void Stack_T<T>::allpop()
{
	while (data_num >= 1)
	{
		Stack_T<T>::pop();
	}
}

template<typename T>
void Stack_T<T>::distruct()
{
	delete [] stk;
}
