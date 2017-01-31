#include<iostream>
#include<vector>
#include<math.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	int t,h,m,hour,mint,angle;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>h>>m;
		if(h == 12){
			h=0;
		}
		if(m == 60){
			m=0;
		}
		hour = (h*60 + m)*0.5;
		mint =  m*6;
		angle = abs(hour-mint);
		angle = min(360-angle,angle);
		cout<<angle<<endl;
	}
	return 0;
}