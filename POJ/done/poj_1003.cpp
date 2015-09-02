#include <iostream>

using namespace std;

int main(void){
	double n, sum;
	int ans;
	cin >> n;

	while(n != 0){
		ans = 1;
		sum = 0;
		while(sum < n){
			sum += 1/(1+double(ans));
			ans += 1;
		}

		cout << ans - 1 << " card(s)" << endl;

		cin >> n;
	}

	return 0;
}