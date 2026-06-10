
#include<stdio.h>

#define MAX 5
#define true 1
#define false 0

struct QUEUE
{
    int front;
    int rear;
    int data[MAX];
};  


// checking the queue ifs full or not //


int isFull (struct QUEUE *Q)
{
    if(Q->rear == MAX-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}


// checking the queue ifs empty or not //

int isEmpty (struct QUEUE *Q)
{
    if(Q->front == -1 || Q->front > Q->rear)
    {
        return true;
    }
    else
    {
        return false;
    }
}


// Enqueueing the value to the queue//


void enqueue(struct QUEUE *Q, int element)
{
    if(isFull(Q))
    {
        printf("Queue overflow \n");
    }
    else
    {
        if(Q->front == -1)
        {
            Q->front++;
        }
        Q->rear++;
        Q->data[Q->rear] = element;
    }
}


// dequeueing the value form the queue which are already in the queue //



void dequeue(struct QUEUE *Q)
{
    int element;
    if(isEmpty(Q))
    {
        printf("Queue underflow \n");
    }
    else
    {
        element = Q->data[Q->front++];
        printf("Element %d is dequeued from queue \n", element);
    }
}




int main()
{
    struct QUEUE Q;
    Q.front = -1;
    Q.rear = -1;
    int choice,element ;
    do{
    printf("Enter the choice you want to perform :\n");
    printf("1.Enqueue \n 2.Dequeue \n 0.Exit \n ");
    printf("Enter your choice ?->");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("Enter the element you want to enqueue :\n");
            scanf("%d",&element);
            enqueue(&Q, element);
            break;

        case 2:
            dequeue(&Q);
            break;

        case 0:
            printf("Exiting the program ,Thank you ! \n");
            break;

        default:

            printf("Invalid choice \n");
           }
        }while(choice);
    

return 0;
}