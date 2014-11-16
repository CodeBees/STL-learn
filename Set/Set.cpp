// Set.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <set>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//set(集),multiset 都不能使用find查找

	set<int> iset;
	multiset<int> miset;

	//插入后自动排序
	iset.insert(100.0);
	iset.insert(-2);
	iset.insert(-2);//重复的抛弃
	iset.insert(-10000);

	for (set<int>::iterator it = iset.begin( ); it != iset.end( );it++)
	{
		cout << *it << endl;
	}


	miset.insert(100.0);
	miset.insert(-2);
	miset.insert(-2);//允许重复
	miset.insert(-10000);

	for (multiset<int>::iterator it = miset.begin( ); it != miset.end( ); it++)
	{
		cout << *it << endl;
	}

	cout << "count of miset =" << miset.size( ) << endl;

	miset.erase(-2);
	miset.erase(miset.begin( ), miset.end( ));
	cout << "count of miset =" << miset.size( ) << endl;

	return 0;
}

