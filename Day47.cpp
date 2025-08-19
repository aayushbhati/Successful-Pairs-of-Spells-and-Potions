class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int>ans;
        sort(potions.begin(),potions.end());
        for(int i=0;i<spells.size();i++){
            int start=0,end=potions.size()-1,ind=potions.size();
            while(start<=end){
                int mid=start+(end-start)/2;
                if(1LL*potions[mid]*spells[i]>=success){
                    ind=mid;
                    end=mid-1;
                }
                else start=mid+1;
            }
            ans.push_back(potions.size()-ind);
        }
        return ans;
    }
};
