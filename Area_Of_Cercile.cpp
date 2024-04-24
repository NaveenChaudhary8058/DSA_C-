#include <iostream>
using namespace std;

float a = 3.14;

float b (float c) {
    return a * c * c;
}

int main(){
  float c;
  cout<<"Enter Radious : ";
  cin>>c;
  cout<<"Area of Circle : "<<b(c);
  return 0;
}