#include <stdio.h>
#include<stdlib.h>
int q[5],n;
int front=-1;
int rear=-1;
void enqueue(int x){
    if(rear==n-1){
        printf("Queue is full");
    }
    else if(front==-1 && rear==-1){
        front=0;
        rear=0;
        q[rear]=x;
    }
    else
    {
        rear++;
        q[rear]=x;
    }
    
}
void dequeue(){
    if(front== -1 && rear ==-1){
        printf("Queue is empty");
    }
    else if(front==rear){
        printf("deleted itm is %d",q[front]);
        front=rear=-1;
    }
    else{
        printf("deleted item is %d",q[front]);
        front++;
    }
        
} 
 void peek(){
     printf("peek element is %d",q[front]);
 }
 void display(){
     printf("The queue elements are");
     for(int i=front;i<=rear;i++){
         printf("%d ",q[i]);
         
     }
 }
void main(){
    printf("Enter size of the queue");
    scanf("%d",&n);
       int ch,ele;
       while(1){
        printf("\n1.enqueue\n2.dequeue\n3.peek\n4.display\n5.exit");
        printf("Enter your choice");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("ENter an element to be insert");
                scanf("%d",&ele);
                enqueue(ele);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("ENter valid choice");
            
        }
    }
    
}
