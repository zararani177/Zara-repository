#include<iostream>
using namespace std;
int main()
{
int arr[5]={2,3,5,6,7};	
cout<<"Elements of the array are";
int substract=0;
int sum=0;	
for (int i=0; i<5; i++)	
{
   cout<<arr[i];
   substract=sum-arr[i];
}	
  cout<<endl;
  cout<<substract;	
return 0;	
}
