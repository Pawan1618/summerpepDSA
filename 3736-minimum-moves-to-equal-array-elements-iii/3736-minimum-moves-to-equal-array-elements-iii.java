class Solution {
    public int minMoves(int[] nums) {
        int maxi=0;
        for(int i:nums){
            maxi=Math.max(i,maxi);
        }
        // System.out.println(maxi);
        int res=0;
        for(int i:nums){
            res+=Math.abs(maxi-i);
        }
        return res;
    }
}