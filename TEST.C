#include<stdio.h>
#include<conio.h>
#define SIZE 50

void insert();
void delete();
void display();

int queue[SIZE];
int front = -1;
int rear = -1;

void main()
{
int value, choice;
clrscr();
while(1)
{
printf("\n\n***** MENU*****\n");
printf("1. Insertion\n2. Deletion\n3. Display\n4. Exit");
printf("\nEnter your choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Enter the value to be insert: ");
scanf("%d",&value);
insert(value);
break;
case 2:
delete();
break;
case 3:
display();
break;
case 4:
exit(0);
default:
printf("\nWrong selection!!! Try again!!!");
}
}
}
void insert(int value)
{
if(rear == SIZE-1)
printf("\nQueue is Full!!! Insertion is not possible!!!");
else
{
if(front == -1)
front = 0;
rear++;
queue[SIZE] = value;
printf("\nInsertion success!!!");
}
}
void delete()
{
if(front == rear)
printf("\nQueue is Empty!!! Deletion is not possible!!!");
else
{
printf("\nDeleted : %d", queue[front]);
front++;
if(front == rear)
front = rear = -1;
}
}
void display()
{
if(rear == -1)
printf("\nQueue is Empty!!!");
else
{
int i;
printf("\nQueue elements are:\n");
for(i=front; i<=rear; i++)
printf("%d\t",queue[i]);
}
}