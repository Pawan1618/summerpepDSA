class Solution {
    public int minMergedInteger(int[] nums) {
        int mini=Integer.MAX_VALUE;
        int n=nums.length;
        for(int i=0;i<n-1;i=i+2){
            String s="";
            s+=Integer.toString(nums[i]);
            s+=Integer.toString(nums[i+1]);
            // System.out.println(s);
            mini=Math.min(mini,Integer.parseInt(s));
        }
        return mini;

    }
}