#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,d;
    int a1 =0, c1 = 0,s1=0,s2=0;
    cin>>a>>b>>c>>d;
    while(1){
        s1 = b + a1*a;
        s2 = d + c1*c;
        cout<<s1<<" "<<s2<<endl; 
        a1++; c1++; 
        if(a1==5){
            break;
        }
    }


    return 0;
}
