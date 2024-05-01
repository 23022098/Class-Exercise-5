#include <iostream>
#include <cmath>

using namespace std;

double distance(double x1,double y1,double x2,double y2){
return sqrt( pow((x2-x1),2)+ pow((y2-y1),2));
}

int main()
{
    double x1,x2,y1,y2;

    cout << "Enter the value of x1:" << endl;
    cin >>x1;
    cout << "Enter the value of x2:" <<endl;
    cin >>x2;
    cout << "Enter the value of y1:" <<endl;
    cin >>y1;
    cout << "Enter the value of y2:" <<endl;
    cin >>y2;


    cout <<"The distance between point 1 and point 2 is "<<distance(x1, y1,x2, y2)<< endl;
    return 0;
}

