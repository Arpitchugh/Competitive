class Solution {
public:
    int countOdds(int low, int high) {
        // Brute Force
        // int counter = 0;
        // for(int i=low;i<=high;i++){
        //     if(i%2 != 0){counter++;}
        // }
        // return counter;

        // Optimized
        int count =0;
        int sol = (high - low + 1)/2;
        if(low%2==0 || high%2 == 0){count = sol;}
        else{count = sol+1;}
        return count;

    }
};
