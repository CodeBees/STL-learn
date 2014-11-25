// ����.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <algorithm>
#include <iostream>
#include <list>
#include <xfunctional>
#include <deque>
#include <vector>

using namespace std;

/*
find ,find_of ͨ�ò����㷨��Ч�ʱȽϵ�

search_n(b,e,c,v)
search_n(b,e,c,v,p)������������Ĺ淶search_n_if(b,e,c,p)

search()
find_end

find_frist_of
adjancent_find

//�Ѿ�����ռ����
binary_search()
includes()
lower_bound()
upper_bound()

*/

bool CheckEven(int val, bool bCheck);

int _tmain(int argc, _TCHAR* argv[])
{

	list<int> ls;

	for (int idx = 3; idx < 10; idx++)
	{
		ls.push_back(idx);
	}
	ls.push_back(9);


	list<int>::iterator it = find(ls.begin( ), ls.end( ), 5);

	if (it != ls.end( ))
	{
		cout << "find value  " << *it << endl;
	}

	it = find_if(ls.begin( ), ls.end( ), bind2nd(greater<int>( ), 3));

	if (it != ls.end( ))
	{
		cout << "find value  " << *it << endl;
	}

	string str("hh haha come here");

	cout << "find haha at pos " << str.find("haha") << endl;

	for (it = ls.begin( ); it != ls.end( ); it++)
	{
		cout << *it << endl;
	}

	list<int>::iterator itn = search_n(ls.begin( ), ls.end( ), 2, 9);

	if (itn != ls.end( ))
	{
		cout << "�ҵ�������2��9   " << endl;
	}
	else
	{
		cout << "can find " << endl;
	}

	itn = search_n(ls.begin( ), ls.end( ), 2, 8,greater<int>());

	if (itn != ls.end( ))
	{
		cout << "�ҵ�������2������8   " << endl;
	}
	else
	{
		cout << "can find " << endl;
	}

	deque<int> dq;
	dq.push_back(3);
	dq.push_back(4);
	dq.push_back(5);


	//it = search(ls.begin( ), ls.end( ), dq.begin( ), dq.end( ));
	//��search��ͬ��ֻ�ǴӺ��濪ʼ����
	it = find_end(ls.begin( ), ls.end( ), dq.begin( ), dq.end( ));
	if (it!=ls.end())
	{
		cout << "find dq in ls " << endl;
	}
	else 
	{
		cout << "not find dq in ls";
	}



	vector<int> vInt;

	for (int idx = 1; idx < 10;idx++)
	{
		vInt.push_back(idx);
	}

	cout << "Value in vector vInt" << endl;
	for (vector<int>::iterator it = vInt.begin( ); it != vInt.end( ); it++)
	{
		cout << *it << endl;
	}
	vector<int>::iterator ivInt;
	bool checkEvenArgs[3] = { false, true, false };

	ivInt=search(vInt.begin( ), vInt.end( ), checkEvenArgs, checkEvenArgs + 3, CheckEven);

	if (ivInt!=vInt.end())
	{
		cout << "find ��ż������" <<endl;
	}
	return 0;
}



bool CheckEven(int val,bool bCheck)
{
	if (bCheck)
	{
		return val % 2 == 0;
	}
	else
	{
		return val % 2 == 1;
	}

}