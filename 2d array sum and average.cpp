#include<iostream>
using namespace std;
int main()
{
int rows, columns;	
cout<<"Enter the number of rows";
cin>>rows;	
cout<<"Enter the number of columns";
cin>>columns;
int array[rows][columns];
for (int i=0; i<rows; i++){
for (int j=0; j<columns; j++){
	cout<<"Element["<<i<<"]["<<j<<"]:";
	cin>>array[rows][columns];
}
}
int sum=0;
int average=0;
cout<<"\n the 2d array is";	
for (int i=0; i<rows; i++){
for (int j=0; j<columns; j++){
	sum=sum+array[rows][columns];
	cout<<sum;
	average=sum/array[rows][columns];
	cout<<average;
}
cout<<endl;	
}	
return 0;	
}
