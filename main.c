
#include <stdio.h>

//functions for each data Structures
void array();
void queue();
void stack();


//functions for array
void insert();
void delete();
void display_index();


//functions for queue
void enqueue();
void dequeue();

//functions for stack
void pop();
void push();

//general functions
void display();



//structures for data structures
typedef struct{
    int ar[5];
    int index;
}Array;


typedef struct{
    int data[5];
    int front;
    int rear;
}Queue;


typedef struct{
    int data[5];
    int top;
}Stack;


int main()
{
    int ch;
    int ch1=1;
    while(ch1)
    {
        printf("Implementation of Data Structures \n\n\n");
        printf("What do you want to create?\n1. Array\n2. Queue\n3. Stack\n");
        scanf("%d",&ch);
        
        ch1 = 0;
        switch(ch)
        {
            case 1:
                array();
                break;
            
            case 2:
                //queue();
                break;
                
            case 3:
                //stack();
                break;
                
            default:
                printf("No such choice\n\n");
                ch1=1;
        }
    }    
    
    return 0;
}

//In Array functions

void insert(Array *arr)
{
    int num;
    printf("\n\nIn which index do you want to insert in? (0-4)\n");
    scanf("%d",&num);
    return;
}
    
void delete()
{
    return;
}

void display()
{
    return;
}

void display_index()
{
    return;
}




void array()
{
    int choice;
    Array *arr; 
    //arr = (Array*) malloc (sizeof(Array));
    printf("\n\n\nWhat do you want to do?\n1.Insert\n2.Delete\n3.Display\n4.Display a value from index\n5.End\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            insert(arr);
            break;
            
        case 2:
            delete();
            break;
            
        case 3:
            display();
            break;
            
        case 4:
            display_index();
            break;
            
        default:
            printf("Wrong input\n\n");

    }
}

void queue()
{
    return;
}

void stack()
{
    return;
}