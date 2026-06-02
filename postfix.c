
// to evalute the postfix expression using c //

#include<stdio.h>
#include<ctype.h>
#include <math.h>

#define MAX 100
struct stack
{
    int top;
    int data[MAX];

};

void push(struct stack *s, int element)
{
    if (s->top == MAX - 1){
        printf("stack overfloe/n");
        return ;
    }

     s->data[++s->top] = element;

}

int pop(struct stack *s)
{
    int element ;

    if (s->top == -1)
    {
        printf("stack underflow \n");
        return -1;

    }else{
    
        
        element =s->data[s->top--];
        return element;
    }

}


int main()
{

    int i,val1,val2,result;
    char postfix[MAX];
    struct stack s;
    s.top=-1;
    printf("enter the postfix expression as string:");
    scanf("%s",postfix);


    for(i=0;postfix[i]!='\0';i++){

        if(isdigit(postfix[i]))
        {
           push(&s,postfix[i]-'0');

        }
        else{

            val1 = pop(&s);
            val2 = pop(&s);   



            switch(postfix[i]){
                case '+':
                    result=val1+val2;
                    break;
                case '-':
                    result=val1-val2;
                    break;
                case '*':
                    result=val1*val2;
                    break;
                case '/':
                    result=val1/val2;
                    break;
                case '^':
                    result=pow(val2,val1);
                    break;  
             } 

        push(&s,result);                  

    }
}
   printf("the result of the postfix expression is: %d ",s.data[s.top]);
    return 0;
    
    
}

