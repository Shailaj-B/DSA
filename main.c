
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 5




//structures for data structures
typedef struct{
    int data[MAX_SIZE];
    int index;
}Array;

typedef struct{
    int data[MAX_SIZE];
    int front;
    int rear;
}Queue;


typedef struct{
    int data[MAX_SIZE];
    int top;
}Stack;


//functions for each data Structures
void array();
void queue();
void stack();


//functions for array
void insert(Array*);
void delete(Array*);
void display_index(Array*);
void display(Array*);
Array * create_array();
void reset(Array*);

//functions for queue
void enqueue();
void dequeue();

//functions for stack
void pop(Stack*);
void push(Stack*);
void display_stack(Stack*);






int main()
{
    int ch;
    int loop_is_on=1;
    while(loop_is_on)
    {
        printf("Implementation of Data Structures \n\n\n");
        printf("What do you want to create?\n1. Array\n2. Queue\n3. Stack\n->");
        scanf("%d",&ch);
        
        loop_is_on = 0;
        switch(ch)
        {
            case 1:
                array();
                break;
            
            case 2:
                //queue();
                break;
                
            case 3:
                stack();
                break;
                
            default:
                printf("No such choice\n\n");
                loop_is_on=1;
        }
    }    
    
    return 0;
}

//In Array functions

Array * create_array()
{
    int i,data_to_insert;
    Array *arr = (Array*) malloc (sizeof(Array));
    printf("\nInteger Array of size 5 is created \n");
    printf("Enter data to insert\n->");
    for (i = 0;i<MAX_SIZE;i++)
    {
        scanf("%d",&data_to_insert);
        arr->data[i] = data_to_insert;
    }
    return arr;
}


void insert(Array *arr)
{
    int ind,data_to_insert;
    printf("\n\nIn which index do you want to insert in? (0-4)\n->");
    scanf("%d",&ind);
    if (ind > 4 || ind < 0){
        printf("index should be between 0-4");
        return; 
    }
    printf("Enter data to insert\n->");
    scanf("%d",&data_to_insert);

    arr->data[ind] = data_to_insert;
    return;
}
    
void delete(Array *arr)
{
    int ind;

    printf("Choose an index to delete the data from\n->");
    scanf("%d",&ind);
    if (ind > 4 || ind < 0){
        printf("index should be between 0-4");
        return; 
    }
    arr->data[ind] = 0;
    printf("Data from %d is deleted\n",ind);
    return;
}

void display(Array *arr)
{
    int i;
    for(i=0;i<MAX_SIZE;i++)
    {
        printf("%d\t",arr->data[i]);
    }
    return;
}

void display_index(Array *arr)
{
    int ind;
    printf("Choose an index to display the data from\n->");
    scanf("%d",&ind);
    printf("\n%d",arr->data[ind]);
    return;
}

void reset(Array *arr)
{
    int i;
    for(i=0;i<MAX_SIZE;i++)
    {
        arr->data[i]=0;
    }
    printf("Array has been reset");
}

void array()
{
    Array *arr = create_array();
    int choice;
    int loop_is_on = 1;
    
    while(loop_is_on)
    {
        printf("\n\n\nWhat do you want to do?\n1.Insert\n2.Delete\n3.Display\n4.Display a value from index\n5.Reset array\n6.End\n->");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                insert(arr);
                break;
                
            case 2:
                delete(arr);
                break;
                
            case 3:
                display(arr);
                break;
                
            case 4:
                display_index(arr);
                break;
                
            case 5:
                reset(arr);
                break;

            case 6:
                loop_is_on = 0;
                break;

            default:
                printf("No such choice\n\n");
        }
    }
}

void queue()
{
    return;
}






void pop(Stack *stk)
{
    int popped_data;
    if (stk->top == 0)
    {
        printf("No data to pop\n");
        return;
    }
    stk->top--;
    popped_data = stk->data[stk->top];
    printf("%d has been popped\n",popped_data);
    return;
}

void push(Stack *stk)
{
    int data_to_push;
    if(stk->top == MAX_SIZE-1)
    {
        printf("\nStack is full\n");
        return;
    }
    printf("Enter a data to push\n->");
    scanf("%d",&data_to_push);
    stk->data[stk->top]=data_to_push;
    stk->top++;
}

void display_stack(Stack *stk)
{
    int i;
    for(i = 0; i < stk->top; i ++)
    {
        printf("%d\t",stk->data[i]);
    }
}

void stack()
{
    Stack *stk;
    stk->top=0;
    int choice;
    int loop_is_on = 1;
    while(loop_is_on)
    {
        printf("\nWhat do you want to do?\n1.Pop\n2.Push\n3.Display\n4.End\n->");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            pop(stk);
            break;

            case 2:
            push(stk);
            break;

            case 3:
            display_stack(stk);
            break;

            case 4:
            loop_is_on = 0;
            break;

            default:
            printf("No such choice\n");        
        }
    }

    return;
}