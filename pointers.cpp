#include<bits/stdc++.h>
using namespace std;
struct person
{
	int age;
	string name;
};
int main(int argc, char const *argv[])
{
	struct person *p1,obj1;
	p1 = &obj1;
	(*p1).age = 10; (*p1).name = "yahs";
	//cout<<(*p1).age<<(*p1).name<<endl;
	cout<<p1->name; cout<<p1->age;


	/*int a[]= {1,2,3};
	int y =20;
	int *p, *p2;
	p2 = &y;
	cout<<p2<<" "<<*p2<<endl;
	
	p = a;
	for (int i = 0; i < 3; ++i)
	{
		cout<<"Address: "<<p<<" ";
		cout<<"Value: "<<*p<<endl;
		p++;
	}*/

	/*int x =2;
	int *p;
	int **pp;
	p = &x;
	pp = &p;

	cout<<"Address of x: "<<p<<endl;
	cout<<"Address of p: "<<pp<<endl;
	cout<<"value of x: "<<*p<<endl;
	cout<<"value of p: "<<**pp<<endl;*/

	
	return 0;
}