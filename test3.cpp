#include<iostream>
using namespace std;
#define queuesize 42
struct book{
    string name;
    int year;
};
struct node{
   book data;
   node *next;
};
struct queue{
    node *front;
    node *rear;
};
void initi(queue &q){
    q.front=NULL;
    q.rear=NULL;
}
void insert(queue &q,book b){
    node *newnode=new node;
    newnode->data=b;
    newnode->next=NULL;
    if(q.rear==NULL){
        q.rear=newnode;
        q.front=newnode;
    }
    else{
        q.rear->next=newnode;
        q.rear=newnode;
    }
}
book remove(queue &q){
    node *temp=q.front;
    book b=temp->data;
    q.front=q.front->next;
    if(q.front==NULL){
        q.rear==NULL;
    }
    delete temp;
    return b;
}
void printfirstN(queue &q,int n){
    node *temp=q.front;
    for(int i=0;i<n && temp!=NULL;i++){
        cout<<temp->data.name<<endl;
        cout<<temp->data.year<<endl;
        temp=temp->next;
    }
}
int main(){
    queue q;
    initi(q);
    book b[10]={
        {"b1",2000},{"b2",2100},
        {"b1",2000},{"b2",2100},
        {"b1",2000},{"b2",2100},
        {"b1",2000},{"b2",2100},
        {"b1",2000},{"b2",2100},
    };
    for(int i=0;i<10;i++){
        insert(q,b[i]);
    }
    printfirstN(q,5);
}
