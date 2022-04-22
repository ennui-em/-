#include <iostream>
using namespace std;
int main(){
  int a, b, c;
  for (a = 0; a <=5; a++){
    for (b = 0; b <= 3; b++){
      cout << "aは: " << a << " / bは" << b << "\n";
    }
  }
  c = a * b;
  cout << "\nTotal: " << c;
  return 0;
}
