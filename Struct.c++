#include<iostream> 
using namespace std;
 #include<fstream> 

 struct id{

 
 string name; 
 string password;
  string digit;

 };


 int main(){ 

   ifstream file;

 file.open("file1.txt");

 id a[30];
   
 string searchname;
 
 cout<<"enter the searchname = ";

  getline(cin,searchname); 

  int i = 0;

   while(file >> a[i].name >> a[i].password >> a[i].digit){

  i++;

   }

    int j = 0;

    for(int j = 0; j < i;j++){

   if(searchname == a[j].name)

   { 
    
    cout<<"name = "<<a[j].name<<endl;
   cout<<"password = "<<a[j].password<<endl;
    cout<<"digit = "<<a[j].digit<<endl; 


}
    }

 file.close(); 

 return 0;
 }

