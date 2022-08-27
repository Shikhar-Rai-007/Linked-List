//Linked List
//Syntax & Implementation

// class node
// {
//     public:
//     int data;
//     node* next;

//     node(int val)
//     {
//         data=val;
//         next=NULL;
//     }
// };
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