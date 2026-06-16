
#include<stdio.h>
#include<stdlib.h>

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

// void insertion_at_pos(){
    // struct sll *
// }



int main(){
     struct sll *s=NULL;

    insertion_at_begning(1);
    traversal();
    insertion_at_begning(2);
    traversal();
    insertion_at_end(7);
    traversal();
    insertion_at_end(5);
    traversal();



return 0;

}


