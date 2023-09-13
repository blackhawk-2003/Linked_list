#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int val){
        data=val;
        next=NULL;
    }
    
};
void inserttail(node* &head, int val){
    node*n= new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void deleteathead(node*&head){
    node* todelete=head;
    head=head->next;
    return;
}
void deletion(node*head, int pos)
{
    if(head->next==NULL)
    {
        deleteathead(head);
        return;
    }
    node*temp=head;
    while(temp->next->data!=pos)
    {
        temp=temp->next;
    }
    node *todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
void display(node*head)
{
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}
int main() {
node*head= NULL;
inserttail(head,1);
inserttail(head,2);
inserttail(head,3);
inserttail(head,4);
inserttail(head,5);
display(head);
deletion(head,4);
display(head);
    return 0;
}
