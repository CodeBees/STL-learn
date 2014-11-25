// 最大最小.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <deque>
#include <iostream>
#include <algorithm>

using namespace std;

bool absMin(int ele1,int ele2)
{
	return abs(ele1) <abs(ele2);
}

int _tmain(int argc, _TCHAR* argv[])
{

	deque<int> dq;

	for (int idx = 2; idx < 8;idx++)
	{
		dq.insert(dq.end( ), idx);
	}

	for (int idx = -8; idx < 5; idx++)
	{
		dq.insert(dq.end( ), idx);
	}

	for (deque<int>::iterator it = dq.begin( ); it < dq.end( );it++)
	{
		cout << *it << endl;
	}

	//最小值
	cout << "min value " << *min_element(dq.begin( ), dq.end( )) << endl;
	cout << "min value " << *min_element(dq.begin( ), dq.end( ),absMin) << endl;
	//最大值
	cout << "max value " << *max_element(dq.begin( ), dq.end( )) << endl;
	cout << "max value " << *max_element(dq.begin( ), dq.end( ),absMin) << endl;

	return 0;
}

