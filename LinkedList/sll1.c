
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct sll
{
    int data;
    struct sll *next;
    
};

struct sll *first=NULL ,*last =NULL ;

struct sll *create_new_node(int element ){
    struct sll *NewNode=((struct sll *)malloc(sizeof(struct sll)));
    if(NewNode!=NULL){

          NewNode->data=element;
          NewNode->next=NULL;
    }

    return NewNode;

}



void insertion_at_begning(int element){
    struct sll *NewNode= create_new_node(element);

      if(first==NULL && last==NULL){
        first=last=NewNode;
    }
    else{

       NewNode->next=first;
       first=NewNode;
       printf("%d->",first->data);

    }


}


void insertion_at_end(int element){

    struct sll *NewNode=create_new_node(element);

    if(first==NULL && last==NULL){
        first=last=NewNode;
        return;
    }

    struct sll* ptr = first;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }

    ptr->next = NewNode;

    return;
    
}

void insertion_at_pos(int element,int index){
    struct sll *NewNode = create_new_node(element);
    struct sll *p=first;

    int pos=0;
    while ( pos!=index-1)
    {
       p=p->next;
       pos++;
    }
    
    NewNode->data=element;
    NewNode->next=p->next;
    p->next=NewNode;

    return;

}

void deletion_from_begning(){
    struct sll *temp =first;
    if(first==NULL){
        printf("List is empty !");

    }
    else if(first->next==NULL){
        temp=first;
        first=first->next;
        free(temp);

    }
    else{
        temp=first;
        first=first->next;
        free(temp);
    }
  return;

}

 void deletion_form_end(){

    struct sll *temp=first;
    if(first==NULL){
        printf("Linked list is empty !");
    }
    else if(first->next==NULL){
        temp=first;
        first=last=NULL;
        free(temp);

    }
    else{
     while(temp->next->next!=NULL){
        temp=temp->next;
    }

    free(temp->next);
    temp->next = NULL;
    last = temp;
    }
     return;

}

void deletion_from_pos(int index){
    struct sll* p=first;
    struct sll * q=first->next;

    if(first==NULL){
        printf("Linked List is empty !");

    }

    if(index==0){
        deletion_from_begning();
    }

    for(int i=0;i<index-1;i++){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
}


void  searching(int element){
    struct sll *temp=first;
    int flag=0;
    if(first==NULL){
        printf("Searching is Unsuccessfull,Empty list !");
    }
    else{
        temp=first;
        while(temp!=NULL){
            if(temp->data==element){
                printf("Element Found:%d",element);
                flag=1;
            }
            temp=temp->next;

        }
        if(flag==0){
            printf("Element Not found !");

        }
    }
    return;

}






void traversal(){
    struct sll *temp=first;

    
    if(first==NULL){
        printf("Empty list");

    }
    else{
        while(temp !=NULL){
            printf("%d ->",temp->data);
            temp=temp->next;

        }
        printf("NULL\n ");


    }
}


int main(){
     struct sll *s=NULL;

    printf("\n\nlinked List Before insertion:\n ");
    insertion_at_begning(1);
    traversal();
    insertion_at_begning(2);
    traversal();
    insertion_at_end(3);
    traversal();
    insertion_at_end(5);
    traversal();
    insertion_at_end(6);
    traversal();
    insertion_at_end(7);
    traversal();
    insertion_at_end(8);
    traversal();
    insertion_at_end(9);
    traversal();
    
    printf("\n \nLinked List after insertion at pos \n");

    insertion_at_pos(23,3);
    traversal();


    printf("\n \nLinked List after deletion from begning:\n ");
    deletion_from_begning();
    traversal();
    deletion_from_begning();
    traversal();

    printf("\n Linked List aftert deletion from end:\n");
    deletion_form_end();
    traversal();

    printf("\n deletion from specific position : \n");
    deletion_from_pos(4);
    traversal();

    printf("\nElement after seraching :\n");
    searching(3);


return 0;

}


