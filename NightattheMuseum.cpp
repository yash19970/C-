#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	int len = s.length();
	int pos = 1;
	int n,val=0,sum=0,x=0,y=0,z=0,v1=0;
	for (int i = 0; i < len; ++i)
	{
		n = (int)s[i];
		n = n-96;
		x = abs(n-pos);
		y = pos + (26-n);
		z = abs(pos-26) + n;
		v1 = min(x,y);
		val = min(z,v1);
		sum =sum+val;
		x=0; y=0;z=0; 
		pos = n;
		n=0;
	}
	cout<<sum<<endl;
	return 0;
}