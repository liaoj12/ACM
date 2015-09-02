#include <iostream>
#include <string>

using namespace std;

int main(void) {
   char word[256];
   string tmp;
   cin.getline(word, sizeof(word));

   int ans;
   while (word[0] != '#') {
      tmp = string(word);
      ans = 0;
      for (int i = 0; i < tmp.length(); i++) {

         if (tmp[i] != ' ')
            ans += ((int)tmp[i] - 64) * (i + 1);
      }
      cout << ans << endl;
      cin.getline(word, sizeof(word));
   }

   return 0;
}