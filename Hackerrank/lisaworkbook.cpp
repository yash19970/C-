#include<vector>
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	vector<int> a;
	int count=0,page=1,n,k,inp,ques,flag=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		//page=1;
		cin>>inp;
		a.push_back(inp); 
		ques=0;
		for(int j=1;j<=inp;j++){
			ques++;
			if(j==page){
				count++;
			}
			if(ques == k && j!=inp){
				page++; ques=0;
			}
		}
	//	cout<<page<<endl; 
		page++;
	}
	cout<<count<<endl;
	return 0;
}