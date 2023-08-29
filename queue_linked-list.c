#include <stdio.h>
#include <stdlib.h>

struct node{
    int info;
    struct node *nxt;
} ;

int main() {
    printf("Progarm by Pranav \n rollno.=37");
   
    int val,i,max,op,count=0;
    
    struct node *r,*front = NULL ,*rear = NULL,*tmp,*s;
    
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
        printf("The queue is full \n");
    }
    else{
    
        tmp = (struct node *)malloc(sizeof (struct node ));
             printf("Enter the value of val \n");
            scanf("%d",&val);
            tmp->info = val;
            tmp->nxt = NULL;
            if(front == NULL){
                front = tmp;
                rear = tmp;
            }
            else{
                rear->nxt = tmp;
                rear = tmp;
            }
            count++;
    }

            printf("The queue is \n");
        r = front;
    while(r !=NULL){
    printf("%d \t",r->info);
    r = r->nxt;
    }

       break;

    case 2:
   if(front == NULL || count == 0 ){
    printf("Queu is empty\n");
   }
   else{
    s = front;
    front = front->nxt;
    free(s);
    count--;
    printf("The queue is \n");
        r = front;
    while(r !=NULL){
    printf("%d \t",r->info);
    r = r->nxt;
   }
  
    }
    
break;
    case 3:
    printf("Exit");
    break;
    }   
    }while(op !=3);

  return 0;
}