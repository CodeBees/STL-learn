// Stack.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
#include <stack>
#include <vector>
#include <list>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{


	stack<int, vector<string>>	iss;
	stack<int, deque<string>>	ids;
	stack<int, list<string>>	ils;
	stack<int>					is; //Ĭ����deque����ջ�����ݻ���


	is.push(20);
	is.push(30);
	is.push(40);
	is.push(50);
	is.push(60);
	is.push(70);
	is.push(180);
	is.push(10);

	int ntop = is.top( );			  //get top element and not pop
	cout <<"element at top is " <<ntop << endl;
	is.pop( );
	cout <<"stack size is " <<is.size( ) << endl;

//	stack<int>::iterator it=
	while (is.empty()==false)
	{
		cout << is.top( ) << endl;
		is.pop( );
	}


	return 0;
}

