// #1768
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ret = "";
        int last_n_at1;
        for(int i = 0; i < word1.length(); i++) {
            ret.push_back(word1[i]);
            if (word2.length() <= i) {
                continue;
            } else { 
                ret.push_back(word2[i]);
            }
            last_n_at1 = i;
        }
        if (word1.length() < word2.length()) {
            ret += word2.substr(last_n_at1+1, word2.length()-last_n_at1);
        }
        return ret;
    }
};