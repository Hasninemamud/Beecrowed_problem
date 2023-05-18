#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	//keyword; data type; name;
	vector <int> v1;
	vector<double>v2;
	vector <string>v3;

	v1.push_back(112);
	v1.push_back(12);
	v1.push_back(16);

	int sz  = v1.size();
	cout<<"size: " <<sz<<endl;

	for(int i=0;i<sz;i++)
	{
		cout<<v1[i]<<endl;
	}


}
