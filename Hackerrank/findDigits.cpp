#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
	long long int n,c=0,an;
	long long int r1,r2,check=1;
	long long int t;
	vector<int> vec;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>an;
		n = an;
		while(n!=0){
			r1 = n % 10;
			r2  = n/10;
			if(r1 != 0){
				check = an % r1;
			}
			if(check == 0){
				c++;
				check = -1;
			}

			n = r2;
		}
		vec.push_back(c);
		//cout<<c<<endl;
		c =0;
	}
	for(int j=0;j<vec.size();j++){
		cout<<vec[j]<<endl;
	}
	return 0;
}