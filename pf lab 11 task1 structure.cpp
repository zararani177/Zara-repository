//"	The Book structure includes members for the book's title, author, year of publication, and number of pages.
//"	The main function creates an array of 5 Book structures, inputs information for each book, and then displays the information for each book


#include <iostream>
using namespace std;

struct Book{
	char title[20];
	char author[20];
	int year;
	int pages;
};
int main(){
	Book b1[5];
for (int i=0; i<5; i++)	{
	cout<<"\nEnter the details for book"<<i+1<<":\n";
	
	cout<<"Enter the book title:";
	cin.ignore();  // Clear the input buffer
	cin.getline(b1[i].title,20);
	
	cout<<"Enter the book author:";
	cin.getline(b1[i].author,20);
	
	cout<<"Enter book publication year:";
	cin>>b1[i].year;
	
	cout<<"Enter the book pages:";
	cin>>b1[i].pages;
}
	
for (int i=0; i<5; i++)	{
	cout<<"\nBook information:\n";
	cout<<"Title:"<<b1[i].title<<endl;
	cout<<"Author:"<<b1[i].author<<endl;
	cout<<"Publication Year:"<<b1[i].year<<endl;
	cout<<"Pages:"<<b1[i].pages<<endl;
}
return 0;
}
