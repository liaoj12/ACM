#include <iostream>
#include <vector>

using namespace std;

int main(void){
	int n;
	int test;
	int i;

	cin>>n;
	while(n != 0){
		int list[n];

		for(i = 0; i < n; i++){
			cin>>test;
			list[i] = test;
		}

		vector<int> v;

		for(i=n;i>0;i--){
			v.insert(v.begin()+list[i-1],i);
		}

		//output the result
		for(i = 0; i < n-1; i++){
			cout<<v[i]<<",";
		}
		cout<<v[n-1]<<endl;

		//read the next round
		cin>>n;
	}

	return 0;
}