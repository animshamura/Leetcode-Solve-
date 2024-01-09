class NumArray {
public: vector<int> ar;

public:
    NumArray(vector<int>& nums): ar(nums.size()+1) {
       
        partial_sum(nums.begin(), nums.end(), ar.begin()+1);
    }

    int sumRange(int left, int right) { return ar[right + 1] - ar[left]; }
};
