class Solution {
public:
    int hammingDistance(int x, int y) {
        int count=0;
        int first, second;
        for(int i=0; i<32; i++){
            first=(x&(1<<i));
            second=(y&(1<<i));
            if(first!=second){
                count++;
            }
        }
        return count;
    }
};