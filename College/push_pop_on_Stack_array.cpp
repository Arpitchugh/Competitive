#include<iostream>
using namespace std;

int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
int main()
{
	cout<<"\n\tArpit Chugh\t1902017\n";
	cout<<"\n\tProgram to implement push and pop operations on a stack using linear array!!\n";
	top=-1;
	cout<<"\nEnter the size of STACK[MAX=100]: ";
	cin>>n;
	cout<<"\n\tSTACK OPERATIONS USING ARRAY";
	cout<<"\n\t--------------------------------";
	cout<<"\n\t1.PUSH\n\t2.POP\n\t3.DISPLAY\n\t4.EXIT";
	cout<<"\n";
	do
	{
		cout<<"\nEnter the Choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1:
			{
				push();
				break;
			}
			case 2:
			{
				pop();
				break;
			}
			case 3:
			{
				display();
				break;
			}
			case 4:
			{
				cout<<"\n\tEXIT POINT ";
				break;
			}
			default:
			{
				cout<<"\n\tPlease Enter a Valid Choice(1/2/3/4)";
			}
		}
	}
	while(choice!=4);
	return 0;
}
void push()
{
	if(top>=n-1)
	{
		cout<<"\n\tSTACK is over flow\n";
	}
	else
	{
		cout<<"\nEnter a value to be pushed:";
		cin>>x;
		top++;
		stack[top]=x;
	}
}

void pop()
	{
		if(top<=-1)
		{
			cout<<"\n\tStack is under flow\n";
		}
		else
		{
			cout<<"\nThe popped elements is: "<<stack[top]<<"\n";
			top--;
		}
	}

void display()
	{
		if(top>=0)
		{
			cout<<"\nThe elements in STACK: "<<"\n";
			for(i=top;i>=0;i--)
			cout<<stack[i]<<"\t";
		}
		else
		{
			cout<<"\n\tThe STACK is empty\n";
		}
	}
