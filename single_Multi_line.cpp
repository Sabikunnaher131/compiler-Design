#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    bool inMultiLineComment = false;

    cout << "Enter code (Press Ctrl+D or Ctrl+Z to stop):\n";

    while (getline(cin, line)) {
        for (int i = 0; i < line.length(); i++) {

            if (!inMultiLineComment && i + 1 < line.length() &&
                line[i] == '/' && line[i + 1] == '/') {

                cout << "Single-line Comment: "
                     << line.substr(i + 2) << endl;
                break;
            }

            if (!inMultiLineComment && i + 1 < line.length() &&
                line[i] == '/' && line[i + 1] == '*') {

                inMultiLineComment = true;
                cout << "Multi-line Comment: ";
                i++;
                continue;
            }

            if (inMultiLineComment) {
                if (i + 1 < line.length() &&
                    line[i] == '*' && line[i + 1] == '/') {

                    inMultiLineComment = false;
                    cout << endl;
                    i++;
                } else {
                    cout << line[i];
                }
            }
        }
    }

    return 0;
}
