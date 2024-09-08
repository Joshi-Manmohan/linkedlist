#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void linkedlistTraversal(struct Node *ptr)
{
   while(ptr!=NULL)
   {
    printf("element:%d\n",ptr->data);
    ptr = ptr->next;
   }
}
int main()
{
    struct Node*head;
    struct Node*second;
     struct Node*third;
      struct Node*fourth;
      //allocate memory for nodes in the linked list in heap
      head = (struct Node*)malloc(sizeof(struct Node));
       second = (struct Node*)malloc(sizeof(struct Node));
        third = (struct Node*)malloc(sizeof(struct Node));
         fourth = (struct Node*)malloc(sizeof(struct Node));

         head->data=7;
         head->next=second;

         second->data=11;
         second->next=third;

         third->data=24;
         third->next=fourth;

         fourth->data=66;
         fourth->next= NULL;


         linkedlistTraversal(head);
         return 0;
}
