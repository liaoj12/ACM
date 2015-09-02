#include <iostream>
#include <cmath>

using namespace std;

int main(void){
	int N;
	double available_amount;
	int i = 0;
	double x = 0;
	double area = 0;

	cin>>N;

	while(N >= 3){
		//read coordinates into 2d array
		double coordinates[N][2];
		for(i = 0; i < N; i++){
			cin>>coordinates[i][0];
			cin>>coordinates[i][1];
		}
		//read in the available amount
		cin>>available_amount;

		//vector to N-2 points
		double polygonal_vector[N-1][2];
		for(i = 0; i < N-1; i++){
			polygonal_vector[i][0] = coordinates[i+1][0] - coordinates[0][0];
			polygonal_vector[i][1] = coordinates[i+1][1] - coordinates[0][1];
		}

		//calculate the total area
		for(i = 0; i < N - 2; i++){
			area = area + 0.5 * (polygonal_vector[i][0]*polygonal_vector[i+1][1]-polygonal_vector[i][1]*polygonal_vector[i+1][0]);
		}

		//calculate the maximum length
		x = available_amount / abs(area);
		cout<<"BAR LENGTH: ";
		printf("%.2lf\n", x);

		//end of round
		cin>>N;
		area = 0;
	}


	return 0;
}
