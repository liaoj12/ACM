#include <iostream>
#include <string>

using namespace std;

bool is_odd(int size);
//function to check if the length
//of the word odd or even
//true for odd and false for even

int reverse(char c);
//function to check if the character
//has reverse(2), stays the same(1) or
//doesn't have reverse(3)

bool palindrome(string word, bool is_odd, int size);
//function to check if the word is regular palindrome
//fails when the size is 1

bool mirrored_palindrome(string word, bool is_odd, int size);
//function to check if the word is mirrored palindrome
//have to meet that the word is regular palindrome first

bool is_mirrored(string word, bool is_odd, int size);
//function to check if a non-palindrome is mirrored string
//have to meet that the word is not a palindrome first

char reverse_character(char c);
//function to return the reverse of the
//character if the character has its reverse
//form and it's the same


int main(void){
	string word;
	int size;
	bool odd;

	while(cin>>word){

		size = word.size();
		odd = is_odd(size);

		if(size == 1){
			if(reverse(word[0]) == 1)
				cout<<word<<" -- is a mirrored palindrome."<<endl<<endl;
			else
				cout<<word<<" -- is a regular palindrome."<<endl<<endl;
		}

		else{
			if(palindrome(word, odd, size)){
				if(mirrored_palindrome(word, odd, size))
					cout<<word<<" -- is a mirrored palindrome."<<endl<<endl;
				else
					cout<<word<<" -- is a regular palindrome."<<endl<<endl;
			}
			else if(is_mirrored(word, odd, size))
				cout<<word<<" -- is a mirrored string."<<endl<<endl;
			else
				cout<<word<<" -- is not a palindrome."<<endl<<endl;
		}
	}




	return 0;
}

bool is_odd(int size){
	if(size % 2 != 0)
		return true;
	else
		return false;
}

int reverse(char c){

	switch(c){
			case 'A':
			case 'H':
			case 'I':
			case 'M':
			case 'O':
			case 'T':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case '1':
			case '8':
				return 1;
			case 'B':
			case 'C':
			case 'D':
			case 'f':
			case 'G':
			case 'K':
			case 'N':
			case 'P':
			case 'Q':
			case 'R':
			case '4':
			case '6':
			case '7':
			case '9':
				return 2;
			case 'E':
			case '3':
			case 'J':
			case 'L':
			case 'S':
			case '2':
			case 'Z':
			case '5':
				return 3;
		}
		return 4;
}

char reverse_character(char c){
	if(c == 'E')
		return '3';
	else if(c == '3')
		return 'E';
	else if(c == 'J')
		return 'L';
	else if(c == 'L')
		return 'J';
	else if(c == 'S')
		return '2';
	else if(c == '2')
		return 'S';
	else if(c == 'Z')
		return '5';
	else if(c == '5')
		return 'Z';

	return '!';
}

bool palindrome(string word, bool is_odd, int size){
	int f = 0, b = 0;
	bool check = false;

	if(is_odd){
		f = (size - 1) / 2 - 1;
		b = (size - 1) / 2 + 1;
	}
	else{
		f = size / 2 - 1;
		b = size / 2;
	}

	while(f >= 0){
		if(word[f] != word[b]){
			return check;
		}
		else{
			f--;
			b++;
		}
	}

	check = true;

	return check;
}

bool mirrored_palindrome(string word, bool is_odd, int size){
	int end = 0;
	int tmp = 0;

	if(is_odd){
		end = (size - 1) / 2;
	}
	else
		end = size / 2 - 1;

	for(int i = 0; i <= end; i++){
		tmp = reverse(word[i]);
		if(tmp == 2 || tmp == 3){
			return false;
		}
	}

	return true;
}

bool is_mirrored(string word, bool is_odd, int size){
	int end = 0;
	int tmp = 0;

	if(is_odd)
		end = (size - 1) / 2;
	else
		end = size / 2 - 1;

	for(int i = 0; i <= end; i++){
		tmp = reverse(word[i]);
		if(tmp == 2)
			return false;
		else if(tmp == 3)
			if(reverse_character(word[i]) != word[size - i - 1])
				return false;
	}

	return true;
}