//function myStrLen(char*) which returns the length of the parameter cstring. 
//Write the function without using the C++ function strlen.
#include <iostream>
using namespace std;
//using the function
int myStrLen(char* p)
{
    int count=0;
    for(int i=0;*(p+i)!='\0';i++)
    {
        *(p+i);
        count++;
    }
    return count;
}
int main()
{
    char ar[100];
    cout<<"Enter the string:"<<ar<<endl;
    //getting a string line
    cin.getline(ar,100);
    char* p=&ar[0];
    cout<<"Length of the string:"<<myStrLen(p);
    return 0;
}
