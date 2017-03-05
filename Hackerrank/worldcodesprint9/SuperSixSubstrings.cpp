#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int s2;
    int count=0,count2=0,count3=0;
    int len = s.length();
    int x=0,sum=0;
    for(int i=0; i<len; i++){
        if(s[i] == '6'){
            count2++;
        }
        if(s[i] == '0'){
            count3++;
        }
    }
    
    for(int i=0; i<len; i++){
        int v = int(s[i]) - 48;
        x = x*10 + v; 
       if(s[i] != '0')
        {
        	if(x%6 ==0 && x != 6){
                    count++;    
                }
            }
    }
    //cout<<count<<" "<<count2<<" "<<count3<<endl;
    sum = count3+count2+count;
    cout<<sum<<endl;
    return 0;
}
