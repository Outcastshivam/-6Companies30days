#include <bits/stdc++.h>
    using namespace std;
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int median = nums[nums.size() / 2];
        int moves = 0;

        for (int value : nums) {
            moves += abs(value - median);
        }

        return moves;
    }