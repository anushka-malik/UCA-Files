#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include <limits.h>

struct ListNode{
   int data;
   struct ListNode* next;
};

typedef struct ListNode Node;

Node* head=NULL;

int N=0;
void push(int d)
{ 
    Node* temp;
    temp->data=d;
    if(head==NULL)
      {
         head=temp;	 
      }
    else
      {
	Node* t1=head;
	while(t1->next)
	  t1=t1->next;
	t1->next=temp;
      }
    N++;
}

int pop()
{
   if(head==NULL)
       return INT_MAX;
    int item=head->data;
    Node* temp=head;
    head=head->next;
    temp->next=NULL;
    free(temp);
    N--;
    return item;
}

int size()
{
    return N;
}

int front()
{
    return head->data;
}

bool isEmpty()
{
    return size()==0;
}


void test()
{
     push(1);
     push(2);
     push(3);
     push(4);
     push(5);
     assert(size()==5);
     pop();
     assert(front()==2);
     pop();
     assert(front()==3);
     pop();
     assert(front()==4);
     pop();
     assert(size()==1);
     assert(front()==5);
     pop();
     assert(isEmpty()==1);
}

int main()
{
   test();
   return 0;
}
