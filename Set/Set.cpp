// Set.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <set>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//set(��),multiset ������ʹ��find����

	set<int> iset;
	multiset<int> miset;

	//������Զ�����
	iset.insert(100.0);
	iset.insert(-2);
	iset.insert(-2);//�ظ�������
	iset.insert(-10000);

	for (set<int>::iterator it = iset.begin( ); it != iset.end( );it++)
	{
		cout << *it << endl;
	}


	miset.insert(100.0);
	miset.insert(-2);
	miset.insert(-2);//�����ظ�
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

