#include <iostream>
#include <cstring>

// time limit exceeded

using namespace std;
const int range = 1000000;
bool not_prime[range+5]; // not_prime[i] = true means i is not prime
int prime[range+5];
int generate_primes() {
  prime[0] = 0;
  memset(prime, 0, sizeof(prime));
  memset(not_prime, 0, sizeof(not_prime));

  for (int i = 2; i <= range; i++) {
    if (!not_prime[i]) prime[++prime[0]] = i;
    for (int j = 1; j <= prime[0] && prime[j] <= range / i; j++) {
      not_prime[i*prime[j]] = true;
      if (i % prime[j] == 0) break;
    }
  }
  return prime[0];
}

int main() {
  // generate all the prime numbers in 100W
  generate_primes();

  int even;
  cin >> even;

  while (even != 0) {
    int a, b;
    bool ok = false;
    for (int i = 1; i <= prime[0] && prime[i] <= even / 2; i++) {
      a = prime[i];
      b = even - a;
      if (!not_prime[b]) {
        ok = true;
        break;
      }
    }
    if (ok) cout << even << " = " << a << " + " << b << endl;
    else cout << "Goldbach's conjecture is wrong." << endl;

    cin >> even;
  }

   return 0;
}