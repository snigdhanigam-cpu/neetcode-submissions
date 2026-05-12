class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> frequency; // first int is num and second is count
        for (int num:nums)
        {
            frequency[num]++; // everytime we see a num we add 1 to its count
        }
        vector<pair<int,int>> vec(frequency.begin(),frequency.end());// sort by frequency(who has the heighest frequency)
        {
        sort(vec.begin(),vec.end(), [](auto& a, auto& b)
        {
            return a.second>b.second;
            
        });
        vector<int> result;
        for (int i=0;i<k;i++)
        {
            result.push_back(vec[i].first);
        }
        return result;
       } 
    }
};
