//1.Write a program to demonstrate the I/O using read and write functions
//2.WAP to perform formatted I/O using manupilator and string operators.
//3.Write programs to demonstrate the operations of the functions 
//seekp(),seekg(),tellp(),tellg()

#include<fstream>
#include<iostream>
using namespace std;

int main()
{
	char name[100];
	ofstream fout;
	fout.open("myfile.txt");
	cout<<"Enter your name"<<endl;
	cin>>name;
	fout<<name<<endl;
	fout<<10;
	fout.close();
	return 0;
}
 
