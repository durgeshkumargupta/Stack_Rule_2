#include<stdio.h>  /*Header file */
#include<conio.h>  /*Header file */
#define max 5
int top=-1;       /* Global varible */
int stack[max];   /* Global varible */
void push(int stack[],int data)  /*  Stack_Push_data  */
{
     if(top==(max-1))
     {
       printf("Stack is full");
       sleep(2);
     }
     else
     {
       top++;
       stack[top]=data;
     }
}
/* Stack_POP_Data  */
void pop(int stack[])
{
    int num;
    if(top==-1)
    printf("Stack is Empty");
    else
    {
      num=stack[top];
      top--;
    printf("popped data=%d",num);
    }
sleep(2);
}
/* Display_Stack_Data  */
void display(int stack[])
{
     int i;
     if(top==-1)
     printf("Stack is empty");
     else
     {
       for(i=top;i>=0;i--)
       printf("%3d",stack[i]);
     }
     sleep(2);
}
void main()  /* Main_Function  */
{
	int ch,data;
	while(1)
	{
	   clrscr();
	   printf("1.push\n");
	   printf("2.pop\n");
	   printf("3.Display\n");
	   printf("4.Exit\n");
	   printf("Enter your choice=");
	   scanf("%d",&ch);
	   switch(ch)
	   {
	     case 1:
	     printf("Enter data=");
	     scanf("%d",&data);
	     push(stack,data);break;
	     case 2:
	     pop(stack);break;
	     case 3:
	       display(stack);break;
	     case 4:
	       exit(0);break;
	   }
	}
}
