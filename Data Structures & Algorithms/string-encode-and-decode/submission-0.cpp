class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string="";

        for(int i=0; i<strs.size();i++)
        {
            encoded_string+=to_string(strs[i].length())+'#'+strs[i];
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
       int i=0;
       vector<string> strs;
       while(i<s.size())
       {
        int j=s.find('#',i);
        int len=stoi(s.substr(i,j-i));
        strs.push_back(s.substr(j+1,len));
        i=j+1+len;
       }
       return strs;

    }
};
