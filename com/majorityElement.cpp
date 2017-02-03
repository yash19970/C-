#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t,c=0,l;
    map <int,int> m;
    vector<int> v;
    cin>>t;
    for(int i=0; i<t;i++){
        cin>>n;
        for(int j=0; j<n;j++){
            cin>>l;
            v.push_back(l);
        }
        for(int k=0; k<n;k++){
            m[v[k]] =0;
        }
        for(int kk=0; kk<n;kk++){
            m[v[kk]]++;
        }
       //cout<<m.size();
        for (map<int,int>::iterator it = m.begin(); it != m.end(); ++it)
        {
            if(it->second > n/2){
                cout<<it->first<<endl;
                flag =1;
                break;
            }
        }
        if(!flag){
            cout<<"NO Majority Element"<<endl;
        }  
        flag =0;
        v.clear(); m.clear();
    }
 return 0;   
}