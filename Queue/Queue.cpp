// Queue.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <queue>
#include <list>

using namespace std;

//���У�FIFO ,�޵�������ֻ���������˲�������
//deque ,list ,���ǲ�����vector����Ϊ������queue�Ļ����������͡�queue������������

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
	cout<<"qdeque head "<<qdeque.front()<<endl;//�鿴��������
	cout<<"qdeque tail "<<qdeque.back()<<endl;//�鿴��β���ݣ����ı�
	qdeque.pop();
	cout<<"qdeque head "<<qdeque.front()<<endl;//�鿴��������






	return 0;
}

