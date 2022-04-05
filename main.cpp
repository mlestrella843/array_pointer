/*Activity 4.2 
Write a program to search an element in an array using pointers. */


#include <iostream>
using namespace std;

int main() {

int *pointer;
int number;
int array[5]={1,3,5,6,7};
pointer = &array[0];
bool exist=false;

cout<<"Please introduce the number to find: ";
cin>>number;

for (int i = 0; i < 10; i++)
{
  if  (number == *(pointer + i) ){
  cout<<"The number was researched: "<<number;  
  exist=true;
       }  
}
  if (exist == false){ 
   cout<<"The number not exist"<<endl;
  }
  
  return 0;
    
}