#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int total = 0;
    int s[5];

    for(int i=0;i<5;i++){
        cin>>s[i];
        total += s[i];
    }
    int b;
    b = total;
    //two cards: 
    for(int i=0;i<5;i++){
        for(int j= i+1; j<5;j++){
                if(s[i] == s[j]){
                    b = min(b,total - 2*s[i]);
                }
        }
    }

    for(int i=0;i<5;i++){
        for(int j= i+1; j<5;j++){
            for(int k = j+1; k<5;k++){
                if(s[i] == s[j] && s[i] == s[k]){
                
                    b = min(b,total - 3*s[i]);
                }
            }
        }
    }

    cout<<s<<endl;


    return 0;
}