#include <iostream>
using namespace std;
int main(){
    int a ,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    int sum = a+b;
    int diff = a-b;
    int mult = a*b;
    int div = a/b;
    int mod = a%b;
    cout << "sum = " << sum << " diff = " << diff << " multiply = " << mult << " div = " << div << " mod = " << mod <<  endl;
return 0;
}