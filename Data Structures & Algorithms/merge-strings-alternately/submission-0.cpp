class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;
        int i=0;
        int w1=word1.size();
        int w2=word2.size();
        int size=std::min(w1,w2);

        for(i=0;i<size;i++)
        {
            result+=word1[i];
            result+=word2[i];
        }
        result+=word1.substr(size);
        result+=word2.substr(size);
        return result;
        
    }
};