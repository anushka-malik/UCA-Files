#include <iostream>
using namespace std;

class ListNode{
    public:
     int val;
     ListNode* next;
     ListNode(int v)
     {
        val=v;
        next=NULL;
     }
};
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* t1=list1;
        ListNode* t2=list2;
        if(t1==NULL)
            return t2;
        else if(t2==NULL)
            return t1;
        else if(t1==NULL && t2==NULL)
            return NULL;
        else
        {
            ListNode* c=NULL;
            ListNode* head;
            if(t1->val<t2->val)
            {
                c=t1;
                t1=t1->next;
                head=c;
            }
            else
            {
                c=t2;
                t2=t2->next;
                head=c;
            }
            
            while(t1 && t2)
            {
               if(t1->val<t2->val)
               {
                 c->next=t1;
                 c=c->next;
                 t1=t1->next;
               }
               else
               {
                 c->next=t2;
                 c=c->next;
                 t2=t2->next;
               }
            }
            while(t1)
            {
                 c->next=t1;
                 c=c->next;
                 t1=t1->next;
            }
            while(t2)
            {
                 c->next=t2;
                 c=c->next;
                 t2=t2->next;
            }
            return head;
            
        }
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
    ListNode* l1=new ListNode(1);
    ListNode* h1=l1;
    for(int i=0;i<2;i++)
    {
        int v;
        cin>>v;
        l1->next=new ListNode(v);
        l1=l1->next;
    }
    ListNode* l2=new ListNode(1);
    ListNode* h2=l2;
    for(int i=0;i<2;i++)
    {
        int v;
        cin>>v;
        l2->next=new ListNode(v);
        l2=l2->next;
    }
    ListNode* ans=mergeTwoLists(h1,h2);
    display(ans);

    return 0;
}