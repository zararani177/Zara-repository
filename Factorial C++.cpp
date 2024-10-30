#include<iostream>
using namespace std;
int main()
{
  // 5! 5*4*3*2*1	
  int n;	
  long factorial = 1.0;	
  cout<<"Enter a positive integer"<<endl;	
  cin>>n;	
if(n<0)	
  cout<<"Error! Factorial of a negative number doesnot exist"<<endl;
else{
   int i=1;	
do{
   factorial *= i;
   i++;
}
while(i<=n);
cout<<"factorial of " <<n<< "=" <<factorial<<endl;
}
return 0;
}
