// String.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{

	string str1("hello");
	string str2("world");
	string str3 = str1 + str2;
	cout << str3 << endl;

	//const������
	string::const_iterator ivstr = str3.begin( );

	while (ivstr!=str3.end())
	{
		cout << *ivstr << endl;
		ivstr++;
	}

	//stl�Ĳ��Һ���
	string::iterator ivfind = find(str3.begin( ), str3.end( ), 'w');
	if (ivfind!=str3.end())
	{
		//�������
		cout << "find w at pos " << distance(str3.begin( ), ivfind) << endl;
	}


	size_t nOffset = str3.find("wo", 0);
	if (nOffset!=string::npos)
	{
		cout << "find \"wo\" at pos " << nOffset<< endl;
	}

	string * pstr4 = new string;
	pstr4->append("1234567890");
	//��ת�㷨
	reverse(pstr4->begin( ), pstr4->end( ));
	cout << *pstr4 << endl;
	pstr4->erase(2, 7);
	cout << *pstr4 << endl;
	delete pstr4;

	string str5("abcdefghGGGKKgklmn");
	transform(str5.begin( ), str5.end( ), str5.begin( ), tolower);
	transform(str5.begin( ), str5.end( ), str5.begin( ), toupper);
	cout << str5 << endl;


	return 0;
}

