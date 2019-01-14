#include <iostream>

using namespace std;

int main()
{
double num1, num2, num3, num4, num5, num6, sum, avge;
cout<<"Enter six fp numbers on a single line, separated by spaces: "<< endl;
cin >>num1 >> num2 >> num3 >> num4 >> num5 >> num6;
sum = num1+num2+num3+num4+num5+num6;
cout <<"Sum of " <<num1<< " + "<<num2<<" + "<<num3<<" + "<<num4<<" + "<<num5<<" + "<<num6<< " = " <<sum<< endl;
avge = sum/6;
cout <<"Average = "<<avge<< endl;

}
