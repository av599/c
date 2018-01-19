#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node* next;
struct node* prev;
};

struct node* tail=NULL;
void insert_node()
{
struct node* new, *t;
new=(struct node*)malloc(sizeof(struct node));
if(tail == NULL)
{
printf("enter data\n");
scanf("%d",&new->info);
tail=new;
tail->next=tail;

}
else
{
printf("enter data\n");
scanf("%d",&new->info);
new->next=tail->next;
tail->next=new;
tail=new;
}
}
void display()
{
struct node* t;
if(tail==NULL)
printf("list is empty\n");
else
{
t=tail->next;
do
{

printf("%d\n",t->info);
t=t->next;
}
while(t!=tail->next);

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


