#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string s,s1;
	int t,l,pos1=0,pos2=0,x=0,sum=0,cone,c,f1=0,f2=0,j,r;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		cin>>s;
		s1 = s;
		sort(s1.begin(),s1.end());
		//cout<<s1; 
		cone=0; c=0; r=0;
		vector<int>v;
		for (int w = 0; w <s.length() ; ++w)
		{
			if(s[w] == '1'){ cone++;}
			v.push_back(0);
		}
		j=0;
		while(1){ f1=0; f2=0;
			if(s[j] == '1' && j+1<s.length() && s[j+1] !='1' ){
				 pos1 = j; f1=1;
				for (int k = j+1; k <s.length(); ++k)
				{
					if(s[k] =='0' && k+1<s.length() && s[k+1] !='0'){
						pos2 = k; f2=1;
					}else if(s[k]=='0' && k==s.length()-1){
						pos2 = k;  f2=1;
					}
				}
				if(f1==1 && f2==1){
					s[pos1] = '0' ; s[pos2] = '1';
					x = abs(pos1-pos2)+1; sum = sum+x; j=0; c++; //cout<<sum<<endl;
				}
				//cout<<s1<<endl; 
				if(s==s1){
					break;
				}
			}else{
				j++;
			}
		}
		cout<<sum<<endl;
		
	}
	return 0;
}
