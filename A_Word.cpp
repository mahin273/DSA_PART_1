#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    int lower_count = 0;
    int upper_count = 0;
    cin >> word;

    for (int i = 0; i < word.length(); i++) {
        if (word[i] >= 'A' && word[i] <= 'Z') {
            upper_count++;
        } else if (word[i] >= 'a' && word[i] <= 'z') {
            lower_count++;
        }
    }

    for (int i = 0; i < word.length(); i++) {
        if (upper_count > lower_count) {
            cout << (char)toupper(word[i]);
        } else if (upper_count < lower_count) {
            cout << (char)tolower(word[i]);
        } else {
            cout << (char)tolower(word[i]);
        }
    }

    return 0;
}