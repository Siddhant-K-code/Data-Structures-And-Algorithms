/**
*@file
*@brief Prints all permutation of a string
**/

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

/**
*@brief Recursive approach to print permutation of a string
*@return 'void'
**/

void all_permutation(string s,int st,int end,vector<string> &ste)
{
	if(st==end)
	{
		ste.push_back(s);
		return ;
	}
	for(int i=st;i<=end;i++)
	{
		swap(s[st],s[i]);
		all_permutation(s,st+1,end,ste);
		swap(s[st],s[i]);
	}
}


int main()
{
	int t,i;
	cin>>t;
	while(t--)
	{
		string s;
		string out="";
		cin>>s;
		vector<string> ste;
		all_permutation(s,0,s.length()-1,ste);
		cout<<ste.size()<<endl;
		vector<string> ::iterator itr;
		for(itr=ste.begin();itr!=ste.end();itr++)
		cout<<*itr<<endl;
		cout<<endl;
	}
	return 0;
}
