#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string s1 = "hackerrank";
	string s2;
	int count=0,n;
	int flag=0,i=0,j=0;
	cin>>n; 
	for (int ii = 0; ii < n; ++ii)
	{
		cin>>s2;
		while(1){
			if(s1[i] == s2[j]){
		//		cout<<s1[i]<<" "<<s2[j]<<endl;
				i++; j++; count++;
			}else{
				j++;
			}
			if(j > s2.size() || i > s1.size() ){
				flag =1;
				break;
			}
		} 
		if(count !=11 && flag ==1){
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		} 
		flag =0; i=0; j=0; s2.clear(); count=0;
	}
	return 0;
}