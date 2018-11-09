#include <iostream>
using namespace std;
//a piece of code which prints the characters in a cstring in a reverse order
int main(){
   char c[10] ="abcde";
   char* cptr;
   cptr=c;
   //loops
   for(int i=10;i>=0;i--)
       cout<<*(cptr+i);
return 0;
}
