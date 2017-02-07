#include<bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
	int *p = NULL;
	p = new int[5];
	*p = 1;
	*(p+1) = 2;
	cout<<p[1]<<p[0];
	return 0;
}