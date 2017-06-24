#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int n,t,k,l;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>l;
            v.push_back(l);
        }
        int f=0;
        map<int, pair<int,int> > m;
        
        for(int j=0;j<n;j++){
            
            if(f) break;
            
            int sum=0;
            for(int k=j+1;k<n;k++){
                sum = v[j]+v[k];
                
                if(m.find(sum) == m.end()){
                    m[sum] = make_pair(j,k);
                }else{
                    pair<int,int> p = m[sum];
                    f=1; break; 
                }
                
            }
        }
        if(f){
            cout<<1<<endl;
        }else{ cout<<0<<endl;} f=0; v.clear(); m.clear();
    }
}