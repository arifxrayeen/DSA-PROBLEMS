class Solution {
private:
bool valid(char ch) {
    if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'z' || ch >= '0' && ch <= '9'  ) {
        return 1;
    }
    return false;

}
char toLowerCase(char ch) {
    if(ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9') {
        return ch;
    }
    else {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int start = 0;
        int end = n - 1;

        while (start <= end) {
            while (start < end && !valid(s[start])) start++;
            while (start < end && !valid(s[end])) end--;
            if (toLowerCase(s[start]) != toLowerCase(s[end])) {
                return 0; // ⛔ mismatch found
            }
            start++;
            end--;
        }

        return 1; // ✅ all pairs matched
    }
};
