#include <iostream>

using namespace std;

int main()
{
int first_integer, second_integer, sum, product, quotient, modulus;
cout <<"Enter the first integer: \n";
cin >>first_integer;
cout <<"Enter the second integer: "<< endl;
cin >>second_integer;
sum = first_integer + second_integer;
product = first_integer*second_integer;
quotient = first_integer/second_integer;
modulus = first_integer%second_integer;
cout <<first_integer<<" + " <<second_integer<<" = "<<sum<< endl;
cout <<first_integer<<" * " <<second_integer<<" = "<<product<< endl;
cout <<first_integer<<" / " <<second_integer<<" = "<<quotient<< endl;
cout <<first_integer<<" % " <<second_integer<<" = "<<modulus<< endl;

}
