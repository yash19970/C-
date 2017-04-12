#include <bits/stdc++.h>

using namespace std;

int main() {
    int q,c1=0,flag=0,l,n;
    cin >> q;
    for(int i = 0; i < q; i++){
        cin >> n;
        flag =0;
        vector<int> a,b;
        for(int j = 0;j < n; j++){
           cin >>l;
            a.push_back(l);
            b.push_back(l);
        }
        sort(b.begin(),b.end());
        for(int k=0; k<a.size();k++){
            if( k+1<a.size() && a[k]-a[k+1]==1){
                swap(a[k],a[k+1]);
            }
            if(a==b){
               flag =1;
            }
        }
        if(flag){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
       
    }
    return 0;
}
