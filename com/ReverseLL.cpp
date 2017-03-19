/* Linked List Node structure
   struct Node  {
     int data;
     Node *next;
  }
*/

// Should reverse list and return new head.
Node* reverse(Node *head)
{
  Node *ptr = head, *ptr2 = NULL,*start=NULL;
  while(ptr){
      if(start == NULL){
          ptr2 = start = new Node;
          ptr2->data = ptr->data;
          ptr2->next = NULL;
      }else{
          ptr2 = new Node;
          ptr2->data = ptr->data;
          ptr2->next = start;
          start = ptr2;
      }
      ptr = ptr->next;
  }
  return start;
}