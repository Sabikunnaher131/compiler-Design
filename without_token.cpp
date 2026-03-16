#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter any string: ";
    getline(cin, s, '~');
    vector<string> words;
    string word = "";
    for(char c : s) {
        if(c == ' ') {
            if(!word.empty()) {
                words.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    if(!word.empty()) words.push_back(word);
    cout << "After tokenizing:"<<endl;
    for(string w : words) cout << w << endl;
    return 0;
}
