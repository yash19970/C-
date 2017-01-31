#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
	long int t,b,w,total;
	long int x,y,z;
	vector<long int> totalvec;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>b>>w;
		cin>>x>>y>>z;
		 if(y+z < x){
			/*decrease black*/
			x = y+z;
			total = x*b + y*w;
		}else if(x+z <y){
			/*decrease white*/
			y = x+z;
			total = x*b + y*w;
		}else{
			total = x*b + y*w;
		}
		totalvec.push_back(total);
		//cout<<total<<endl;
        total =0;
	}
    for(int i=0;i <totalvec.size();i++){
		cout<<totalvec[i]<<endl;
	}
	return 0;
}