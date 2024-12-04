#include<iostream>
#include<cstring>
using namespace std;
int main()
{
char source[] = "Hello, World!";	
char destination[50];	
	
strcpy(destination, source);	
cout << "Source string: " << source << endl;	
cout << "Destination string: " << destination << endl;	
	
return 0;	
}













