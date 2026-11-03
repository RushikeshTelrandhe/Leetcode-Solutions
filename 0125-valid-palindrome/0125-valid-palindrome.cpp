class Solution {
public:
    bool isPalindrome(string s) {
       string cleaned = "";
    
    // Clean the string: remove non-alphanumeric characters and convert to lowercase
    for(char c : s) {
        if(isalnum(c)) {
            cleaned += tolower(c);
        }
    }

    // Now check if the cleaned string is a palindrome
    int left = 0, right = cleaned.size() - 1;
    while(left < right) {
        if(cleaned[left] != cleaned[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
    }
};