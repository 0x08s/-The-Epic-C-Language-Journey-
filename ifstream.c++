#include<iostream>
using namespace std;

#include<fstream>

int main(){

string Searchname;

cout<<"Enter your Searchname = ";
getline(cin,Searchname);

string name;
int age;
string department;
int Marks;

fstream file;

file.open("intro.txt");

file>>name;
file>>age;
file>>department;
file>>Marks;

if(Searchname == name){

cout<<"Name = "<<name;

cout<<"age = "<<age;

cout<<"Deapartment= "<<department;

cout<<"Marks = "<<Marks;

}

file.close();

string change;
cout<<"Enter your changing =";
cin>>change;

if(change == "y"){

cin>>name;
cin>>age;
cin>>department;
cin>>Marks;

file.open("intro.txt");

file<<name<<endl;
file<<age<<endl;
file<<department<<endl;
file<<Marks<<endl;


file.close();

}

return 0;
}
