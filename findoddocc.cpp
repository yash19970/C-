/*
 find the odd occurence , c++ code Geeksforgeeks/arrays
*/
 #include<iostream>
 using namespace std;
 int main(int argc, char const *argv[])
 {
 	int A[100];
 	int T,N;
 	int result = 0;
 	cin>>N;
 	for(int i=0; i<N;i++){
 		cin>>A[i];
 		result = result^A[i];
 	}
 	cout<<result<<endl;
 	return 0;
 }