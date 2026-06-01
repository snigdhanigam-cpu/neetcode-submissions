class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int a=n/2;
        int count=0;
        unordered_map <int,int> hmap;
        for(int i:nums)
        {
            hmap[i]++;
            if(hmap[i]>n/2)
            {
                return i;
            }
        }
        return -1;

    }
};