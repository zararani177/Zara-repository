#include<iostream>
using namespace std;
int main()
{
  int rows;
  cout<<"Enter the rows"<<endl;	
  cin>>rows;
for(int i=0; i<=rows; i++) 
{
for(int j=0; j<=rows-i; j++)	
{
  cout<<"*";
}
cout<<"\n";	
} 
return 0;  
}
