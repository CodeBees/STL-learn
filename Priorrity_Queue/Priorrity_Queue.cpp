// Priorrity_Queue.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <queue>
#include <list>
#include <functional>

using  namespace std;

int _tmain(int argc, _TCHAR* argv[])
{

	priority_queue<int,deque<int>> pqlist;//���ֵ���ȶ��У�����ʹ��list
	priority_queue<int, deque<int>, greater<int>> pqglist;//���ֵ���ȶ��У�����ʹ��list,���Ϊ�����㷨(ν��)
	//priority_queue<int, deque<int>, less<int>> pqglist;//���ֵ���ȶ��У�����ʹ��list,���Ϊ�����㷨(ν��)

	pqlist.push(-0);
	pqlist.push(-20);
	pqlist.push(10);
	pqlist.push(200);


	cout<<"���ȼ����ж���"<<pqlist.top()<<endl;

	while (!pqlist.empty())
	{
		cout<<"-->"<<pqlist.top()<<endl;
		pqlist.pop();
	}


	pqglist.push(-0);
	pqglist.push(-20);
	pqglist.push(10);
	pqglist.push(200);


	cout << "���ȼ����ж���" << pqglist.top( ) << endl;

	while (!pqglist.empty( ))
	{
		cout << "-->" << pqglist.top( ) << endl;
		pqglist.pop( );
	}


	return 0;
}

