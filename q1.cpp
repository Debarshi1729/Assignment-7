#include<iostream>
using namespace std;
int Sum(int a[],int n,int l,int r)
{
	for(int i=1;i<n;i++)
	 {
	 	a[i]+=a[i-1];
	 }
	 return a[r]-a[l-1];
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	 cin>>arr[i];
	int size=sizeof(arr)/sizeof(arr[0]);
	int L,R;
	cout<<"Enter the left index and right index:";
	cin>>L>>R;
	cout<<"The sum is:"<<Sum(arr,size,L,R);
	return 0;
}
