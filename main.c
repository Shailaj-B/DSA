
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
void display_index();
void display(Array*);
Array * create_array();

//functions for queue
void enqueue();
void dequeue();

//functions for stack
void pop();
void push();






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
                //stack();
                break;
                
            default:
                printf("No such choice\n\n");
                loop_is_on=1;
        }
    }    
    
    return 0;
}

//In Array functions

Array * create_array(){
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

void display_index()
{
    return;
}



void array()
{
    Array *arr = create_array();
    int choice;
    int loop_is_on = 1;
    
    while(loop_is_on)
    {
        printf("\n\n\nWhat do you want to do?\n1.Insert\n2.Delete\n3.Display\n4.Display a value from index\n5.End\n->");
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
                display_index();
                break;
                

            case 5:
                loop_is_on = 0;
                break;
            default:
                printf("Wrong input\n\n");
        }
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