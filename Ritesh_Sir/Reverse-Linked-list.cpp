#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class ListNode
{
    public:
     int val;
     ListNode* next;
     ListNode(int v)
     {
        val=v;
        next=NULL;
     }
};

ListNode* reverse(ListNode* &head)
    {
       ListNode* c=head;
       ListNode* p=NULL;
       ListNode* f=head->next;
       while(f)
       {
         c->next=p;
         p=c;
         c=f;
         f=f->next;
       }
       c->next=p;
       head=c;
      return head;
    }

ListNode* reverseList(ListNode* &head) 
   {
        if(head==NULL)
            return NULL;
        return reverse(head);
   }
   
void display(ListNode* temp)
   {
       while(temp)
       {
          cout<<temp->val<<" ";
          temp=temp->next;
       }
       cout<<endl;
   }

int main()
{
    ListNode* head=new ListNode(1);
    ListNode* temp=head;
    temp->next=new ListNode(2);
    temp=temp->next;
    temp->next=new ListNode(3);
    temp=temp->next;
    temp->next=new ListNode(4);
    temp=temp->next;
    temp->next=new ListNode(5);
    temp=temp->next;

    display(head);
    
    reverseList(head);

    display(head);
    

    return 0;
}