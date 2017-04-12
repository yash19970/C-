#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	vector<int> v,v2;
	map<int,int> m1;
	int n,m=0,l1,l2,l3,t,k,flag=0,flag2=0,count;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		cin>>n>>k;
		for (int r = 1; r <=k; ++r)
		{
			m1[r]  = 0;	
		}

		for (int j = 0; j <n ; ++j)
		{
			cin>>l2;
			for (int e = 1; e <=l2; ++e)
			{
				cin>>l3;
				m1[l3]++;
			}
			count=0;
			for (map<int,int>::iterator it = m1.begin(); it != m1.end(); ++it)
			{
			    if(it->second ==0 && j==n-1){
			    	flag =1; //sad
			    }else if(it->second ==0){
			    	flag =2; 						//all 
			    }else if(it->second !=0){
			    	flag2 =3;
			    	count++;					// some.
			    }
			    if(count == k && j!=n-1){
			    	flag=0;
			    }

			}
		}
		if(flag==1){
			cout<<"sad"<<endl;
		}else if(flag ==2){
			cout<<"all"<<endl;
		}else if(flag2 == 3 && flag==0){
			cout<<"some"<<endl;
		}
		m1.clear(); v.clear(); flag=0; m=0;	flag2=0;
	}
	return 0;
}