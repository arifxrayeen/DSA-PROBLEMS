class Solution {
private:
void solve(string digit, string output, int index, vector<string> &ans, string mapping[]) {
    //base case
    if(index >= digit.length()) {
        ans.push_back(output);
        return;
    }
    //index i indicates to first char of string like 2 we need to change char to int like "2" -> 2
    int number = digit[index] - '0';
    string value = mapping[number];
    //traverse karege value pe like 23 = int not char
    for(int i = 0; i < value.length(); i++) {
        output.push_back(value[i]);
        solve(digit, output, index+1, ans, mapping);
        //pop 
        output.pop_back();

    }
}
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length() == 0){
            return ans;
        }
        int index = 0;
        string output = "";
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve(digits, output, index, ans, mapping);
        return ans;
        
    }
};