#include <stdio.h>
#include <stdlib.h>

struct node{
    int info;
    struct node *fnxt;
    struct node *bnxt;
} ;

int main() {
    printf("Progarm by Pranav \n rollno.=37");
   
    int val,i,n,op,ch_i,ch_d,afternode,count=0;
    
    struct node *r,*p,*q,*tmp,*s,*t;
    
    printf("\nEnter the value of n \n");
    scanf("%d",&n);
    do{
        printf("\n The options are \n ");
        printf("1.create \n");
        printf("2.insert at last \n ");
        printf("3.Delete first \n ");
        printf("4.search for given value of node \n");
        printf("5.display \n ");
        printf("6.Exit \n");
        printf("Enter the operation of to perform \n");
        scanf("%d",&op);

        switch(op){
        case 1: //create
        tmp= (struct node *)malloc(sizeof (struct node ));
    printf("Enter the value of val \n");
    scanf("%d",&val);
    
    tmp->info=val;
    tmp->fnxt=NULL;
    tmp->bnxt=NULL;
    p=tmp;
    q=tmp;
    for(i=0;i<n-1;i++){
    tmp= (struct node * )malloc(sizeof (struct node ));
    printf("Enter the next value of val \n");
    scanf("%d",&val);
    tmp->info=val;
    tmp->fnxt=p;
    p->bnxt=tmp;
    tmp->bnxt=q;
    q->fnxt=tmp;
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
            tmp->fnxt=p;
            p->bnxt=tmp;
            tmp->bnxt=q;
            q->fnxt=tmp;
            p=tmp;
            break;
            case 2://At end 
             tmp = (struct node *)malloc(sizeof (struct node));
             printf("Enter the value of val \n");
             scanf("%d",&val); 
             tmp->info=val;
             tmp->fnxt=p;
             p->bnxt=tmp;
             q->fnxt=tmp;
             tmp->bnxt=q;
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
                r=r->fnxt;
            }
            t=r->fnxt;
            tmp->info=val;
           // tmp->fnxt=r->fnxt;
            tmp->fnxt=t;
            t->bnxt=tmp;
            tmp->bnxt=r;
            r->fnxt=tmp;
            break;
           
          }
     break;
      case 3://delete 
     printf("\n The options to delete are \n ");
        printf("1.At beginning \n");
        printf("2.In between \n");
        printf("3.At end \n");
        printf("Enter the choise of to perform \n");
        scanf("%d",&ch_d);
    switch(ch_d){
        
        case 1://At beginning
         r=p;
         p=p->fnxt;
        
        free(r);
         p->bnxt=q;
         q->fnxt=p;
        
        break;
        case 2://in middle
        printf("Enter the value of val to be deleted \n");
        scanf("%d",&val);
        if(p->info != val &&q->info!=val){
        r=p;
        while(r->fnxt->info!=val){
            r=r->fnxt;
        }
        s=r->fnxt;
        t=r->fnxt->fnxt;
        r->fnxt=t;
        t->bnxt=r;
        free(s);
        }
       break;
       case 3://At end
       
        r=p;
        while(r->fnxt->fnxt != p){
            r=r->fnxt;
        }
        free(r->fnxt);
        q=r;
        q->fnxt=p;
        p->bnxt=q;
      //  q->bnxt=r;
               
        break;
     }
     break;
      case 4://search for a number
      r=p;
      printf("Enter the value of value to search for \n");
      scanf("%d",&val);
      while(r != NULL){
          
        if(r->info == val){
        printf("The value is found  ");
        break;
        }
    
        r=r->fnxt;
      }
    break;
      case 5://display

     r=p;
    while(r->fnxt !=p){
    printf("%d \t",r->info);
    r=r->fnxt;
    }
    printf("%d ",r->info);
    printf("\n");

    printf("Display from end \n");
    r=q;
    while(r->bnxt !=q){
    printf("%d \t",r->info);
    r=r->bnxt;
    }
    printf("%d ",r->info);

    printf("\n The value of q is ");
    printf("%d \n",q->info);

    printf("\n The value next to q is ");
     printf("%d \n",q->fnxt->info);
    
      break;
     case 6://Exit
      printf("Exit");
      break;
     } 
    }while(op != 6);
 return 0;
}    