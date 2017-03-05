#include<bits/stdc++.h>
using namespace std;
struct NODE
{
	int data; NODE *next;
} 	*start = NULL, *ptr = NULL;
NODE *removeDuplicates(NODE *root)
{
    NODE *start = root,*start2=NULL, *ptr1 = NULL, *ptr2 = NULL,*ptr=NULL,*ptr3=NULL;
    int count=0,val;
    for(ptr1 = root; ptr1; ptr1 = ptr1->next){
        if(ptr1->next != NULL){
        	
        	ptr3 = ptr1->next;
        	cout<<ptr1->data<<endl;
	        if(ptr1->data != ptr3->data){
	            if(count == 0){
	                ptr2 = start2 = new NODE; 
	            	count =1;
	            }else{
	                ptr2 = ptr2->next;
	            }
	            ptr2->data = ptr1->data;
	        	//cout<<ptr2->data<<" ";
	        	ptr2->next = new NODE;
	        }
        }else{
        	//cout<<ptr1->data<<" ";
        	ptr2->data = ptr1->data;
        	ptr2->next= NULL;
        }
    }    
 	int c=0;  
    for(ptr = start2; ptr ; ptr = ptr->next){
        c++;
        //cout<<ptr->data<<" ";
    }        
}
int main(int argc, char const *argv[])
{
	for (int i = 1; i <=5; ++i)
	{
		if(start == NULL){
			ptr = start = new NODE;
		}else{
			ptr = ptr->next;
		}
		cin>>ptr->data;
		if(i==5){
			ptr->next = NULL;
		}else{
			ptr->next = new NODE;
		}
	}
	/*for (ptr = start; ptr ; ptr= ptr->next)
	{
		cout<<ptr->data<<endl;
	}*/
	removeDuplicates(start);
	return 0;
}