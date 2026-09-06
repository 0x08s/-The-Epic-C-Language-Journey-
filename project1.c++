#include<iostream>
using namespace std;
 #include<fstream>
 int main(){

string searchname;

 string name;
 string password;
  string digit;

   ifstream file;

 file.open("file1.txt");

 cout<<"enter the searchname = ";

  getline(cin,searchname);

   while(getline(file,name)){

   getline(file, password);
    getline(file, digit);

   if(searchname == name)
   { cout<<"name = "<<name<<endl;
   cout<<"password = "<<password<<endl;
    cout<<"digit = "<<digit<<endl;
}

}

 file.close();

 return 0;
 }
