#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	//Create file
ofstream File ("NewFile.txt");	
	
File<<"I Love Programming";	
	
File.close();	

string Text;	
//Reading data from the file	
ifstream ReadFile ("NewFile.txt");	
	
while (getline(ReadFile,Text)){
	cout<<Text;
}	
ReadFile.close();	
	
}








