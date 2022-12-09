#include<stdio.h>
#include<conio.h>
struct node{
int n;
struct node *next;
};
typedef struct node ll;
void main()
{
int ch;
ll *root,*p,*newnode;
root=NULL;
clrscr();
while(ch<5)
{
printf("press 1 for creat link list:\n");
printf("press 2 for add node in begnning:\n");
printf("press 3 for add node in end:\n");
printf("press 4 for display link list:\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
newnode=(ll*)malloc(sizeof(ll));
printf("enter number:");
scanf("%d",&newnode->n);
newnode->next=NULL;

if(root!=NULL)
{
root=newnode;
}
else
{
newnode->next=root;
root=newnode;
}
break;


case 2:
{
newnode=(ll*)malloc(sizeof(ll));
printf("enter number:");
scanf("%d",&newnode->n);
newnode->next=root;
root=newnode;
}
break;

case 3:
{
newnode=(ll*)malloc(sizeof(ll));
printf("enter number:");
scanf("%d",&newnode->n);
newnode->next=NULL;
p=root;
while(p->next!=NULL)
{
p=p->next;
}
p->next=newnode;
}
break;

case 4:
{
p=root;
while(p!=NULL)
{
printf("link list:%d\n",p->n);
p=p->next;
}
}
break;

default:
getch();
return 0;
}
}
}
