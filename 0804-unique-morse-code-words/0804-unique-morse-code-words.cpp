class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> codemorse = {
            ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."
            };
        int n = words.size();
        map<string, int> mp;
        for (int i = 0; i < n; i++) {
           string word = words[i]; 
           int m = word.size();
           string temp = "";
            for (int j = 0; j < m; j++) {
                char c = word[j];
                temp += codemorse[c - 'a'];
            }
            mp[temp]++;
        }
        return mp.size();
    }
};