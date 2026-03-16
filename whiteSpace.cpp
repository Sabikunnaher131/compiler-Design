#include <iostream>
using namespace std;

int main() {
    char str[100];
    int i = 0, j = 0, spaceCount = 0;

    cout << "Enter a string: ";
    cin.get(str, 100);


    while (str[i] != '\0') {
        if (str[i] == ' ')
            spaceCount++;
        else
            str[j++] = str[i];

        i++;
    }
    str[j] = '\0';

    cout << "Number of white spaces: " << spaceCount << endl;
    cout << "String after removing spaces: " << str << endl;

    return 0;
}
