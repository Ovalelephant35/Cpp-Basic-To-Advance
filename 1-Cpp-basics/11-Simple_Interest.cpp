#include <iostream>
using namespace std;
int main(){
    cout << "Enter Principal , Time and Rate " <<endl;
    float p ,t , r;
    cin >> p >>t>>r;
    float in = (p*t*r)/100;
    float am = in + p;
    cout << "Your interest is : "<<in<<endl;
    cout << "Your Total Amount is : "<<am<<endl;
    return 0;
}