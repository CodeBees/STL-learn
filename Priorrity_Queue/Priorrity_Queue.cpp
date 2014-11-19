// Priorrity_Queue.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <queue>
#include <list>
#include <functional>

using  namespace std;

int _tmain(int argc, _TCHAR* argv[])
{

	priority_queue<int,deque<int>> pqlist;//最大值优先队列，不能使用list
	priority_queue<int, deque<int>, greater<int>> pqglist;//最大值优先队列，不能使用list,最后为排序算法(谓词)
	//priority_queue<int, deque<int>, less<int>> pqglist;//最大值优先队列，不能使用list,最后为排序算法(谓词)

	pqlist.push(-0);
	pqlist.push(-20);
	pqlist.push(10);
	pqlist.push(200);


	cout<<"优先级队列队首"<<pqlist.top()<<endl;

	while (!pqlist.empty())
	{
		cout<<"-->"<<pqlist.top()<<endl;
		pqlist.pop();
	}


	pqglist.push(-0);
	pqglist.push(-20);
	pqglist.push(10);
	pqglist.push(200);


	cout << "优先级队列队首" << pqglist.top( ) << endl;

	while (!pqglist.empty( ))
	{
		cout << "-->" << pqglist.top( ) << endl;
		pqglist.pop( );
	}


	return 0;
}

