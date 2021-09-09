#include<iostream>
using namespace std;

int main()
{
	int array[100], search, position, n,d,ch,c;
	cout<<"\n\tArpit Chugh\t1902017\n";
	cout<<"\n\tProgram to delete an element from a given array whose value is given or whose position is given!!\n";
	cout<<"Enter number of elements in array: ";
	cin>>n;
	cout<<"\n";
	for(d=0;d<n;d++)
	{
		cout<<"Enter "<<d+1<<" element: ";
		cin>>array[d];
	}
	cout<<"\nEnter 1  number to delete and 2 to delete from specified position: ";
	cin>>ch;
	
	if(ch==1)
	{
		cout<<"\nEnter number to delete : ";
		cin>>search;
		for(d=0;d<n;d++)
		{
			if(array[d]==search)
			{
				position=d+1;
				if (position >= n+1)
					cout<<"\nDeletion not possible.\n";
				else
				{
					for(d=position-1;d<n-1;d++)
					array[d]=array[d+1];
					cout<<"\nResultant array: ";
					for(d=0;d<n-1;d++)
					{
						cout<<array[d]<<"\t";
					}
				}
			}
		}
	}
	else if(ch==2)
	{
		cout<<"\nEnter the location where you wish to delete element: ";
		cin>>position;
		if(position>=n+1)
			cout<<"\nDeletion not possible.\n";
		else
		{
			for(c=position-1;c<n-1;c++)
			array[c]=array[c+1];
			cout<<"\nResultant array: ";
			for(c=0;c<n-1;c++)
			cout<<array[c]<<"\t";
		}
	}
	else
	{
		cout<<"\nEnter a valid response!!";
	}
}
