#include <iostream>
using namespace std;
int main(){
    cout << "Enter Radius of Circle : "<<endl;
    float r ;
    cin >> r;
    float are = (22*r*r)/7;
    float per = (2*22*r)/7;
    cout << "Perimeter is : "<<per<<endl<<"Area is : "<<are<<endl;
    return 0;
}