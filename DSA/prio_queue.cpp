#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	priority_queue<int, vector<int> , greater<int> > pq;
	int a[] = {4,3,2,6};
	int res=0;
	int first=0, second=0;
	for(int i=0;i<4; i++){
		pq.push(a[i]);
	}
	while(pq.size()>1){
		int first = pq.top();
		pq.pop();
		int second = pq.top();
		pq.pop();
		res = res+ first + second;
		pq.push(first+second);
	}
	cout<<res<<endl;
	return 0;
}