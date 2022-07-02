class Solution {
    long long MOD= 1000000007;
public:
    long long Recur(int n, bool isFilled){
        if(n==1){
            return 1;
        }
        
        if(isFilled){
            return Recur(n-1,!isFilled);
        }else{
            return (Recur(n-1,!isFilled)+Recur(n-1,isFilled))%MOD;
        }
    }
    
    
    int countHousePlacements(int n) {
        long long ways_for_one_side=(Recur(n,0)+Recur(n,1))%MOD;
        
        return (ways_for_one_side*ways_for_one_side)%MOD;
    }
};
