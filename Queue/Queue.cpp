// Queue.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <queue>
#include <list>

using namespace std;

//队列，FIFO ,无迭代器，只运行在两端操作数据
//deque ,list ,但是不能用vector（因为单向）做queue的基础数据类型。queue是容器适配器

int _tmain(int argc, _TCHAR* argv[])
{

	queue<int ,deque<int>> qdeque;
	queue<int ,list<int>> qlist;
	queue<int ,vector<int>> qvector;

	qdeque.push(10);
	qdeque.push(1);
	qdeque.push(0);
	qdeque.push(-10);

	cout<<"qdeque size "<<qdeque.size()<<endl;
	cout<<"qdeque head "<<qdeque.front()<<endl;//查看队首数据
	cout<<"qdeque tail "<<qdeque.back()<<endl;//查看队尾数据，不改变
	qdeque.pop();
	cout<<"qdeque head "<<qdeque.front()<<endl;//查看队首数据






	return 0;
}

