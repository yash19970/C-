#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,max = 999999,k1,k2,c=0,sum=0;
	cin>>n;
	vector <int> a,b;
	int points[n];
	int T;
	cin>>T;
	for(int k=0;k<T;k++)
	{
		for(int j=1;j<=n;j++)
		{
			c =0;
			cin>>k1;
				a.push_back(k1);
				for(int i=0;i<k1;i++){
					cin>>k2;
					if(k2 !=max){
						max = k2;
						c++;
					}
					b.push_back(k2);
				}
			if(c == 4){
				sum = 1;
			}
			else if(c == 5){
				sum  = 2;
			}else if(c == 6){
				sum = 4;
			}else {
				sum = 0;
			}
			points[j] = k1 + sum;
		}	
		int max1 =0;	
		int index;
		sort(points,points+n);
		for(int i=1;i<=n;i++){
			if(points[i] == points[i+1]){
				cout<<"tie"<<endl;
				b.push_back(0);
				break;
			}
			if(points[i] > max1){
				max1 = points[i];
				index = i;
			}
	
		}
		if(max1 == points[0]){
			cout<<"chef"<<endl;
			b.push_back(1);
			break;
		}
		//b.push_back(2);
		//cout<<index<<endl;
		for (int i = 1;i<=n;i++)
		{
			if(b[i] ==0){
				cout<<"tie"<<endl;
			}
			else if(b[i] == 1){
				cout<<"chef"<<endl;
			}
			else{
				cout<<index<<endl;
			}
		}
	}
	return 0;
}