#include<iostream>
using namespace std;
struct node{
  int data;
  node *next;
};
void display(node *ptr){
  while(ptr!=NULL){
    cout<<ptr->data<<" ";
    ptr=ptr->next;
  }
  cout<<endl;
}
void even(node *ptr){
  int sum=0;
  while(ptr!=NULL){
    if(ptr->data%2==0){
      cout<<ptr->data<<endl;
      sum+=ptr->data;
    }
    ptr=ptr->next;
  }
  cout<<sum<<endl;
}
void largest(node *ptr){
  int largest=ptr->data;
  node *curr=ptr->next;
  while(curr!=NULL){
    if(largest<curr->data){
      largest=curr->data;
    }
    curr=curr->next;
  }
  cout<<largest<<endl;
}
void movelargesttoend(node *head){
  if(head==NULL || head->next==NULL){
    cout<<"there is no list to search for it";
  }
  else{
    node *curr=head;
    node *lg=head;
    node *prev=head;
    while(curr->next!=NULL){
      if(curr->next->data >lg->data){
        lg=curr->next;
        prev=curr;
      }
      curr=curr->next;
    }
    if(lg!=curr){
      prev->next=lg->next;
      lg->next=NULL;
      curr->next=lg;
    }
  }
}
void movesmallesttofirst(node *&head){
  if(head==NULL || head->next==NULL){
    cout<<"there is no list to search";
  }
  else{
    node *curr=head;
    node *small=head;
    node *prev=NULL;
    while(curr->next !=NULL){
      if(curr->next->data <small->data){
        small=curr->next;
        prev=curr;
      }
      curr=curr->next;
    }
    if(small !=head){
      prev->next=small->next;
      small->next=head;
      head=small;
    }
  }
}
void freeall(node *head){
  while(head!=NULL){
    node *temp=head;
    head=head->next;
    delete temp;
  }
}
void insertfirst(node *&head){
  node *newnode=new node;
  cin>>newnode->data;
  newnode->next=head;
  head=newnode;
}
void insertend(node *head){
  node *newnode=new node;
  cin>>newnode->data;
  node *temp=head;
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=newnode;
  newnode->next=NULL;
}
void insertmiddle(node *head,int x){
  node *curr=head;
  int n;
  cin>>n;
  for(int i=0;i<n && curr->next !=NULL;i++){
    curr=curr->next;
  }
  node *newnode=new node{x,curr->next};
  curr->next=newnode;
}
int main(){
  node *head=NULL;
  node *tail=NULL;
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    node *newnode=new node;
    cin>>newnode->data;
    newnode->next=NULL;
    if(head==NULL){
      head=newnode;
      tail=newnode;
    }
    tail->next=newnode;
    tail=tail->next;
  }
  int x;
  cin>>x;
 insertmiddle(head,x);
  display(head);
}