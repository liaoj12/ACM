#include <cstdlib>
#include <cstdio>
#include <iostream> 
#include <stdio.h>

using namespace std;

int main(void){
	

	double A;
	string U;
	double R;
	string V;

   string F = "";

	cin>>A;
	while(A >= 0){
		cin>>U>>R;
		char tmp;
		tmp = getchar();
		getline(cin,V);

      bool ans = 0;

      ans = A*100>=R?true:false;
      
      if(!ans){
         F += V + "\n";
      }else{
        cout << V;
        printf(" %.1lf ",A);
        cout << U;
        printf(" %d%%\n",(int)(A*100/R + .5));
      	
      }

		cin>>A;
	}

   cout << "Provides no significant amount of:\n" << F;

	return 0;
}
