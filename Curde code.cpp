#include<iostream>
using namespace std;
int i=0;
void add (int a[])
{   
    cout<<"Enter the number that you  want to added:"<<endl;
    cin>>a[i];
    i++;
    cout<<"Added successfully"<<endl;
}
void exit (int a[])
{
	
}
void search (int a[])
{
	int n;
	cout<<"Enter the number that you  want to search"<<endl;
	cin>>n;
for(int j=0; j<i; j++)
{
	if(n==a[j])
	{
		cout<<"Your search value is ="<<a[j]<<endl;
	}
}
}
void update (int a[])
{
	int n;
    cout<<"Enter the number you want to update"<<endl;	
	cin>>n;
for (int j=0; j<i; j++)
{
	if(n==a[j])
	{
		cout<<"Your new value is"<<a[j]<<endl;
	}
}
}
void del(int a[])
{ 
    int n;
    cout<<"Enter the number that you want to delete"<<endl;
    cin>>n;
 for(int j=0; j<i; j++) 
{
    if(n==a[j])	
	{
		for(int k=j; k<i; k++)
		{
			a[k]=a[k+1];
		}
}i--;
break;}  
}
void show(int a[])
{ 
    
 for(int j=0; j<i; j++) 
{
    cout<<"\n"<<a[j];
}
}
int main()
{
    //First we create value using switch statement
	cout<<"Press 1 for add"	<<endl;
	cout<<"Press 2 for search"<<endl;
	cout<<"Press 3 for delete"<<endl;
	cout<<"Press 4 for update"<<endl;
	cout<<"Press 5 for show"<<endl;
	cout<<"Press 6 for exit"<<endl;
	
p:	
int choice;	
    cout<<"Enter your choice"<<endl;
    cin>>choice;
int a[20];

switch (choice)
{
case 1:	
add(a);
break;	
case 2:	
search(a);
break;	
case 3:	
del(a);
break;	
case 4:	
update(a);
break;	
case 5:	
show(a);
break;
case 6:
exit(0);
break;
default:
cout<<"Invalid value......try again"<<endl;	
}
goto p;
}

































