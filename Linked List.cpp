#include <bits/stdc++.h>
using namespace std;
//Linked List
//Syntax & Implementation

class node
{
    public:
    int data;
    node* next;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};
// void insertAthead(node* &head,int val){
//     node* newNode=new node(val);
//     newNode->next=head;
//     head=newNode;
// }
// void insert(node* &head,int val)
// {
//     node* n=new node(val);
//     if (head==NULL)
//     {
//         head=n;
//         return;
//     }
//     node* temp=head;
//     while(temp->next != NULL)
//     {
//         temp=temp->next;
//     }
//     temp->next=n;
// }
// void insertAtPosition(Node* &head,int pos,int data){
//     if(pos==1){
//         insertAthead(head,d);
//         return;
//     }
//     node* temp=head;
//     int cnt=1;
//     while(cnt<(pos-1)){
//         temp=temp->next;
//         cnt++;
//     }

//     if(temp->next==NULL){
//         insert(tail,d);
//         return;
//     }

//     node* nodeToinsert=new node(d);
//     nodeToinsert->next=temp->next;

//     temp->next=nodeToinsert;
// }
// void display(node* head)
// {
//     node* temp=head;
//     while(temp!=NULL)
//     {
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
//     cout<<"NULL"<<endl;
// }
// void deleteathead(node* &head)
// {
//     node* todelete=head;
//     head=head->next;

//     delete todelete;
// }
// void deletion(node* &head,int val)
// {
//     node* temp=head;
//     while(temp->next->data != val)
//     {                                       
//         temp=temp->next;
//     }
//     node* todelete=temp->next;
//     temp->next=temp->next->next;

//     delete todelete;
// }

// Linear Doubly Linked List

// class Node
// {
//     public:
//     int data;
//     Node* next;
//     Node* prev;

//     Node(int val)
//     {
//         this->data=val;
//         this->next=NULL;
//         this->prev=NULL;
//     }
// };
// void insertatHead(Node* &head,int val){
//     Node*n=new Node(val);
//     n->next=head;
//     if(head!=NULL){
//         head->prev=n;
//     }
//     head=n;
// }
// void insertatTail(Node* &head,int val){

//     if(head==NULL){
//         insertatHead(head,val);
//         return;
//     }
//     Node* n=new Node(val);
//     Node* temp=head;
//     while (temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=n;
//     n->prev=temp;
// }
// void display(Node* head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// // Till Now We Have Created Functions For Setting And The Displaying The Values Of Linear Doubly Linked List.
// //Now We Will Write Functions For Deleting.
// void deleteatHead(Node* &head){
//     Node* todelete=head; // We Have Created A Pointer Pointing Head Node.
//     head=head->next;   //We Have Updated Head Position Here.
//     head->prev=NULL; 

//     delete todelete; // Now After Updating Our Head We Delete The Previous Head.
// }
// // In The Following Function We Pass On The Positon And The Head.
// void deletion(Node* &head,int pos){
//     if(pos==1){
//         deleteatHead(head);
//         return;
//     }
//     Node* temp=head;
//     int count=1;
//     while (temp!=NULL && count!=pos)
//     {
//         temp=temp->next;             
//         count++;
//     }
//     temp->prev->next=temp->next;
//     if(temp->next!=NULL){
//         temp->next->prev=temp->prev;
//     }
//     delete temp;
//     //We Created A temproray Pointer And Iterated To The Positon Whose Element Has To Be Deleted. Now The Previous Of The Temprorary
//     //Pointer Will Point To The Next Of The Temprorary Pointer And Vice Versa For The Next Of The Temprorary Pointer. After
//     //Updating We Deleted The Temprorary Pointer.
// }
// int main(){
//     Node* head=NULL;
//     insertatTail(head,3);
//     insertatTail(head,4);
//     insertatTail(head,5);
//     display(head);
//     insertatHead(head,2);
//     insertatHead(head,1);
//     display(head);
//     deletion(head,2);
//     display(head);
//     return 0;
// }

