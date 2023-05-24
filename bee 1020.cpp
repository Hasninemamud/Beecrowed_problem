#include<iostream>
using namespace std;

int main()
{
	int years,months,days;
	cin>>days;

	years = days / 365;
	months = (days % 365) / 30;
	days = (days % 365) % 30;

	cout<<years<<endl;
	cout<<months<<endl;
	cout<<days<<endl;


}
