// Vector.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <vector>
#include <iostream>

using namespace std;

class Dog
{


};

int _tmain(int argc, _TCHAR* argv[])
{

	vector<int> iv;
	vector<double> id(10, 2.8);//10��2.8
	vector<wstring> istr(10);//10�����ַ���
	iv.push_back(10);
	//iv.insert(0, 100);
	cout << iv.size( ) << endl;

	vector<int>::size_type ivsize;
	for (ivsize=0; ivsize < iv.size( );ivsize++)
	{
		cout << iv[ivsize] << endl;
	}
	

	vector<double>::iterator iid=id.begin();
	for (; iid != id.end( );iid++)
	{
		cout << *iid << endl;
	}







	vector<Dog> vdog;


	return 0;
}

