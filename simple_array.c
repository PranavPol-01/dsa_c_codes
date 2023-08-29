#include <stdio.h>

int main (){
    int op;
    int n,i,p,new,del,flag=0;
  int array[n];
  do{
  printf("\n The options are \n ");
  printf("1.Enter the array \n");
  printf("2.Add element into array \n");
  printf("3.Delete element from array \n");
  printf("4.Display array \n");
  printf("5.Exit \n");
  
  printf("Enter the operation number \n");
  scanf("%d",&op);
  
  
  switch(op){
  case 1: //Enter array 
  printf("Enter no of array elements ");
  scanf("%d",&n);
  printf ("Enter the array elements \n");
  for ( i = 0; i < n; i++){
      scanf("%d", &array[i]);
    }
    break;
 case 2:
 
     printf("Enter the position of new element \n ");
     scanf("%d",&p);
     printf("Enter the new element \n");
     scanf("%d",&new);
     for( i=n-1;i >=p;i--){
         array[i+1] = array[i];
         
     }
     array[p] =new;
     n++;
     break;
 
 case 3:
 
    printf("Enter the element to Delete \n");
    scanf("%d",&del);
    for(i=0;i < n ;i++){
        if (array[i] == del){
            flag++;
            p = i;
            break ;
        }
    }
    if(flag >0){
        for(i=p ; i < n-1;i++){
            array[i] = array[i+1];
        }
        n--;
    }
    
    break; 
 
 
    case 4://Display array 
    
    printf ("The array is \n");
  for ( i = 0; i < n; i++){
      printf ("%d \t", i);
    }
  printf ("\n");
  for ( i = 0; i < n; i++){
      printf ("%d \t", array[i]);
    }
    
    break;
    
    case 5: 
    printf("Exit \n");
    break;
    
  }    
}while(op !=5);
  return 0;
}