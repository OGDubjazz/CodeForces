#include <iostream>
using namespace std;
int main()
{
	int n,sum=0;
	int a,b,c,d;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b>>c>>d;
		sum+=(c-a+1)*(d-b+1);
	}
	cout<<sum<<endl;
	return 0;
}
