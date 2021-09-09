#include<iostream>
using namespace std;

int main()
{
	int i,j,temp,n,k,arr[100];
	cout<<"\n\tArpit Chugh\t1902017\n";
	cout<<"\n\tProgram to find the location of a given element using linear search!!\n";
	cout<<"\nEnter Number of Elements: ";
	cin>>n;
	cout<<"\n";
	for(i=0;i<n;i++)
	{
		cout<<"Enter "<<i+1<<" element: ";
		cin>>arr[i];
	}
	cout<<"\nEnter Element to Search: ";
	cin>>temp;
	k=0;
	for(i=0;i<n;i++)
	{
		if(temp==arr[i])
		{
			k+=1;
			cout<<"\nLocation of Element "<<temp<<" in Array is at "<<i+1;
		}
	}
	if(k==0)
	{
		cout<<"\nElement Not Found!!!";
	}
}
