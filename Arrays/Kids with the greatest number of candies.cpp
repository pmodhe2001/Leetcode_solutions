class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        int maxV=candies[0];
        for(int i=1;i<n;i++){
            if(maxV<candies[i]){
                maxV=candies[i];
            }
        }
        cout<<maxV;
        vector<bool> res;
        for(int i=0;i<n;i++){
            if(candies[i]+extraCandies>=maxV){
                res.push_back(true);
            }else{
                res.push_back(false);
            }
        }
        return res;
    }
};
