#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int c1=0,flag=0;
    for(int i=0; i<s.length();i++){
        if((i+1< s.length() &&  s[i] ==s[i+1])){
            flag =1;
            break;
        }else if(s[i-1]== s[i] && i==s.length()-1){
            flag =1;
            break;
        }else if(( i+1<s.length()) && (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y') && 
                 (s[i+1] == 'a' || s[i+1] == 'e' || s[i+1] == 'i'|| s[i+1] == 'o' || s[i+1] == 'u' || s[i+1] == 'y')){
                flag =1; break;
        }else if((i ==s.length()-1) && (s[i-1] == 'a' || s[i-1] == 'e' || s[i-1] == 'i' || s[i-1] == 'o' || s[i-1] == 'u' || s[i-1] == 'y') &&
                (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')) {
                flag =1; break;
        }
    }
    if(flag){
        cout<<"No"<<endl;
    }else{
        cout<<"Yes"<<endl;
    }
    return 0;
}