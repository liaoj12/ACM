#include <iostream>
#include <string>

using namespace std;

int main() {
   string enc_message, ori_message;
   cin >> enc_message >> ori_message;

   int o, e;
   o = ori_message.length();
   e = enc_message.length();

   if (o != e) {
      cout << "NO";
   }
   else {
      string sub = "";
      for (int i = 0; i < o; i++) {
         cout << (char)((ori_message[i] + 1) % 26) << endl;
      }
   }

   return 0;
}