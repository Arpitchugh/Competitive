#include<iostream>
using namespace std;

int main()
{
	int number[25],n,data,i,j,flag=0,low,high,mid,temp;
	cout<<"\n\tArpit Chugh\t1902017\n";
	cout<<"\n\tProgram to find a location of a given element using binary search!!\n";
	cout<<"\nEnter the number of elements: ";
	cin>>n;
	cout<<"\n";
	for(i=0;i<n;i++)
	{
		cout<<"Enter "<<i+1<<" element: ";
		cin>>number[i];
	}
	
	for(i=0;i<n;i++)
	{		
		for(j=i+1;j<n;j++)
		{
			if(number[i]>number[j])
			{
				temp  =number[i];
				number[i]=number[j];
				number[j]=temp;
			}
		}
	}
	
	cout<<"\nSorted Array is: \n";
	for(i=0;i<n;i++)
	{
		cout<<number[i]<<"\t";
	}
	cout<<"\n\nEnter the element to be searched: ";
 	cin>>data;
	low=0;
 	high=n-1;
	while(low <= high)
	{
		mid=(low+high)/2;
		if(number[mid]==data)
		{
			flag = 1;
			break;
 		}
		else
 		{
			if(data < number[mid])
				high=mid-1;
			else
				low=mid+1;
 		}
 	}
 	if(flag == 1)
 	cout<<"\nData found at location: "<<mid + 1;
	else
	cout<<"\nData Not Found ";
}
