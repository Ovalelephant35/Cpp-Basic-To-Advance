#include <iostream>
using namespace std;
int main(){
    cout << "Enter Height and base of triangle" <<endl;
    float h , b;
    cin>>h>>b;
    float area = 0.5*(h*b);
    cout << "Area of Triangle is : " << area <<endl;
    return 0;
}