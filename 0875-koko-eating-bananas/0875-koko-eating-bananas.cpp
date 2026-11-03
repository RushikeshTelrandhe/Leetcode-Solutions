class Solution {
public:
    bool canFinish(const vector<int>& piles, int speed, int h) {
    long long hours_needed = 0;
    for (int pile : piles) {
        hours_needed += (pile + speed - 1) / speed;
    }
    return hours_needed <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = *max_element(piles.begin(), piles.end());
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (canFinish(piles, mid, h)) {
            high = mid; 
        } else {
            low = mid + 1; 
        }
    }
    return low;
    }
};
