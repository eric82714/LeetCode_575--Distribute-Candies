class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        sort(candies.begin(), candies.end());
        vector<int> set;
        int prev = -1;
        for(auto c : candies) {
            if(c == prev) continue;
            set.push_back(c);
            prev = c;
        }
        return min(candies.size()/2, set.size());
    }
};
