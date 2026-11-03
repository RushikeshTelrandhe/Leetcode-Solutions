class Solution {
public:
    bool isPalindrome(int x) {
        int d = x;
        int revn=0;
        int ld;
        while (x>0){
            ld=x%10;
            if (revn> INT_MAX /10 || (revn == INT_MAX /10 && ld >7)) return false;
            x=x/10;
            revn=(revn*10)+ld;

        }
        if (revn==d) return true;
        else return false;

    }
};