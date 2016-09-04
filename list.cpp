//using #include<list>
#include<iostream>
#include<list>
using namespace std;
int main(){
	list<int> l;
	l.push_front(0);
	l.push_back(0);
	l.insert(++l.begin(),2);
	list<int>::iterator i;
	for(i = l.begin(); i!= l.end(); i++){
		cout<<*i<<endl;
	}
	return 0;
}