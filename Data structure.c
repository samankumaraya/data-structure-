#include <stdio.h>
#include <stdlib.h>

int size,choice,ele;

struct stack{

  int array[100];
  int top;

}st;

//inserting elements

void push(int ele){
  if(st.top==(size-1))
  {
      printf("stack is full");
  }
  else
  {
    st.top++;
    printf("Enter a value");
    scanf("%d",&ele);
    st.array[st.top]=ele;
  }
}

int pop(){
  if(st.top== (-1))
  {
      printf("stack is empty");
  }
  else
  {
   int out;
   out=st.array[st.top];
   st.top--;
   return out;
  }
}

int peek(){
  int display;
  display=st.array[st.top];
  return display;
}


void display()
{
    if(st.top >=0 )
    {
        printf("\n\n Elements in the stack");
        for(int i=st.top;i>=0;i--)
        {
            printf("\n%d",st.array[i]);
        }
    }
    else
    {
        printf("no elements to display");
    }


}

int main()
{
    st.top=-1;

    printf("Enter a stack size less than 100");
    scanf("%d",&size);

    printf("\nStack operation.....");
    printf("\n\t 1,push\n\t 2.pop \n\t 3.peer \n\t 4.display \n\t 5.Exit");

    do{
        printf("\n Enter your choice  ");
        scanf("%d",&choice);
        switch(choice){

          case 1:{
            push(ele);
            break;
          }
          case 2:{
            printf("%d",pop());
            break;
          }
          case 3:{
            printf("%d",peek());
            break;
          }
          case 4:{
            display();
          }
          case 5:{
            printf("\n\t EXIT point");
          }
          default:
            printf("Enter a correct choice :");
        }
        }while(choice!=5);
    return 0;
    }



