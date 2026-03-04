class Solution {
    public int longestKSubstr(String s, int k)
    {
        // code here
        int maxl=-1, l=0,r=0;
        
        HashMap<Character, Integer> map= new HashMap<>();
        
        while(r<s.length())
        {
            char ch= s.charAt(r);
            map.put(ch, map.getOrDefault(ch, 0)+1);
            
            if(map.size()==k)
                maxl= Math.max(maxl,r-l+1);
            
            if(map.size()>k)
            {
                char cl= s.charAt(l);
                map.put(cl, map.getOrDefault(cl, 0)-1);
                if(map.get(cl)==0)
                    map.remove(cl);
                l++;
            }
            r++;
        }
        
        
        return maxl;
    }
}