class Solution {
public:
    bool checkEqual(int count1[], int count2[]) {
        for(int i = 0; i < 26; i++) {
            if(count1[i] != count2[i]) {
                return 0;
            }
        }
        return 1;
    }
    bool checkInclusion(string s1, string s2) {
        int count1[26] = {0};
        for(int i = 0; i < s1.length(); i++) {
            int index = s1[i] - 'a';
            count1[index]++;

        }
        
        int windowSize = s1.length();
        for(int i = 0; i < s2.length(); i++) {
            int windIdx = 0;
            int idx = i;
            int count2[26] = {0};

        while(windIdx < windowSize && idx < s2.length()) {
            int index = s2[idx] - 'a';
            count2[index]++;
            windIdx++;
            idx++;
        }
        if(checkEqual(count1, count2)) {
            return 1;
        }
          
    }
    return 0;
    }
  
};