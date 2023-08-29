#include <stdio.h>

int main() {
    printf("Progarm by Pranav \n rollno.=37");
    
    int op,i,x;
    int array[10];
    int max=4;
    int front =-1,rear=-1;

    do{
        printf("\n The options are \n ");
        printf("1.insert \n");
        printf("2.delete \n ");
        printf("3.Exit \n ");
        printf("Enter the operation of to perform \n");
        scanf("%d",&op);

    switch(op){
        case 1: //insert
        if( rear == max-1){
            printf("The queue is FULL \n");
            }
        else{
            if(front==-1){
               front=0;
            printf("Enter the element to insert \n");
            scanf("%d",&x);
            rear++;
            array[rear]=x;
            } 
            else{
            printf("Enter the element to insert \n");
            scanf("%d",&x);
            rear++;
            array[rear]=x;
            }
        }
        printf("The queue is \n");
       for(i=front;i<=rear;i++){
        printf("%d \t",array[i]);
       }
     break;
     case 2://delete
     if(front == -1 && rear == -1 ){
         printf("The queue is EMPTY \n");
     }
     else{
         printf("The element %d is deleted \n",array[front]);
         front++;
         if(front > rear){
             front = -1;
             rear = -1;
         }
     }
      printf("The queue is \n");
     for(i=front;i<=rear;i++){
        printf("%d \t",array[i]);
     }
      break;
     case 3:
      printf("Exit");
      break;
    }
    }while(op != 3);


    return 0;
}