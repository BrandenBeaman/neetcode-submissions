class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        

set<int> MySet;

MySet.insert(nums.begin(), nums.end());
if(MySet.size() < nums.size()) {
    return true;
} 

    return false;

}
};

    

