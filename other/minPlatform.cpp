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
        map<int,int> m;
        for(int j=0;j<n;j++){
          m[v2[j]] = v1[j];
        }
        map<int,int>::iterator it;
        int h=0;
        for(it = m.begin(); it !=m.end();it++){
            v2[h] = it->first;
            v1[h] = it->second; h++;           
        }
        int plat=1,result=1,r=1,w=0;
        while(r<n && w<n){
            if(v1[r] < v2[w]){
                plat++; r++; 
                if(plat > result) result = plat;
            }else{
                plat--; w++;
            }
        }
        //if(c==0) c=1;
        cout<<result<<endl; m.clear(); v1.clear(); v2.clear();
    }
}