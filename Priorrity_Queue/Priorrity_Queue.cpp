// Priorrity_Queue.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <queue>
#include <list>


using  namespace std;

int _tmain(int argc, _TCHAR* argv[])
{

	priority_queue<int,deque<int>> pqlist;//���ֵ���ȶ��У�����ʹ��list
	priority_queue<int,deque<int>,greater<int>> pqglist;//���ֵ���ȶ��У�����ʹ��list

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


	return 0;
}

