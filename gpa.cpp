#include<iostream>
using namespace std;

int main()
{
	int n,i,s=0,k=0,t=0,c;double gpa;
	char g;
	cout<<"enter no. of subjects: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"enter subject's credit and grade scored: ";
		cin>>c>>g;
		t=t+c; 
		switch(g)
		{
			case 'S':k=10*c;
					 s=s+k;
					 break;
			case 'A':k=9*c;
					 s=s+k;
					 break;
			case 'B':k=8*c;
					 s=s+k;
					 break;
			case 'C':k=7*c;
					 s=s+k;
					 break;
					 
			case 'D':k=6*c;
					 s=s+k;
					 break;
		}
	}
	gpa=(double)s/t;
	cout<<"GPA: "<<gpa<<endl;		
	
}