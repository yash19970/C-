#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
	int count=0, max=-1,c=0;
	vector<int> vec;
	int n,m;
	cin>>n>>m;
	string s[n];
	for(int i=0;i<n;i++){
		cin>>s[i];
	}

	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			for(int k=0; k<m;k++){
				if(s[i][k] == '1' || s[j][k] == '1'){
					c++;
				}
			}
			if(c >= max){
				max = c;
				vec.push_back(max);
			}
			c =0;
		}
	}
	for(int h=0; h<vec.size();h++){
		if(vec[h] == max){
			count++;
		}
	}
	cout<<max<<endl;
	cout<<count<<endl;
	return 0;
}		