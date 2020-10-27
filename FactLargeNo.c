#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
}node;
int main()
{
	struct node * head,*p,*Q;
	int n;
	printf("Eneter the size of linklist:\n");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	head=(struct node*) malloc(sizeof(struct node));
	scanf("%d",& head->data);
		p=head;
		for(int i=1;i<n;i++)
		{
			p->next=(struct node*)malloc(sizeof(struct node));
			p=p->next;
			scanf("%d",&p->data);
			}
			p->next=NULL;
			printf("\nAfter deleting the first node:\n");	
			p=head;
			head=p->next;
			Q=head;
			while(Q!=NULL)
			{
				printf("%d ",Q->data);
				Q=Q->next;
			}
			free(p);
			Q=head;
			while(Q->next->next!=NULL)
			{
				Q=Q->next;
				}
				Q->next=NULL;
				Q=head;
				printf("\nAfter deleting the last node: \n");
				while(Q!=NULL)
				{
					printf("%d ",Q->data);
					Q=Q->next;
				}
				Q->next=NULL;
}
