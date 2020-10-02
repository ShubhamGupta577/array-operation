#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ar[n],temp;
	cout<<"Enter the elemnets: ";
	for(int i=0;i<n;i++)
		cin>>ar[i];
	bool swap=false;
	for(int i=1;i<n;i++)
	{
		swap=false;
		for(int j=0;j<n-i;j++)
			if(ar[j]>ar[j+1])
			{
				temp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=temp;
				swap=true;
			}
		if(!swap)
			break;
	}
	for(int i=0;i<n;i++)
	cout<<ar[i]<<" ";
}
