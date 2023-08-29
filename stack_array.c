#include <stdio.h>

int main() {
    printf("Progarm by Pranav \n rollno.=37");
    
    int op,i,x;
    int array[10];
    int max=4;
    int top;

    do{
        printf("\n The options are \n ");
        printf("1.push \n");
        printf("2.pop \n ");
        printf("3.Exit \n ");
        printf("Enter the operation of to perform \n");
        scanf("%d",&op);

    switch(op){
        case 1: //push
        if( top == max-1){
            printf("The stack is full \n");
            }
        else{
            printf("Enter the element to push \n");
            scanf("%d",&x);
            top++;
            array[top]=x;

        }
       for(i=top;i>=0;i--){
        printf("%d \n",array[i]);
       }
     break;
     case 2://pop
     if(top == -1){
         printf("Stack OVERFLOW");
     }
     else{
         printf("The element %d is poped \n",array[top]);
         top--;
     }
     for(i=top;i>=0;i--){
        printf("%d \n",array[i]);
     }
      break;
     case 3:
      printf("Exit");
      break;
    }
    }while(op != 3);


    return 0;
}