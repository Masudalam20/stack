#include <iostream>
using namespace std;

// Recursive function to check if a string is palindrome
bool isPalindrome(const string &str, int start, int end) {
    // Base case: If start has crossed end, all characters were equal
    if (start >= end)
        return true;

    // If characters at the start and end don't match, it's not a palindrome
    if (str[start] != str[end])
        return false;

    // Recur for the remaining substring
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    // Check if the string is a palindrome
    if (isPalindrome(str, 0, str.length() - 1))
        cout << str << " is a palindrome." << endl;
    else
        cout << str << " is not a palindrome." << endl;

    return 0;
}

