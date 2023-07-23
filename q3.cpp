#include<iostream>
using namespace std;
int maxSize(int arr[],int size)
{    int ans;
	 for(int k=2;k<=size;k+=2)
	 { 
	  int count0=0,count1=0;
	 	for(int i=0;i<k;i++)
	 	{
	 		if(arr[i]==0)
	 		 count0++;
	 		else
	 		 count1++;
		 }
		 if(count0==count1)
		  ans=k;
	 }
	 return ans;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	 cin>>arr[i];
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<maxSize(arr,size);
	return 0;
}
