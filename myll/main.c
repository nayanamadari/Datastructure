#include<stdio.h>
#include<stdlib.h>
 int ch;
struct node
{    int data;
    struct node *next;
}*head,*tail,*temp,*new_node;
int main()
{
    int choice=0;
    while(choice<12)
    {
        system("cls");
        printf("\n--SINGLY LINKED LIST OPERATIONS--\n");
        printf("\n 1-> Insert node/s");
        printf("\n 2-> Delete node");
        printf("\n 3-> Display");

        printf("\n\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice)  //switch case statements.
        {
            case 1: insert_at_front();break;
            case 2: del_from_front();break;
            case 3: display();break;
            default: printf("\nProgram ended\n\nThankyou MSIS, MAHE, MAIPAL!"); //program ends
        }
    }
    return 0;
}
void del_from_front()
{
    temp=head;
    if(temp==NULL)
    {
        printf("\nThe List is empty!");
        printf("\nPress 'y' to continue : ");
        scanf(" %c",&ch);
        return ;
    }
    if(head==tail)
    {
        printf("\nThe element deleted is : %d",temp->data);
        free(temp);
        head=NULL;
        tail=NULL;
        printf("\nElement deleted successfully!\n");
        printf("\nPress 'y' to continue : ");
        scanf(" %c",&ch);
        return ;
    }
    head=head->next;
    printf("\nThe element deleted is : %d",temp->data);
    temp->next=NULL;
    free(temp);
    printf("\nElement deleted successfully!\n");
    printf("\nPress 'y' to continue : ");
    scanf(" %c",&ch);
}
void display()
{
    temp=head;
    if(temp==NULL)
    {
        printf("\nThe List is empty");
        printf("\nPress 'y' to continue : ");
        scanf(" %c",&ch);
        return ;
    }
    printf("\nThe Linked List is : \n");
    while(temp!=NULL)
    {
        if(temp->next!=NULL)
        {
            printf(" %d ->",temp->data);
        }
        else
        {
            printf(" %d -> NULL.",temp->data);
        }
        temp=temp->next;
    }
    printf("\nPress 'y' to continue : ");
    scanf(" %c",&ch);
}
void insert_at_front()
{
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data : ");
    scanf("%d",&new_node->data);
    new_node->next=NULL;
    if(head==NULL)
    {
        head=new_node;
        tail=new_node;
    }
    else
    {
        new_node->next=head;
        head=new_node;
    }
    printf("\nElement inserted successfully!");
    printf("\nPress 'y' to continue : ");
    scanf(" %c",&ch);
}
