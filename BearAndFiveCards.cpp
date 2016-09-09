/*codeforces round 367, div2 ,A*/
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a[1000],freq[1000];
    int c,m,total=0;
    for(int i=0;i<5;i++){
        cin>>a[i];
        total += a[i];
    }
    if(total == 5*a[0]){            /*if all thr values are same, total -=3*value */
        total = total - 3*a[0];
        cout<<total<<endl;
        return 0;
    }
    for(int i=0;i<5;i++){
        c = 1;
        for(int j =i+1;j<5;j++){
            if(a[i] == a[j]){
                c++;
            }
        }
        freq[i] = c;
    }
    int k =0;
    int sum1[5],sum2 = 999999;
    for(int i=0;i<5;i++){
        sum1[i] = 9999999;
    }
    for(int i=0;i<5;i++){
        if(freq[i] == 2){
            sum1[i] = total -2*a[i];
            k++;
        }else if(freq[i] == 3){
            sum1[i] = total -3*a[i];
            k++;
        }
      //  cout<<freq[i]<<" ";
    }
    int flag = 0;
    for(int i=0;i<5;i++){
        if(sum1[i] < sum2){
            sum2 = sum1[i];
            flag =1;
        }
    }
    if(flag != 0){
        cout<<sum2<<endl;
    }
    else if(flag ==0){
        cout<<total<<endl;
    }
    return 0;
}