// // Circular Linked List
// // For Adding A Node In The End We Make A Node And Than Traverse The 
// // List To The Last Node Than Point The Next Of The Last Node To The
// // New Node And Next Of The New Node To The Head Node.

// class node{
//     public:
//     int data;
//     node* next;

//     node(int val){
//         data=val;
//         next=NULL;
//     }
// };
// void insertatHead(node* &head,int val){
//     node* n=new node(val);
//     if(head==NULL){
//         n->next=n;
//         head=n;
//         return;
//     }
//     node* temp=head;
//     while(temp->next!=head){
//         temp=temp->next;
//     }

//     temp->next=n;
//     n->next=head;
//     head=n;
// }
// void insertatTail(node* &head,int val){
//     if(head==NULL){
//         insertatHead(head,val);
//         return;
//     }

//     node* n=new node(val);
//     node* temp=head;
//     while(temp->next!=head){
//         temp=temp->next;
//     }

//     temp->next=n;
//     n->next=head;

// }
// void deleteatHead(node* &head){
//     node* temp=head;
//     while(temp->next!=head){
//         temp=temp->next;
//     }
//     node* todelete=head;
//     temp->next=head->next;
//     head=head->next;
//     delete todelete;
// }
// void deletion( node* &head, int pos){
//     if(pos==1){
//         deleteatHead(head);
//         return;
//     }
//     node* temp=head;
//     int count=1;
//     while(count!=pos-1){
//         temp=temp->next;
//         count++;
//     }
//     node* todelete=temp->next;
//     temp->next=temp->next->next;
//     delete todelete;
// }
// void display(node* head){
//     node* temp=head;
//     do
//     {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     } while(temp!=head);   // If We Put NULL In Place Of Head Than We Will Never Get Out Of This Loop
//     cout<<endl;
// }
// int main(){
//     node* head=NULL;
//     insertatTail(head,1);
//     insertatTail(head,2);
//     insertatTail(head,3);
//     insertatTail(head,4);
//     display(head);
//     insertatHead(head,5);
//     display(head);
//     deletion(head,5);
//     display(head);
//     return 0;
// }

//Middle of Linked List
//Non Optimized
// int lenOfLL(node* head){
//     int len=0;
//     while(head!=NULL){
//         len++;
//         head=head->next;
//     }
//     return len;
// }

// // node* findMiddle(node* head){
// //     int len=lenOfLL(head);
// //     int ans=len/2;

// //     node* temp=head;
// //     int cnt=0;
// //     while(cnt<ans){
// //         temp=temp->next;
// //         cnt++;
// //     }
// //     return temp;
// // }
// //Optimized
// node* findMiddle(node* head){
//     if(head==NULL || head->next==NULL){
//         return head;
//     }

//     if(head->next->next==NULL){
//         return head->next;
//     }

//     node* slow=head;
//     node* fast=head->next;

//     while(fast!=NULL){
//         fast=fast->next;
//         if(fast!=NULL){
//             fast=fast->next;
//         }
//         slow=slow->next;
//     }
//     return slow;
// }

// // Reversing A  Linked List
// // Iterative Way
// node* reverse(node* head)
// {
//     node* prevptr=NULL;
//     node* currptr=head;
//     node* nextptr;            //A pointer of node* i.e, poiting to a 
//                               //data strucuture of type node.

//     while(currptr!=NULL)
//     {
//         nextptr=currptr->next;
//         currptr->next=prevptr;

//         prevptr=currptr;
//         currptr=nextptr;
//     }
//     return prevptr;
// }
// //Recursive Way
// node* reverseRecursive(node* &head)
// {
//     if (head==NULL || head->next==NULL)
//     {
//         return head;
//     }
//     node* newhead=reverseRecursive(head->next);
//     head->next->next=head;
//     head->next=NULL;
//     return newhead;
// }
