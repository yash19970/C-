#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main(int argc, char const *argv[])
{
    long long int t,a,b;
    long long int c1,c2;
    long long int c3;
    vector <int> vec;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b;
        c1 = sqrt(a);
        c2 = sqrt(b);
        c3 = c2-c1;
        cout<<floor(c2)-ceil(c1) +1 <<endl;
        c3 =0;
    }
    return 0;
}