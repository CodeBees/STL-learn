// FunctionObject.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <list>
#include <vector>
#include <algorithm>


using namespace std;



struct AbsInt
{

public:
	int operator()(int value){
		return value < 0 ? -value : value;
	}


};

//模板函数
template<class T>
void displayElement(const T& element )
{
	cout << element << endl;
}

//模板类
template<class T>
struct DisplayElement
{

public:
	int nCountElement;
public:
	DisplayElement(){
		nCountElement = 0;;
	}
	void operator() (const T& element)const
	{
		cout << element << endl;
	}
};




int _tmain(int argc, _TCHAR* argv[])
{

	cout << "函数参数示例" << endl;
	int val = -122;
	AbsInt absInt;//函数对象
	cout << absInt(val) << endl;

	displayElement(val);

	DisplayElement<int> disele;
	disele(val);

	list<char> cList;
	for (char cval = 'a'; cval <='z'; cval++)
	{
		cList.push_back(cval);
	}

	for_each(cList.begin( ), cList.end( ), DisplayElement<char>( ));//STL 算法
	


	return 0;
}

