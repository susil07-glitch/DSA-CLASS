
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


struct sll  *deletion_from_begning(struct sll*first){
  
    struct sll *ptr=first;

    first=first->next;
    free(ptr);

    return first;
}



struct sll *deletion_from_pos(struct sll*first ,int index){
    

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
    first= deletion_from_begning(first);
    traversal();

    // last=deletion_from_end(last);
    // traversal();



return 0;

}


