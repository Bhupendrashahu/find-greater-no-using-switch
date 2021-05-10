#include<iostream>
using namespace std;
int main()
{
	int n1,n2;
	cout<<"enter the value of the no ";
	cin>>n1>>n2;
	switch(n1>n2)
	{
		case 0:
			cout<<n2<<"is greater no";
			break;
	    case 1:
	        cout<<n1<<"is greater no";
	        break;
	}
}
