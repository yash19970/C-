#include <bits/stdc++.h>

using namespace std;

int main(){
    int g;
    int flag=0,c1,c2,l,j,size2;
    cin >> g;
    for(int a0 = 0; a0 < g; a0++){
        int n;
        cin >> n;
        c1=0; c2=0; size2=0;
        vector<int> sq,v;
        for(int i = 0; i < n; i++){
           cin >>l;
            sq.push_back(l); //v.push_back(l);
        }
        int size = sq.size(); j=0;
        int len = size;
        while(size >2 && j<size){
            if(j!=0 && j!=size-1 && sq[j-1] ==0 && sq[j+1] ==0){
                sq.erase(sq.begin()+j); 
                size = sq.size();
                c1++;
                j=0;
            }else{
                j++;
            }
            if(j>len){
                break;
            }
        }
        if(c1==0){
                cout<<"Bob"<<endl;
        }else if(c1%2 ==0){
                cout<<"Bob"<<endl;
        }else if(c1%2 >=1){
                cout<<"Alice"<<endl;
        } 
    }
    return 0;
}
