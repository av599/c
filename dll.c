#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *next;
struct node *prev;
};
struct node* START=NULL;
struct node* tail;
void insert_node()
{
struct node *new;
new=(struct node*)malloc(sizeof(struct node));
printf("enter info\n");
scanf("%d",&new->info);
new->prev=NULL;
new->next=NULL;
if(START==NULL)
START=new;
else
{
START->prev=new;
new->next=START;
START=new;
}
}
void display_LR()
{
struct node *t;
if(START==NULL)
printf("list is empty\n");
else
{
t=START;
while(t!=NULL)
{
printf("%d\n",t->info);
t=t->next;
}
}
}
void display_RL()
{
struct node *t,*l;
if(START==NULL)
printf("list is empty");
else
{
t=START;
while(t->next!=NULL)
t=t->next;
l=t;
while(l!=NULL)
{
printf("%d\n",l->info);
l=l->prev;
}
}
}
int main()
{
int choice;
do
{
printf("\nenter choice \n 1.insert_node() \n 2.display_LR() \n 3.display_RL() \n");
scanf("%d",&choice);
switch(choice)
{
case 1: insert_node();
break;
case 2: display_LR();
break;
case 3: display_RL();
break;
}}
while(choice!=4);
return 0;
}


