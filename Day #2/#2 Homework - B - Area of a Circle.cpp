#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision (9) ;
    
    double r , p (3.141592653) ;
    
    cin >>r ;
    
    cout << p*r*r ;
}