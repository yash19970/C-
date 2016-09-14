/*Codechef long September : LONGSEQ*/
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
	vector<int> vec;
	char s[100],n;
	int t;
	int a[100],sum=0;
	int c1,c2;
	cin>>t;
	for(int j=0;j<t;j++)
	{
		cin>>s;
		n =strlen(s);
		c1 =0, c2 =0;
		for(int i=0;i<n;i++){
			if(s[i] =='0'){
				c1++;
			}else{
				c2++;
			}
			sum += s[i];
		}
		if(c1 ==1 || c2 ==1){
			vec.push_back(1);
		}
		else{
			vec.push_back(0);
		}
	}
	for(int i=0;i<vec.size();i++){
		if(vec[i] == 1){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
	return 0;
}