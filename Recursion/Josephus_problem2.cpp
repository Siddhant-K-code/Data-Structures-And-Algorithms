#include <stdio.h>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int joshephus(vector<int> &v,int k,int ind)
{
	if(v.size()==1)
	return v[0];
	ind=(ind+k)%v.size();
	v.erase(v.begin()+ind);
	joshephus(v,k,ind);
}

int main()
{
	int k,n,i;
	cin>>n>>k;
	vector<int> v;
	for(i=0;i<n;i++)
	v.push_back(i+1);
	int ans=joshephus(v,k-1,0);
	cout<<"Safe position: "<<ans<<endl;
	return 0;
}
