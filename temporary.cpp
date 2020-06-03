#include <iostream>
using namespace std;

void prime_sieve(int *arr)
{
    long i,j;
    for(i=3;i<1005;i=i+2)
    {
        arr[i]=1;
    }
    for(i=3;i<1005;i=i+2)
    {
        if(arr[i]==1)
        {
            for(j=i*i;j<1005;j=j+i)
            {
                arr[j]=0;
            }
        }
    }
    arr[2]=1;
}

int main() {
	int t,n;
	int arr[10005]={0};
	prime_sieve(arr);
	while(t--)
	{
	    cin>>n;
	    for(int i=0;i<=n;i++)
	    {
	        if(arr[i]==1)
	        {
	            cout<<i<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
