#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;


int main()
{
	int Arr[10],L_int,S_int,SUM=0,i,x;
	float AVE;
	x=10;

	for(i=0;i<x;i++)
	{
	 cout<<"Input digit #"<<i+1<<": ";
	 cin>>Arr[i];
	}
	S_int=Arr[0];
	L_int=Arr[0];
	
	for(i=1;i<x;i++)
	{
	 if(Arr[i]<S_int)
		L_int=Arr[i];
	 if(Arr[i]>L_int)
		L_int=Arr[i];
	}
	for(i=0;i<x;i++)
	{
	 SUM += Arr[i];
	}
	 AVE = (float)SUM /x;

	cout<<"\nThe largest entered integer is: "<<L_int;
	cout<<"\nThe smallest entered integer is: "<<S_int;
    cout << "\nThe Sum is: " <<SUM<<endl;
    cout << "The Average is: " <<AVE;

    getch();
	return 0;
}
