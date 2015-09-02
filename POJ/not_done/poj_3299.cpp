#include <iostream>
#include <stdio.h>
#include <cmath>
#include <map>

using namespace std;

int main(void){
	char l1, l2, T = 'a', D = 'a', H = 'a';
	double n1, n2;
	double h, e;

	cin >> l1;
	while(l1 != 'E'){
		map<char, double> m1;
		map<char, double> m2;

		cin >> n1 >> l2 >> n2;
		
		m1[l1] = n1;
		m2[l2] = n2;


		cin >> l1;
	}

	return 0;
}