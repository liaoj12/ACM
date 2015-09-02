#include <iostream>
#include <string>

using namespace std;

void postOrder(string pre, string in, char root) {
  if (pre.length() != 1) {
    int split = in.find(root);
    // if left subtree exists
    if (split > 0) {
      char root_left = pre[1];
      postOrder(pre.substr(1, split), in.substr(0, split), root_left);
    }

    // if right subtree exists
    if (in.length() - split > 1) {
      char root_right = pre[split + 1];
      postOrder(pre.substr(split + 1, in.length() - split - 1), in.substr(split + 1, in.length() - split - 1), root_right);
    }
  }
  cout << root;

}

int main(void) {
  string preord, inord;

  while (cin >> preord >> inord) {
    postOrder(preord, inord, preord[0]);
    cout << endl;    
  }

  return 0;
}
