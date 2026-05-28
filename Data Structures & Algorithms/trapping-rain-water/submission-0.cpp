class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> maxLeft(height.size());
        vector<int> maxRight(height.size());
        int water=0;
        maxLeft[0]=height[0];
        for(int i=1; i<height.size();i++)
        {
            maxLeft[i]=std::max(height[i],maxLeft[i-1]);
        }
        maxRight[height.size()-1]=height[height.size()-1];
        for(int i=height.size()-2;i>=0;i--)
        {
            maxRight[i]=std::max(height[i],maxRight[i+1]);
        }
        for(int i=0;i<height.size();i++)
        {
            water+=std::min(maxLeft[i],maxRight[i])-height[i];
        }
        return water;
    }
};
