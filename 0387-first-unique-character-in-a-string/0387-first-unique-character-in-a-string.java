class Solution {
    public int firstUniqChar(String s) {
        Map<Character,Integer>mp=new HashMap<>();
        for(int i=0;i<s.length();i++){
            Character t=s.charAt(i);
            mp.put(t,mp.getOrDefault(t,0)+1);
        }
        int res=-1;
        for(int i=0;i<s.length();i++){
            Character k=s.charAt(i);
            if(mp.get(k)==1){
                res=i;
                break;
            }
        }
        return res;
    }
}