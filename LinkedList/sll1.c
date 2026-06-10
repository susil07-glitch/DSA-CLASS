
#include<stdio.h>
#include<stdlib.h>

struct sll
{
    int data;
    struct sll *next;
    
};

struct sll *first ,*last =NULL ;

struct sll *create_new_node(int element ){
    struct sll *NewNode=((struct sll *)malloc(sizeof(struct sll)));
    if(NewNode!=NULL){

          NewNode->data=element;
          NewNode->next=NULL;
    }

    return NewNode;

}



void insertion_at_begning(struct sll *first , int element){
    struct sll *NewNode= create_new_node(element);

      if(first==NULL){

        first=last=NULL;

    }
    else{

       NewNode->next=first;
       first=NewNode;
       printf("%d->",first->data);

    }


}



void insertion_at_end(struct sll *first,int element){

    struct sll *NewNode=create_new_node(element);

    if(first==NULL){
        first=last=NULL;

    }
    struct sll *last=first;

    while(last->next !=NULL){
       last->next=NewNode;
       last=NewNode;
       printf("%d->",last->data);

    }

}




void traversal(struct sll *first){
    struct sll *temp=first;

    
    if(first==NULL){
        printf("Empty list");

    }
    else{
        while(temp !=NULL){
            printf("%d ->",temp->data);
            temp=temp->next;

        }
        printf("NULL \n ");


    }
}




int main(){
     
    struct sll *s =create_new_node(2);
    s->next=create_new_node(3);
    s->next->next=create_new_node(4);
    s->next->next->next=create_new_node(5);


    insertion_at_begning(s,1);
    traversal(s);



return 0;

}


