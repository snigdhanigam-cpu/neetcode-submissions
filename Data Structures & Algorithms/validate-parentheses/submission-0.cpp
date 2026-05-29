class Solution {
public:
    bool isValid(string s) {
        stack<char> str;
        map<char,char> closeToOpen={ {')','('}, {']','['}, {'}','{'} };
        for(int i=0; i<s.size();i++)
        {
            if(closeToOpen.count(s[i]))
            {
                if(!str.empty() && str.top()==closeToOpen[s[i]])
                {
                    str.pop();

                }
                else
                return false;
            }
            else
            str.push(s[i]);


        }
        return str.empty();
        
    }
};
