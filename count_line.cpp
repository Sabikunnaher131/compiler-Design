#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    int count = 0;

    cout << "Enter multiple lines (type END to stop):" << endl;

    while (true) {
        getline(cin, line);

        if (line == "END") {
            break;
        }

        count++;
    }

    cout << "Total number of lines entered: " << count << endl;

    return 0;
}
