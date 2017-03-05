#include <bits/stdc++.h>

using namespace std;

int main(){
    int m,a,b;
    int n;
    int val;
    cin >> m >> n;
    val = m;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        if(val == a){
            val = b;
        }else if(val ==b){
            val = a;
        }
    }
    cout<<val<<endl;
    return 0;
}
