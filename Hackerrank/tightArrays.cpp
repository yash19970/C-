#include <bits/stdc++.h>
using namespace std;
int shortestTightArray(int a, int b, int c){
    int len1=0,len2=0;
    len1 = abs(b-a)+1;
    len2= abs(b-c);
    return (len1+len2);
}
int main() {
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    int result = shortestTightArray(a, b, c);
    cout << result << endl;
    return 0;
}
