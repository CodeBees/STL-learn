// Map.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <map>

using namespace std;

template<class T>
void traverse(T& t)
{

	for (T::const_iterator it = t.begin( ); it != t.end( ); it++)
	{
		cout << "key " << it->first;
		cout << "  value: " << it->second.c_str( ) << endl;

	}

}



int _tmain(int argc, _TCHAR* argv[])
{

	map<int, string> ismap;
	multimap<int, string> mismap;

	ismap.insert(map<int, string>::value_type(1, "one"));
	ismap.insert(map<int, string>::value_type(2, "two"));
	ismap.insert(make_pair(-1, "minus one"));
	ismap.insert(pair<int, string>(1000, "ten thousand"));
	ismap[100] = "hundreud";

	traverse(ismap);

	map<int, string> ::const_iterator ii = ismap.begin( );
	while (ii != ismap.end( ))
	{
		cout << "key " << ii->first;
		cout << "  value: " << ii->second.c_str( ) << endl;
		ii++;
	}
	cout << "_______________\n";
	mismap.insert(map<int, string>::value_type(1, "one"));
	mismap.insert(map<int, string>::value_type(2, "two"));
	mismap.insert(make_pair(-1, "minus one"));
	mismap.insert(pair<int, string>(1000, "ten thousand"));
	mismap.insert(pair<int, string>(1000, "ten thousand other"));
	//mismap[100] = "hundreud"; xx
	cout << "_______________\n";
	traverse(mismap);
	cout << "_______________\n";
	multimap<int, string>::iterator it = mismap.find(1000);
	if (it != mismap.end( ))
	{
		if (multimap<int, string>::size_type st = mismap.count(1000))
		{
			for (size_t idx = 0; idx < st; idx++)
			{
				cout << "find 1000 value is " << it->second.c_str( ) << endl;
				it++;
			}
		}

	}

	cout << "_______________\n";
	//if (mismap.erase(1))
	{
		cout << mismap.erase(1)<<endl;
	}
	
	traverse(mismap);
	cout << "_______________\n";

	return 0;
}

