#include <iostream>
#include <string> // strings in c++
using namespace std;// to skip prefix std:: - C++ style string

int main()
{
string name = "text";//c style
int number = 15; 
int table[3] ={1,2,3};  

string *pname = &name;
int *pnumber = &number;
int *ptable = table; //table name is already pointer to first element 

cout <<"name: "<< name << "\n";
cout <<"&name: "<< &name << "\n";
cout <<"pname: "<< pname << "\n";
cout <<"*pname: "<< *pname << "\n";
cout <<"&pname: "<< &pname << "\n\n";

cout <<"number: "<< number << "\n";
cout <<"&number: "<< &number << "\n";
cout <<"pnumber: "<< pnumber << "\n";
cout <<"*pnumber: "<< *pnumber << "\n";
cout <<"&pnumber: "<< &pnumber << "\n\n";

cout <<"table: "<< table << "\n";
cout <<"&table: "<< &table << "\n";
cout <<"ptable: "<< ptable << "\n";
cout <<"ptable[2]: "<< ptable[2] << "\n";//access to 3 value in table
cout <<"*ptable: "<< *ptable << "\n";
cout <<"*(ptable + 1): "<< *(ptable + 1) << "\n";
cout <<"&ptable: "<< &ptable << "\n\n";

//changing value of the pointer 
*pnumber = 20;
cout <<"number: "<< number << "\n";
cout <<"&number: "<< &number << "\n";
cout <<"pnumber: "<< pnumber << "\n";
cout <<"*pnumber: "<< *pnumber << "\n";
cout <<"&pnumber: "<< &pnumber << "\n\n";
}