#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,t,l1,len,apend,flag=0,ff,tt;
	string s,s1,s3;
	char first,second;
	vector<int> v;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		cin>>s;
		len = s.size();

		for (int f = 1; f <=sqrt(len) ; ++f)
		{
			if(len%f ==0 && f <= len/2){
				v.push_back(f);
			}
			ff= len/f;
			if(len%ff ==0 && ff <= len/2){
				v.push_back(ff);
			}	
		}

		sort(v.begin(),v.end());
		for (int j =0; j<v.size();j++ )
		{
				s1 ="";
				for (int k = 0; k <v[j] ; ++k)
				{
					s1 += s[k];
				} 
				apend = len/v[j];
				s3 = "";
				for (int h = 0; h <apend ; ++h)
				{
					s3 = s3 + s1; 
				}
				if(s3 == s){
					flag =1;
					break;
				} 
		}
		if(flag){
			cout<<"True"<<endl;
		}else{
			cout<<"False"<<endl;
		}
		flag =0;
		v.clear();
	}
	return 0;
}