#include<stdio.h>
#include<conio.h>
struct node{
int data;
struct node *next;
};
typedef struct node ll;
void main()
{
int ch,count;
ll *root,*p,*newnode;
root=NULL;
clrscr();
while(ch<4)
{
printf("press 1 create link list:\n");
printf("press 2 display link list:\n");
printf("press 3 for count:\n");
printf("enter choice:");
scanf("%d",&ch);

switch (ch)
{
case 1:
newnode=(ll*)malloc(sizeof (ll));
printf("enter data for new node:");
scanf("%d",&newnode->data);
newnode->next=NULL;
if(root==NULL)
{
root=newnode;
}
else
{
p=root;
if(newnode->data<root->data)
{
newnode->next=root;
root=newnode;
}
else if(newnode->data>=root->data)
{
while(p->next!=NULL&&(p->data>=newnode->data&&p->next->data<newnode->data))
{
p=p->next;
}
newnode->next = p->next;
p->next=newnode;
}
}
break;
case 2:
p=root;
while(p!=NULL)
{
printf("%u->%d\n",p,p->data);
p=p->next;
}
break;

case 3:
count=0;
p=root;
while(p!=NULL)
{
count=count+1;
p=p->next;

}
printf("%d\n",count);
break;
default:
printf("thnk you:");
}} }





