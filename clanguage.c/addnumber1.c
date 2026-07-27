#include<stdio.h>

int main (){
int marks[10] = {10,20,30,40,50,60,70,80,90,100};

for(int i = 0;i<=10;i++){

printf("%d\n",i);


if(marks[i]<34){

printf("print the roll number %d\n",marks[i]);

}
else{

printf("nothing add thing");

}
}
return 0;
}
