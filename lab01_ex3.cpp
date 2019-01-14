#include <iostream>

using namespace std;

int main()
{
int age;
double low_lim, up_lim;
cout<<"What is your age: "<< endl;
cin >>age;
low_lim = 0.6*(220-age);
up_lim=0.75*(220-age);
cout<<"Your target heart rate is between "<<low_lim<<" and "<<up_lim<< " bpm." << endl;

}
