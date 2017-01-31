#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
	string inp;
	vector<string> a;
	vector<string> b;
	int n,c;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>inp;
		a.push_back(inp);
		if(a[i]=="L" || a[i]=="R"){
			b.push_back("YES");
		}else{
			b.push_back("NO");
		}
	}
	for(int i=0;i<n;i++){
		cout<<b[i]<<endl;
	}
	return 0;
}