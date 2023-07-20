#include<stdio.h>
#include<stdlib.h>
void main()
{ 
struct node
{
 int data;
 struct node*next;
};
struct node *head,*newnode,*temp;
head=0;
int choice=1;
while(choice=1)
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter data\n");
scanf("%d",&newnode->data);
newnode->next=0;
if(head==0)
{
head=temp=newnode;
}
else
{
temp->next=newnode;
temp=newnode;
}
printf("do you want to continue(0,1)?");
scanf("%d",&choice);
if(choice==0)
break;
}
temp=head;
printf("linked list elements are:");
while(temp!=0)
{
printf("%d\n",temp->data);
temp=temp->next;
}
}
