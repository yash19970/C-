#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	int l,r,inp;
	int n;
	cin>>n;
	vector<int> li;
	for(int i=0;i<n;i++){
		cin>>inp;
		li.push_back(inp);
	}
	//li.sort(li.begin(),li.end());
	for(int i = 0;i < n-1; i++){
		for(int j = 0;j < n-i-1; j++){
			if(li[j] > li[j+1]){
				swap(li[j], li[j+1]);
				cout<<j<<" "<<j+++1<<endl;
			}
		}
	}	
	return 0;
}