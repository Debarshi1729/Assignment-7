#include<iostream>
using namespace std;
int numberOfSubarrays(int a[],int size)
{
	int k,count=0,i;
	for(int k=0;k<size;k++)
	{ int sum=0;
		for(int i=k;i<size;i++)
		{
			sum+=a[i];
			if(sum%2!=0)
			count++;
		}
	}
	return count;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int size=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++)
	 cin>>arr[i];
	cout<<"The number of consecutive subarrays with odd sum is:"<<numberOfSubarrays(arr,size);
	return 0;
}
