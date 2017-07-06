#include<bits/stdc++.h>
using namespace std;
int lcs(string s1, int l1 , string s2, int l2){
	int l[l1+1][l2+1];
	for(int i=0;i<=l1;i++){
		for(int j=0;j<=l2;j++){
			if(i ==0 || j==0){
				l[i][j]=0;
			}else if(s1[i-1] == s2[j-1]){
				l[i][j] = l[i-1][j-1]  + 1; 
			}else{
				l[i][j] = max(l[i-1][j],l[i][j-1]);
			}
		}
	}
	return l[l1][l2];
}
int main(int argc, char const *argv[])
{
	string s1,s2;
	cin>>s1>>s2;
	int l1 = s1.length();
	int l2 = s2.length();
	int l = lcs(s1,l1,s2,l2); 
	cout<<l<<endl;
	return 0;
}