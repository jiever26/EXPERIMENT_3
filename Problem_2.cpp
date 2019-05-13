
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int x,y,j,sum;
	int arr1[y];
	int arr2[y];
	int arr3[y];
	int arr4[x];
	int day,a,b,c,d;
	int num[b];
 
	cout<<"Enter all temperature for a week of Province A, Province B and then Province C. \n";
	
   y=1;  
   for(y=0;y<7;y++)
   {
    cout << "Province A, Day " <<y+1<<": ";
    cin >> arr4[x];
    x++;
   }
   
   y=1;
   for(y=0;y<7;y++)
   {
    cout << "Province B, Day "<<y+1<<": ";
    cin >> arr4[x];
    x++;
   }
   
   y=1;
   for(y=0;y<7;y++)
   {
    cout << "Province C, Day " <<y+1<<": ";
    cin >> arr4[x];
    x++;
   }
   
   cout<<"\nDisplaying Values: "<<endl;
   cout<<"Province A, Day1= "<<arr4[0]<<endl;
   cout<<"Province A, Day2= "<<arr4[1]<<endl;
   cout<<"Province A, Day3= "<<arr4[2]<<endl;
   cout<<"Province A, Day4= "<<arr4[3]<<endl;
   cout<<"Province A, Day5= "<<arr4[4]<<endl;
   cout<<"Province A, Day6= "<<arr4[5]<<endl;
   cout<<"Province A, Day7= "<<arr4[6]<<endl;
   cout<<"Province B, Day1= "<<arr4[7]<<endl;
   cout<<"Province B, Day2= "<<arr4[8]<<endl;
   cout<<"Province B, Day3= "<<arr4[9]<<endl;
   cout<<"Province B, Day4= "<<arr4[10]<<endl;
   cout<<"Province B, Day5= "<<arr4[11]<<endl;
   cout<<"Province B, Day6= "<<arr4[12]<<endl;
   cout<<"Province B, Day7= "<<arr4[13]<<endl;
   cout<<"Province C, Day1= "<<arr4[14]<<endl;
   cout<<"Province C, Day2= "<<arr4[15]<<endl;
   cout<<"Province C, Day3= "<<arr4[16]<<endl;
   cout<<"Province C, Day4= "<<arr4[17]<<endl;
   cout<<"Province C, Day5= "<<arr4[18]<<endl;
   cout<<"Province C, Day6= "<<arr4[19]<<endl;
   cout<<"Province C, Day7= "<<arr4[20]<<endl;

getch();
return 0;
}
