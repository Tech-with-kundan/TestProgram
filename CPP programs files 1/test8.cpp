//8. Write a C++ program to swap values of two int variables without using third variable
#include<iostream>
using namespace std;
int main(void){

  int n1,n2;
  cout<<" enter the two number "<< endl;
  cin>> n1 >> n2;
  cout<< " before the swapping the number is " << n1 <<" and "<< n2 << endl;
  n1= n1*n2;
  n2= n1 / n2;
  n1= n1 /n2 ;
  cout<< " after  the swapping the number is " << n1 <<" and "<< n2 << endl;

  return 0;
}
