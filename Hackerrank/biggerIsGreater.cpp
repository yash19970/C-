#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   	long int t;
   	string w;
   	cin>>t;
   	for(int i=0;i<t;i++){
   		cin>>w;
   		if(!next_permutation(w.begin(),w.end())){
   			cout<<"no answer"<<endl;
   		}else{
   			cout<<w<<endl;
   		}

   	}
    return 0;
}
