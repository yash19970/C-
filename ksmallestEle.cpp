/*#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int n,t,g,l;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>l;
            v.push_back(l);
        }
        cin>>g;
        map<int,int> m;
        for(int k=0;k<n;k++){
            m[v[k]] = k;
        }
        map<int,int>::iterator it;
        int c=0;
        for(it = m.begin(); it !=m.end();it++){
            if(c == g-1){
                cout<<it->first<<endl; break;
            }
            c++;
        }
        m.clear(); v.clear();
    }
}


*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v,c;
    int n,t,k,l,x;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>x;
        for(int j=0;j<n;j++){
            cin>>l;
            v.push_back(l);
        }
        int max=v[0];
        int pos =0;
        for(int e=0;e<n;e++){
            v[v[e]%x] += x;
        }
        for(int k=1;k<n;k++){
            if(max < v[k]){
                max = v[k]; 
                pos=k;
            }
        }
             cout<<pos<<endl; v.clear();
    }
}