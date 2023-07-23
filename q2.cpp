#include<bits/stdc++.h>
using namespace std;
int highestAltitude(vector<int> v)
{   v.insert(v.begin(),0);
	for(int i=1;i<v.size();i++)
	 v[i]+=v[i-1];
	int max=v[0];
	for(int i=1;i<v.size();i++)
	 {
	 	if(max<v[i])
	 	 max=v[i];
	 }
	 return max;
}
int main()
{
 	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	 cin>>v[i];
	cout<<highestAltitude(v);
	return 0;
}
