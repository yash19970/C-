#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
	vector<int > vec;
	std::vector<string> vec2;
	cout<<vec.size()<<endl;
	cout<<vec.size()<<endl;
	//cout<<"hello"<<endl;
	for(int i=0 ; i< 5 ;i++)
	{
		vec.push_back(i);
		cout<<"h";
	}
	cout<<"New size: "<<vec.size()<<endl;
	for(int i=0; i<11; i++)
	{
		cout<<vec[i]<<endl;	
	}
}