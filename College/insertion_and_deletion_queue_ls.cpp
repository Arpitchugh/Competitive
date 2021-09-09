#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
	int info;
	struct node *ptr;
}*front,*rear,*temp,*front1;

void insert(int data);
void Delete();
void display();

int main()
{
	int choice, no;
	cout<<"\n\tArpit Chugh\t1902017\n";
	cout<<"\n\tProgram to implement insertion and deletion operations in a queue using linked list!!\n";
	cout<<"\n\tQueue Implementation using Linked List";
	cout<<"\n\t****** MENU ******\n";
	cout<<"\n\t1. Insert\n\t2. Delete\n\t3. Display\n\t4. Exit\n";
	while(1)
	{
		cout<<"\nEnter your choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"Enter the value to be insert: ";
				cin>>no;
				insert(no);
				break;
			case 2:
				Delete();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				cout<<"\nWrong selection!!! Please try again!!!\n";
		}
	}
	return 0;
}

void insert(int data)
{
	if (rear == NULL)
	{
		rear = (struct node *)malloc(1*sizeof(struct node));
		rear->ptr = NULL;
		rear->info = data;
		front = rear;
	}
	else
	{
		temp=(struct node *)malloc(1*sizeof(struct node));
		rear->ptr = temp;
		temp->info = data;
		temp->ptr = NULL;
		rear = temp;
	}
	cout<<"Insertion is Success!!!\n";
}

void Delete()
{
	front1 = front;
	if (front1 == NULL)
	{
		cout<<"Error: Trying to display elements from empty queue\n";
		return;
	}
	else
	{
		cout<<"Dequed value :"<<front->info<<"\n";
		free(front);
		front = NULL;
		rear = NULL;
	}
}

void display()
{
	cout<<"Elements in Queue are: ";
	front1 = front;
	if ((front1 == NULL) && (rear == NULL))
	{
		cout<<"Queue is empty\n";
		return;
	}
	while (front1 != rear)
	{
		cout<<front1->info<<"\t";
		front1 = front1->ptr;
	}
	if (front1 == rear)
	{
		cout<<front1->info<<"\t";
	}
	cout<<"\n";
}
