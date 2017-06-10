#include<bits/stdc++.h>
using namespace std;
void insert_sorted(stack<int> &s,int element){
    if(s.empty() || element > s.top() ){
        s.push(element);
        return ;
    }
        int temp = s.top(); s.pop();
        insert_sorted(s,element);
        s.push(temp);
}
void SortedStack :: sort()
{
   if(!s.empty()){
       int temp = s.top();
       s.pop();
       SortedStack();
       insert_sorted(s,temp);
   }
}

int main(int argc, char const *argv[])
{
	stack<int> s;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>l;
		s.push(l);
	}

	return 0;
}