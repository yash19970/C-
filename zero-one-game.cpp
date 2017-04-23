#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    list<int> list1;
    int n,t,l,c1;
    cin>>t;
    for (int i = 0; i < t; ++i)
    {
        c1=0;
        list1.clear();
        cin>>n;
        for (int j = 0; j <n ; ++j)
        {
            cin>>l;
            list1.push_back(l);
        }
        
        list<int>::iterator current = list1.begin();
        list<int>::iterator mid = list1.begin();
        mid++;
        list<int>::iterator next = mid;
        next++;
        int flag=0,c2=0;
        while(list1.size()>2)
        {
            if(*current ==0 && next !=list1.end() && *next==0){
                    mid = list1.erase(mid);
                    next = mid;
                    c1++;
                    next++; flag=1;
            }else{
                current++;
                mid++; next++;
            }    
            if(next == list1.end() && flag==1){
                flag=0;
                current = list1.begin();
                mid = list1.begin(); mid++;
                next = mid; next++; 
            }else if(next == list1.end() && flag==0){
                break;
            }        
        }
    if(c1 == 1){
        cout<<"Alice"<<endl;
    }else if(c1%2==0){
        cout<<"Bob"<<endl;
    }else{
        cout<<"Alice"<<endl;
    }
    }

    return 0;
}