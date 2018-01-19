#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *START=NULL;
struct node* createNode()
{
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    return(n);
}

void insertNode()
{
    struct node * temp,*t;
    temp=createNode();
    printf("enter a info \n");
    scanf("%d",&temp->info);
    temp->link=NULL;
    if(START==NULL)
        START=temp;
    else
    {
        t=START;
        while(t->link!=NULL)
         t=t->link;
        t->link=temp;
    }
}

void deleteNode()
{
    struct node *r;
    if(START==NULL)
    printf("list is empty");
    else
    {
        r=START;
        START=START->link;	
    }
}

void viewList()
{
    struct node *t;
    if(START==NULL)
        printf("list is empty");
    else
    {
        t=START;
        while(t!=NULL)
        {

            printf("%d\n",t->info);
            t=t->link;
        }
    }
}
void delbydata()
{
    int t;
   struct node *del,*curr;
   del=NULL;
   curr=NULL;
   if(START==NULL)
{
  printf("list is empty");
}
else
{
printf("enter data\n");
scanf("%d",&t);


        
         
        if(t==START->info)

{
  START=START->link;   
}
else
{
         del=START;
         curr=START;
        
      

         


         
      while(del->info!=t)
       
{
           del=del->link;
       
         }
         while(curr->link!=del)
{
        curr=curr->link;
}
        curr->link=del->link;
   
        
          

}
}
}
void deletelastNode()
{
struct node *temp,*t;
if(START==NULL)
printf("list is empty\n");
else
temp=START;
while(temp->link!=NULL)
{
t=temp;
temp=temp->link;
}
free(t->link);
t->link=NULL;
}
void insertatLast()
{
struct node *new,*temp,*t;
int a;
if(START==NULL)
printf("list is empty/n");
else
{
new=(struct node *)malloc(sizeof(struct node));
printf("enter info of new node\n");
scanf("%d",&new->info);
temp=START;
while(temp->link!=NULL)
{
temp=temp->link;
t=temp;
}
t->link=new;
}
}

int menu()
{
    int ch;
    printf("\n1. Add value to the list");
    printf("\n2. Delete first value");
    printf("\n3. View List");
    printf("\n4. delbydata");
    printf("\n5. deletelastNode");
    printf("\n6. insertatLast");
    printf("\n7.exit");
    printf("\n\nEnter your choice\n");
    
    scanf("%d",&ch);
    return(ch);
}

int main()
{
    while(1)
    {
        switch(menu())
        {
            case 1:
                insertNode();
                break;
            case 2:
                deleteNode();
                break;
            case 3:
                viewList();
                break;
            case 4:
                 delbydata();
                 break;
            case 5:
                deletelastNode();
                 break;
            case 6:
                insertatLast();
                 break;
            case 7:
                exit(0);
            default:
            printf("invalid  choice");
        }
    }
    return 0;
}


