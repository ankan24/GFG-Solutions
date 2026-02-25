class Solution {
    public boolean areIsomorphic(String s1, String s2) {
        // code here
        HashMap<Character,Character>map = new HashMap<>();
        
        for(int i=0;i<s1.length();i++)
        {
            char c=s1.charAt(i);
            if(map.containsKey(c))
            {
                char v=map.get(c);
                if(v!=s2.charAt(i))
                return false;
            }
            else{
                map.put(c,s2.charAt(i));
            }
        }
            map = new HashMap<>();  
        for(int i=0;i<s2.length();i++)
        {
            char c=s2.charAt(i);
            if(map.containsKey(c))
            {
                char v=map.get(c);
                if(v!=s1.charAt(i))
                return false;
            }
            else{
                map.put(c,s1.charAt(i));
            }
        }
        return true;
    }
}

