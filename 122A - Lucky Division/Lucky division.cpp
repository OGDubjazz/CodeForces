#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n, a[]={4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777}, flag=0;
    cin>>n;
    for(int i=0; i<sizeof(a)/sizeof(a[0]); i++) 
		if(n%a[i]==0)
		{	
			flag=1;
		 	break;
		}
    	if(flag==1)
			printf("YES");
    	else 
			printf("NO");
    	return 0;
}
