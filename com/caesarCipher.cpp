#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int l1,n,t,k,len,x,y,kk;
	string s;
	vector<string> v;
	cin>>n>>s>>k;
	kk = k;
	len = s.size();
	
	for (int i = 0; i < len; ++i)
	{
		if(s[i] != '-'){

			x = (int)s[i];
			//cout<<x<<endl;
			if(x >= 65 && x <=90){
				if(x + k <= 90){
					x = x + kk;
					s[i] = (char)x;
				}else if(x + k > 90){
					y = 90-x;
					kk = kk-y;
					x = kk+ 64; 
					cout<<x<<endl;
					s[i] = (char)x;
				} kk=k;

			}else if(x >= 97 && x <=122){
				if(x + k <= 122){
					x = x + kk;
					s[i] = (char)x;
				}else if(x + k > 122){
					y = 122-x;
					kk = kk-y;
					x = kk+ 96; 
					s[i] = (char)x;
				}kk=k;
			}
		}else if(s[i] == '-'){
			s[i] = '-';
		}
	}
	cout<<s<<endl;
	return 0;
}