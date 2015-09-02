#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.141592623;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    double x, y;
    cin >> x >> y;
    double dist = sqrt(x * x + y * y);

    double r;
    int year = 1;
    
    while (true) {
      r = sqrt(100.0 * year / PI);
      if (dist < r)
        break;
      year++;
    }
    cout << "Property " << i + 1 << ": This property will begin eroding in year " << year << "." << endl;
  }

  cout << "END OF OUTPUT." << endl;

  return 0;
}