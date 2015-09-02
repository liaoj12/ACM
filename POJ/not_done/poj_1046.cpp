#include <iostream>

using namespace std;

struct color
{
	unsigned int R;
	unsigned int G;
	unsigned int B;
};

int main(void){
	color lst[];
	color map[];

	for(int i = 0; i < 16; i++){
		cin >> lst[i].R >> lst[i].G >> lst[i].B;
	}
	int i = 0;
	
	do{
		cin >> map[i].R >> map[i].G >> map[i].B;
		i++;
	} while(map[i].R != -1)
	



	return 0;
}