#include <iostream>
using namespace std;

// Convert string to lowercase (manually)
void toLowercase(string &str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
    }
}

// Reverse the string manually
string reverseString(string str) {
    string reversed = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }
    return reversed;
}

// Check if the string is a palindrome (index-based comparison)
bool isPalindrome(string str) {
    int start = 0, end = str.length() - 1;
    while (start < end) {
        if (str[start] != str[end])
            return false;
        start++;
        end--;
    }
    return true;
}

// Count vowels and skip repeated vowels in a row
int countVowels(string str) {
    int count = 0;
    char prev = '\0';
    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        if ((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') && ch != prev) {
            count++;
        }
        prev = ch;
    }
    return count;
}

// Check for space or symbol
bool isValidInput(string str) {
    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        if (!(ch >= 'A' && ch <= 'Z') && !(ch >= 'a' && ch <= 'z')) {
            return false; // not a letter
        }
    }
    return true;
}

int main() {
    string word;
    cout << "Enter a single word (no spaces or symbols): ";
    cin >> word;

    if (!isValidInput(word)) {
        cout << "Invalid Input – No spaces or symbols allowed." << endl;
        return 0;
    }

    toLowercase(word);

    string reversed = reverseString(word);
    int vowelCount = countVowels(word);
    bool palindrome = isPalindrome(word);

    // Output
    cout << "\n--- String Analysis ---" << endl;
    cout << "Original string  : " << word << endl;
    cout << "Reversed string  : " << reversed << endl;
    cout << "String length    : " << word.length() << endl;
    cout << "Vowel count      : " << vowelCount << endl;
    cout << "Is Palindrome?   : " << (palindrome ? "YES" : "NO") << endl;

    return 0;
}