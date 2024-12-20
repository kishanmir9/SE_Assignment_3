//. String Palindrome Check
//o Write a C++ program to check if a given string is a palindrome (reads the same
//forwards and backwards).
//o Objective: Practice string operations.
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void isPalindrome(string str) {
  
    string rev = str;

    reverse(rev.begin(), rev.end());

    if (str == rev)
        cout<<str<< " is palindrome.\n\n\t";
    else
        cout<<str<< " is NOT palindrome.\n\n\t";
}

main() {
    isPalindrome("ABCDCBA");
    isPalindrome("ABCD");
    isPalindrome("CDFGFDC");
}