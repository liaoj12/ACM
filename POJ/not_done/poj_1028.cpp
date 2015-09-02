#include <iostream>
#include <stack>

using namespace std;

int main(void){
	string line;
	string current_page = "http://www.acm.org/";

	stack<string> fs;
	stack<string> bs;

	getline(cin, line);

	while(line[0] != 'Q'){
		if(line[0] == 'B'){
			if(!bs.empty()){
				fs.push(current_page);
				current_page = bs.top();
				bs.pop();
				cout << current_page << endl;
			}
			else
				cout << "Ignored" << endl;
		}
		else if(line[0] == 'F'){
			if(!fs.empty()){
				bs.push(current_page);
				current_page = fs.top();
				fs.pop();
				cout << current_page << endl;
			}
			else
				cout << "Ignored" << endl;
		}
		else if(line[0] == 'V'){
			bs.push(current_page);
			current_page = line.substr(6);
			cout << current_page << endl;
			while(!fs.empty())
				fs.pop();
		}

		getline(cin, line);
	}

	return 0;
}