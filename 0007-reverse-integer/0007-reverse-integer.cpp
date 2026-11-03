class Solution {
public:
    int reverse(int x) {
        int lastdigit;
        int revno=0;
        while(x!=0){
        lastdigit=x%10;
        if (revno > INT_MAX /10 || (revno ==INT_MAX /10 && lastdigit > 7)) return 0;
        if (revno < INT_MIN /10 || (revno ==INT_MIN /10 && lastdigit < -8)) return 0;
        revno=(revno*10)+lastdigit;
        x=x/10;
        
        }          
        return revno;
    }
};