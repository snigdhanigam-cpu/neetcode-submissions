class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int longest=0;
        for(int n:s)
        {
            if(!s.count(n-1)) //check for left neighbour
            {
                int current=n;
                int count=1;
                while(s.count(current+1))
                {
                    current++;
                    count++;
                }
                longest=max(longest,count);

            }
        }
        return longest;
    }
};
