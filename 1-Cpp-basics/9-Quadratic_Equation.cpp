#include <iostream>
#include <math.h>
using namespace std;
int main(){
    cout << "Enter the Coefficients a , b, c :"<<endl;
    float a , b, c;
    cin >> a >>b >>c;
    float r1 = (-b + (sqrt((b*b)-(4*a*c))))/(2*a);
    float r2 = (-b - (sqrt((b*b)-(4*a*c))))/(2*a);
    cout << "Roots are : "<<r1 <<" "<<r2<<endl;
    return 0;
}