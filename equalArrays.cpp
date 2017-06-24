#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v1,v2;
    int n,t,k,l;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>l;
            v1.push_back(l);
        }
        for(int j=0;j<n;j++){
            cin>>l;
            v2.push_back(l);
        }
        map<int,int> m1;
        for(int j=0;j<n;j++){
            m1[v1[j]]=0;
        }
        for(int j=0;j<n;j++){
            m1[v1[j]]++;
        }
        int f1=0;
        for(int j=0;j<n;j++){
            if(m1.find(v2[j] == m1.end())){
                f=1; break;
            }
            if(m1[v2[j] ==0){f=1; break;}
            m1[v2[j]]--;
        }
        if(f1) cout<<0<<endl;
        else if(f1==1) cout<<1<<endl;
    }
}