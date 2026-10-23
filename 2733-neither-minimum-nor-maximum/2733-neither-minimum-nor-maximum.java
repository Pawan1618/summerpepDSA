class Solution {
    public int findNonMinOrMax(int[] nums) {
        int n=nums.length;
        int mini=Integer.MAX_VALUE;
        int maxi=Integer.MIN_VALUE;
        for(int i:nums){
             mini=Math.min(mini,i);
             maxi=Math.max(maxi,i);
        }
        int res=-1;
        for(int i:nums){
            if(i!=mini&&i!=maxi){
                res=i;
                break;
            }
        }
        return res;
    }
}