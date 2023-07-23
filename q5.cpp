#include<iostream>
#include<vector>
using namespace std;
vector<int> multiArray(vector<int> v)
{
	vector<int> v1(v.size());
	for(int i=0;i<v.size();i++)
	{   v1[i]=1;
		for(int j=0;j<v.size();j++)
		{
			if(i!=j)
			v1[i]*=v[j];
		}
	}
	return v1;
}
int main()
{
	vector<int> v;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		v.push_back(a);
}
	vector<int> v1;
	v1=multiArray(v);
	for(int e:v1)
		cout<<e<<" ";
	return 0;
}
