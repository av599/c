#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node* next;
struct node* prev;
};

struct node* start=NULL;
struct node* last=NULL;
void insert_node()
{
struct node* new, *t;
new=(struct node*)malloc(sizeof(struct node));
if(start == NULL)
{
printf("enter data\n");
scanf("%d",&new->info);
start=new;
start->next=start;
last=start;

}
else
{
printf("enter data\n");
scanf("%d",&new->info);
new->next=start;
start=new;
last->next=start;
}
}
void display()
{
struct node* t;
if(start==NULL)
printf("list is empty\n");
else
{
t=start;
do
{
printf("%d\n",t->info);
t=t->next;
}
while(t!=last->next);
printf("%d\n",last->info);
}
}

int main()
{
int choice;
do
{
printf("\nenter choice \n 1.insert_node() \n 2.display() \n 3.exit(0) \n");
scanf("%d",&choice);
switch(choice)
{
case 1: insert_node();
break;
case 2: display();
break;
case 3: exit(0);
break;
}}
while(choice!=4);
return 0;
}

