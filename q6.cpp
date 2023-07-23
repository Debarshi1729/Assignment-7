#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	 v.push_back(0);
	int q,x;
	cin>>q;
	cout<<"Enter the value:";
	cin>>x;
	while(q)
	{
		int l,r;
		cout<<"Enter the lower index and upper index:";
		cin>>l>>r;
		for(int i=l;i<=r;i++)
		{
			v[i]=v[i]+x;
		}
		q--;
	}
	for(int e:v)
	 cout<<e<<" ";
	return 0;
}
