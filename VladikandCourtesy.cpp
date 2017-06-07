/*#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	long long int a,b,flag=0,i;
	cin>>a>>b;
	i=1;	
	while(1){
		if(i%2 !=0){
			if(a<0){
				flag=1; break;
			}
			a = a-i; i++;
		}else{
			if(b<0){
				flag=2; break;
			}
			b = b-i; i++;
		}
		
	}
	if(flag==1){
		cout<<"Vladik"<<endl;
	}else if(flag==2){
		cout<<"Valera"<<endl;
	}
	return 0;
}*/
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	string s1,s2;
	cin>>s1>>s2;
	int l1 = s1.length();
   int l2 = s2.length();
   int x=0,y=0,mul=0;
   for(int i=0;i<l1;i++){
       x = x*10 + s1[i];
       cout<<int(s1[i])<<" ";
   }
   for(int i=0;i<l2;i++){
       y = y*10+ s2[i];
   }
   //cout<<x<<endl;
	return 0;
}