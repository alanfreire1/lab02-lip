#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  
  double x;
  
  cin >> x;
  
  cout << scientific << setprecision(3) << x << endl;
  
  cout << fixed << setprecision(5) <<x<< endl; 
  return 0;
}