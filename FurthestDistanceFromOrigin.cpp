class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int count_l = 0;
        int count_r = 0;
        int count_ = 0;
        for(int i=0; i<moves.length(); i++) {
            if(moves[i] == 'L') count_l++;
            else if(moves[i] == 'R') count_r++;
            else count_++;
        }
        return abs(count_l-count_r) + count_;
    }
};
