class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        
        sort(people.begin(),people.end());
        int boat=0;
        int i = 0, j = people.size() - 1;
        while (i <= j)
        {
            if (i < j && people[i] + people[j] <= limit)
            {
                i++;
            }
            j--;
            boat++;
        }
        return boat;
        
    }
};