/*	#include<bits/stdc++.h>
	using namespace std;
	int main(int argc, char const *argv[])
	{
		long long int n,k,count=0,flag=0;
		cin>>n>>k;
		if(n == 1 && k ==1){
			cout<<1<<endl;
			return 0;
		}
		for (int i = 1; i <= n/2; i++)
		{
			if(n%i ==0){
				count++;			
			}
			if(i == n/2 && count == k-1){
				cout<<n<<endl;
				flag =1;
				break;
			}

			if(count == k){
					cout<<i<<endl;
					flag =1;
					break;
			}

			
		}
		if(!flag){
			if(count == k-1){
				count++;
			}
			cout<<-1<<endl;
		}
		return 0;
	}*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <set>
using namespace std;
set<long long int> checkdivisor(long long int a,long long int n)
{ set<long long int >se;
  long long int count =0;
  for(int i=1;i<=sqrt(a);i++)
  {
    if(a%i==0)
    {
      se.insert(i);
      se.insert(a/i);
    }

  }
  return se;
}
int main(){
long long int nn,k;
cin>>nn>>k;

set<long long int>see;
see=checkdivisor(nn,k);
if(k>see.size())
{cout<<"-1";
}
else
{
  long long int count = 1;
 /* for (set<long long int>::iterator it = see.begin(); it!=see.end(); ++it)
  {
    cout<<*it<<" ";
  }*/
  for (set<long long int>::iterator it = see.begin(); it!=see.end(); ++it)
  {if(count==k)
    {
      cout<<*it;
      break;
    }
    else
    {
      count++;
    }
    
  }
}


  return 0;
}