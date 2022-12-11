#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *link;
}node;
node* top=NULL;
void push(int data){node* temp=NULL;
    temp=(node*)malloc(sizeof(node));
        temp->data=data;
        temp->link=top;
        top=temp;
}

void display(){
    node* temp=top;
    while(temp!=NULL){
        printf(" %d ",temp->data);
        temp=temp->link;
    }
}
void rev(){
    node* temp=top;
    while(temp->link!=NULL){
        temp=temp->link;
    }
    while(temp==top){
        printf(" %d ",temp->data);
        temp->link=temp;
    }

}
int main(){
    push(5);
    push(0);
    push(6);
    push(1);
    display();
    rev();
    return 0;
}