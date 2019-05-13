#include <iostream>
#include <conio.h>
using namespace std;


int main()
{
	int length;
	char arr[300],x,y,temp;
	
	cout <<"Enter the length of the array: ";
	cin>>length;
	cout<<"Enter all the elements of the array: ";
	for (x=0; x<length; x++)
	{
		cin>>arr[x];
	}

for(x=0; x<length; x++)
{
for (y=x+1;x<length;x++)
{
for(y=x+1;y<length;y++)
{
if (arr[x]>arr[y])
    {
    	temp=arr[x];
		arr[x]=arr[y];
		arr[y]=temp;
	}
}
}
}

cout<<"\nThe output of the given array is: ";
for (x=0;x<length;x++){

	cout<<arr[x];

}
  cout<<"\nThe length of the given array is: "<<length;
	
getch();
return 0;
}
