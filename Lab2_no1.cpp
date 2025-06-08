#include <iostream>

using namespace std;

int main()
{
  int a;
  cin>> a;
  if (a>=0){
        if (a%2==0){
            cout << "The number is positive and even" << endl;
        }else {
            cout<<"The number is positive and odd" <<endl;
        }
        cout<< "The number is negative and even" << endl;
  } else {
       if (a % 2 == 0) {
            cout << "The number is negative and even" << endl;
        } else {
            cout << "The number is negative and odd" << endl;
        }
    }
    return 0;
}
