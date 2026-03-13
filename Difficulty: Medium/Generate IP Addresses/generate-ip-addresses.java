class Solution {
    ArrayList<String> ans;
    int n;
    
    public void recur(String s, StringBuilder sb, int index, int dots) {
        if(dots > 4) return;
        
        if(index == n) {
            if(dots == 4) {
                sb.deleteCharAt(sb.length() - 1);
                ans.add(sb.toString());
            }
            return;
        }
        
        for(int i = index; i < n; i++) {
            int length = sb.length();
            String curr = s.substring(index, i + 1);
            int num = Integer.parseInt(curr);
            
            if(num > 255 || curr.length() > 1 && curr.charAt(0) == '0') {
                break;
            }
            
            sb.append(curr).append('.');
            recur(s, sb, i + 1, dots + 1);
            sb.setLength(length);
        }
    }
    
    public ArrayList<String> generateIp(String s) {
        ans = new ArrayList<>();
        n = s.length();
        
        recur(s, new StringBuilder(), 0, 0);
        
        return ans;
        
    }
}