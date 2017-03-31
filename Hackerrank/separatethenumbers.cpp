#include <bits/stdc++.h>

using namespace std;

int main(){
    int q;
    int c=0,l,m,n;
    cin >> q;
    vector<int> v;
    for(int i = 0; i < q; i++){
        string s;
        cin >> s;
        for(int j=0; j<s.length();j++){
             n = (int)s[j];
             n = n- 48;
            v.push_back(n);
            n=0;
        }   
        int gap =1,len =s.length(),flag=0;
        i=0;
        while(1){
            if(v[i] +gap !=v[i+1] && i+1 <len-1){
                gap++;
                i=0;
            }else if(v[i] +gap ==v[i+1] && i+1 <len-1){
                i++;
            }
            if(i == len-1){
                break;
            }else if(gap > len/2){
            	flag =1;
            	break;
            }
        }
        if(flag){
        	cout<<"NO"<<endl;
        }
    }
    return 0;
}
