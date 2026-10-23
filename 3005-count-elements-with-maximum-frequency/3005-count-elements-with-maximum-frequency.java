class Solution {
    public int maxFrequencyElements(int[] nums) {
        Map<Integer,Integer>mp=new HashMap<>();
        for(int i:nums){
            mp.put(i,mp.getOrDefault(i,0)+1);
        }
        int maxi=0;
        for(Map.Entry<Integer,Integer>a:mp.entrySet()){
            maxi=Math.max(maxi,a.getValue());
        }
        // System.out.println(maxi);
        int res=0;
        for(Map.Entry<Integer,Integer>m:mp.entrySet()){
            if(m.getValue()==maxi){
                res+=maxi;
            }
        }
        return res;
        
    }
}