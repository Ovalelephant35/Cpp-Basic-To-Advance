#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
 
int main(){
   cout << "Enter the number you want to operate on and by how"<<endl;
   int num , op;
   cin >> num >> op;
   cout << "Enter the operator you want to perform"<<endl;
   char c ;
   cin >> c;
   if(c=='+')num+=op;
   else if(c=='-')num-=op;
   else if(c=='*')num*=op;
   else if(c=='/')num/=op;
   else if(c=='%')num%=op;
   else{
    cout << "Invalid Input"<<endl;
   }
   cout << num<<endl;
return 0;
}