#include <stdio.h>
#include <stdlib.h>

struct node{
    int info;
    struct node *nxt;
} ;

int main() {
    printf("Progarm by Pranav \n rollno.=37");
   
    int val,i,max,op,count=0;
    
    struct node *r,*top = NULL,*tmp,*s;
    
    printf("\nEnter the value of max \n");
    scanf("%d",&max);
    do{
        printf("\n The options are \n ");
        printf("1.insert \n");
        printf("2.delete \n ");
        printf("3.Exit \n ");
        printf("Enter the operation of to perform \n");
        scanf("%d",&op);

    switch(op){
    case 1:
    if(count == max){
        printf("The stack is full \n");
    }
    else{
    
        tmp = (struct node *)malloc(sizeof (struct node ));
             printf("Enter the value of val \n");
            scanf("%d",&val);
            tmp->info = val;
           
            if( top == NULL){
              top = tmp;
              tmp->nxt=NULL;
            }
            else{
                tmp->nxt = top;
                top = tmp;
            }
            count++;
    }
    printf("top %d",top->info);
 printf(" \n The stack is \n");
 s=top;
 while(s!=NULL){
    printf("%d \n",s->info );
    s=s->nxt;
 }
break;
 case 2:
 if(top==NULL|| count==0){
  printf("The stack is Empty");
 }
 else{
  r = top ;
  top=top->nxt;
  free(r);
  count--;
  printf(" \n The stack is \n");
 s=top;
 while(s!=NULL){
    printf("%d \n",s->info );
    s=s->nxt;
 }
 }
break;
  case 3:
    printf("Exit");
    break;
  }
 } while(op!=3);
 return 0;
}  