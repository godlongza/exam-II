#include <iostream>
#include <cmath>


using namespace std;

//Write prototype of av() here.
long double av(double,double);

int main(){
    cout << av(-2.5,1.1) << "\n";
    cout << av(1,10000) << "\n";
    cout << av(8.5,2.4) << "\n";
    cout << av(0.1,0.0001) << "\n";
    cout << av(10,0.007) << "\n";
    cout << av(1,-2) << "\n";
    cout << av(15,100) << "\n";
    cout << av(123,5432) << "\n";
}

//Write function definition of av() here.

long double av(double x,double y){
    double z;
    if (x<=0||y<=0) {
       return 0;
    }if (max(x,y)/min(x,y)<=100) {
        z=sqrt(x*y);
    }else
    {
       z=av(x,(x+y)/2)+av(y,(x+y)/2);
    }
    return z;
    
    
    
}