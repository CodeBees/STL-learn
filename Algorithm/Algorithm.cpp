// Algorithm.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <functional>
#include <set>



using namespace std;

/*
@1:�Ǳ����㷨


@2:�����㷨


*/

//һԪν��
template<typename T>
bool isEven(T& element)
{
	return (element%2==0);
}



int _tmain(int argc, _TCHAR* argv[])
{

	vector<int> vInt;
	list<int>	lInt;
	vector<int>::const_iterator ivInt;
	

	for (int nVal=-8;nVal<10;nVal++)
	{
		vInt.push_back(nVal);
		lInt.push_back(nVal+1);
	}
	
	vInt.push_back(9);

	for (ivInt=vInt.begin();ivInt!=vInt.end();ivInt++)
	{
		
		cout<<*ivInt<<endl;	
	}

	//ͳ��,count���������������������������Լ���count
	int nCount=count(vInt.begin(),vInt.end(),4);

	cout<<4<<"�ĸ���"<<nCount<<endl;

	//�Զ����㷨ν��(����ż������)��Ҳ����ʹ��Ԥ����ĺ�������
	cout<<"vInt��ż������ "<<count_if(vInt.begin(),vInt.end(),isEven<int>)<<endl;
	
	//bind2nd�Ǻ���������������������ͺ������������ʹ��
	cout<<"vInt�д���8�ĸ��� "<<count_if(vInt.begin(),vInt.end(),bind2nd(greater<int>(),8))<<endl;
	//ȡģ
	cout<<"vIntż���ĸ��� "<<count_if(vInt.begin(),vInt.end(),not1(bind2nd(modulus<int>(),2)))<<endl;



	vector<int>::iterator ifind=find(vInt.begin(),vInt.end(),-0);
	if (ifind!=vInt.end())
	{
		cout<<"find the 0 "<<endl;
	}

	ifind=find_if(vInt.begin(),vInt.end(),isEven<int>);
	if (ifind!=vInt.end())
	{
		cout<<"find the "<<*ifind<<" distant"<<distance(vInt.begin(),ifind)<<endl;
	}

	//��vector�в���list�е����� example:[1,2,3,4] find [2,3,4]
	vector<int>::iterator iRangeLocate=search(vInt.begin(),vInt.end(),lInt.begin(),--lInt.end());
	if (iRangeLocate!=vInt.end())
	{
		cout<<"find data in vector "<<distance(vInt.begin(),iRangeLocate)<<endl;
	}

	//[9,...,9]
	vector<int>::iterator inRangeLocate=search_n(vInt.begin(),vInt.end(),2,9);
	if (inRangeLocate!=vInt.end())
	{
		cout<<"find data 9 in vector "<<"distance is "<<distance(vInt.begin(),inRangeLocate)<<endl;
	}
	else
	{
		cout<<"can not find data 9 in vector "<<endl;
	}



	//////////////////////////////////////////////////////////////////////////
	//count

	multiset<int> msInt;

	for (int i=0;i<9;i++)
	{
		msInt.insert(msInt.end(),i);
	}

	multiset<int>::iterator imsInt;
	for (imsInt=msInt.begin();imsInt!=msInt.end();imsInt++)
	{
		cout<<"-- "<<*imsInt;
	}

	cout<<endl<<"msInt ��4�ĸ��� "<<count(msInt.begin(),msInt.end(),4)<<endl;
	cout<<"msInt ��4�ĸ��� "<<msInt.count(4)<<endl;






	return 0;
}

