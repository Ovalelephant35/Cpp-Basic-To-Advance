#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
 
int main(){
   int i=5,j; 
   j=i++; cout<<j<<" "<<i<<endl;
//j=5 , i=6
   int k=5,l; l=++k; 
   cout<<l<<" "<<k<<endl;
//l=6 , k=6
   int a=5,b; b=2*++a + 2*a++; 
   cout<<b<<" "<<a<<endl;
//b=24 , a=7
   int c=5,d; d=2*c++ + 2*c++; 
   cout<<d<<" "<<c<<endl;
//c=7 , d=22
return 0;
}