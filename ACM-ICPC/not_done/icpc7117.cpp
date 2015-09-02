#include <iostream>
#include <string>

using namespace std;

int main() {
  string buffer;
  cin >> buffer;
  string kind = "";
  string prev;

  while (buffer != "===") {
    prev = "";
    for (int i = 0; i < len(buffer); i++) {
      if (isVowel(buffer[i]) {
        kind += "v";
      }
      else {
        prev += buffer[i];
        if (exceptions(prev)) {
          kind += "v";
        }
        else {
          kind += "c";
        }
      }
    }

    cin >> buffer;
  }
  
  return 0;
}

bool isVowel(char c) {
  if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
    return true;
  } else {
    return false;
  }
}

bool vccv(string word) {

  return false;
}

bool vcv(string word) {

  return false;
}

bool exceptions(string word) {
  if (word == "qu" || word == "tr" || word == "br" || word == "st" || word == "str" \
    || word == "sl" || word == "bl" || word == "cr" || word == "ph" || word == "ch") {
    return true;
  } else {
    return false;
  }
}