#include<iostream>
#include<cstring>
using namespace std;
int main()
{
string str1 = "Hello,";
string str2 = "World!";
//Concatenating using + operating
string result = str1.append(str2);
cout << "Concatenated string: " << result <<endl;
return 0;
}



