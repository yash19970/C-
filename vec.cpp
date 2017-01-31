#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int> v;
int n;
cout<<v.size()<<endl;
for(int i=0;i<5;i++)
{
	v.push_back(i);
}
for(int i=0;i<5;i++){
	cout<<"Enter: "<<endl;
	cin>>n;	
cout<<v[n]<<endl;
}
return 0;
}
