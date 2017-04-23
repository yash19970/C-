/* all test cases not passed.*/
#include <bits/stdc++.h>
using namespace std;
int howManyCollisions(string s){
    int n,r=0,l=0,c1,len=0,flag,l2,flag2;
    len = s.length();
	flag=0; l2=0; flag2=0; c1=0; r=0;
    for (int j = 0; j <len ; ++j)
		{
			if(s[j]=='r'){
				r++;
			}else if(s[j]=='l' && flag>0){
				l++;
			}else if(s[j]=='l' && flag2>0){
				l++;
			}
			
			if(s[j]=='r' && j+1<len && s[j+1]=='l'){
				c1 = c1+2; flag++; j++;
				c1 = c1+r-1;
				l=0; r=0;
				l2++;
			}else if(s[j]=='r' && j+1<len && s[j+1]=='d'){
				c1 = c1+r; 
				r=0; flag2++;
			}
			if(flag && l>0){
				c1 = c1+l;	
				l=0;		
			}else if(flag && l==0 || flag2 && l>0){
				c1 = c1+l;
				l=0;
			}
		}
		//cout<<c1<<endl;
        return c1;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        // Returns the number of times moving robots collide.
        int result = howManyCollisions(s);
        cout << result << endl;
    }
    return 0;
}
