

#include <stdio.h>
#include <stdlib.h>

struct node{
    int info;
    struct node *nxt;
} ;

int main() {
    printf("Progarm by Pranav \n rollno.=37");
   
    int val,i,n,op,ch_i,ch_d,afternode;
    
    struct node *r,*p,*q,*tmp,*s;
    
    printf("\nEnter the value of n \n");
    scanf("%d",&n);
    do{
        printf("\n The options are \n ");
        printf("1.create \n");
        printf("2.insert \n ");
        printf("3.Delete \n ");
        printf("4.display \n ");
        printf("5.Exit \n");
        printf("Enter the operation of to perform \n");
        scanf("%d",&op);

    switch(op){
        case 1: //create
        tmp= (struct node *)malloc(sizeof (struct node ));
    printf("Enter the value of val \n");
    scanf("%d",&val);
    
    tmp->info=val;
    tmp->nxt=NULL;
    p=tmp;
    q=tmp;
    for(i=1;i<n;i++){
    tmp= (struct node * )malloc(sizeof (struct node ));
    printf("Enter the next value of val \n");
    scanf("%d",&val);
    tmp->info=val;
    tmp->nxt=NULL;
    q->nxt=tmp;
    q=tmp;
    }
        
     break;
     case 2://insert
     
     printf("\n The options to insert are \n ");
        printf("1.At beginning \n");
        printf("2.At end \n");
        printf("3.In between \n");
        printf("Enter the choise of to perform \n");
        scanf("%d",&ch_i);
          switch(ch_i){
            case 1 ://At beginning
            tmp= (struct node *)malloc(sizeof (struct node ));
             printf("Enter the value of val \n");
            scanf("%d",&val);
            tmp->info=val;
            tmp->nxt=p;
            p=tmp;
            break;
            case 2://At end 
            tmp= (struct node * )malloc(sizeof (struct node ));
            printf("Enter the value of val \n");
            scanf("%d",&val);
            tmp->info=val;
            tmp->nxt=NULL;
            q->nxt=tmp;
            q=tmp;
            break;
            case 3://in between
            tmp= (struct node * )malloc(sizeof (struct node ));
            printf("Enter the value of val \n");
            scanf("%d",&val);
            printf("Element to be inserted after the node-value \n");
            scanf("%d",&afternode);
            r=p;
            while(r->info != afternode ){
                r=r->nxt;
            }
            tmp->info=val;
            tmp->nxt=r->nxt;
            r->nxt=tmp;
            break;
           
          }
     break;
     case 3://Delete
      printf("\n The options to delete are \n ");
        printf("1.At beginning \n");
        printf("2.In between \n");
        printf("3.At end \n");
        printf("Enter the choise of to perform \n");
        scanf("%d",&ch_d);
    switch(ch_d){
        
        case 1://At beginning
         r=p;
         p=p->nxt;
        free(r);
        
        break;
        case 2://in middle
        printf("Enter the value of val to be deleted \n");
        scanf("%d",&val);
        if(p->info != val &&q->info!=val){
        r=p;
        while(r->nxt->info!=val){
            r=r->nxt;
        }
        s=r->nxt;
        r->nxt=r->nxt->nxt;
        free(s);
        }
       break;
       case 3://At end
       
        r=p;
        while(r->nxt->nxt != NULL){
            r=r->nxt;
        }
        free(q);
        q=r;
        q->nxt=NULL;
               
        break;
     }
     break;
     case 4://display
     r=p;
    while(r->nxt !=NULL){
    printf("%d \t",r->info);
    r=r->nxt;
    }
    printf("%d ",r->info);
    
      break;
     case 5:
      printf("Exit");
      break;
    }
    }while(op != 5);


    return 0;
}
