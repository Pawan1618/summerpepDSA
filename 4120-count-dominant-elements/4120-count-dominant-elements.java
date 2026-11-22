class Solution {
    public int countDominantElements(int[] nums) {
        int res=0;
        int n=nums.length;
        if(n==1)return 1;
        for(int i=0;i<n;i++){
            boolean flag=false;
            if(i==0){
                if(nums[i]>=nums[i+1]){
                    flag=true;
                }

            }
            else if(i==n-1){
                if(nums[i]>=nums[i-1]){
                    flag=true;
                }

            }
            else{
                double avg=(nums[i+1]+nums[i-1])/2.0;
                if(avg<=nums[i]){
                    flag=true;
                }
            }
            if(flag==true)res++;
            
        }
        return res;
        
    }
}

