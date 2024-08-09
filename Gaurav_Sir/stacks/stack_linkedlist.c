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
Node * head=NULL;

int n=0;
void push(int d)
{
  Node* temp=head;
  head=(Node*)malloc(sizeof(int));
  head->data=d;
  head->next=temp;
  n++;
}

int pop()
{
  if(n==0)
   return INT_MAX;
  int item=head->data;
  Node* temp=head;
  head=head->next;
  free(temp);
  n--;
  return item;
}

int size()
{
  return n;
}

bool isEmpty()
{
  return (n==0);
}

void test_stack()
{
  push(3);
  push(9);
  push(15);
  push(7);
  assert(size()==4);
  assert(pop()==7);
  assert(size()==3);

  assert(pop()==15);
  assert(size()==2);
assert(pop()==9);
assert(size()==1);
assert(pop()==3);
assert(isEmpty);
}

int main()
{
  test_stack();
  return 0;
}

