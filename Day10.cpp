//Problem: Read a string and check if it is a palindrome using two-pointer comparison.
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    int i = 0, j = s.size() - 1;
    bool isPal = true;
    while (i < j) {
        if (s[i] != s[j]) {
            isPal = false;
            break;
        }
        i++;
        j--;
    }
    if (isPal) cout << "Palindrome";
    else cout << "Not Palindrome";
    return 0;
}

