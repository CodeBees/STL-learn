// Deque.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <deque>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{

	deque<int> di;
	di.push_back(100);
	di.push_back(101);
	di.push_back(102);
	di.push_front(99);
	

	deque<int>::iterator it=di.begin();
	for (it = di.begin( ); it != di.end( );it++)
	{
		cout << "index--" << distance(di.begin( ), it) << "--";;
		cout << *it << endl;
	}

	di.pop_front( );
	di.pop_back( );

	cout << "-------------------\n";

	for (it = di.begin( ); it != di.end( ); it++)
	{
		cout << "index--" << distance(di.begin( ), it) << "--";;
		cout << *it << endl;
	}
	
	return 0;
}

