#include <bits/stdc++.h>
using namespace std;
int main() {
    int q;
    cin >> q;
    for(int j = 0; j < q; j++){
        stack<int> st;
        string s;
        cin >> s;
        int len = s.length();
        int c=0;
        for(int i=0; i<len;i++){
            if(s[i] == '1' && st.empty()){
                st.push(1);
            }else if(s[i] == '1' && st.top() == 1){
                c++;
            }else if(s[i] !='0' && s[i] !='1' ){
                    if(!st.empty() && st.top() == 1){
                        st.pop();  
                    }
            }
        }
        cout <<c<< endl;
     }
    return 0;
}
