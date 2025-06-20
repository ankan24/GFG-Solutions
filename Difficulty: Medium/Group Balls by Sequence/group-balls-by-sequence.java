class Solution {
    public boolean validgroup(int[] arr, int k) {
        HashMap<Integer,Integer> map = new HashMap<>();
        int n = arr.length;
        if(k == 1) return true;
        if(k < n && n % k != 0) return false;
        
        Arrays.sort(arr);
        
        for(int ele : arr) {
            map.put(ele,map.getOrDefault(ele,0) + 1);
        }
        
        for(int i = 0; i < n; ++i) {
            int freq = map.get(arr[i]);
            if(freq == 0) continue;
            map.put(arr[i],freq - 1);
            
            for(int j = 1; j < k; ++j) {
                int nextEle = arr[i] + j;
                if(map.containsKey(nextEle)) {
                    int val = map.get(nextEle);
                    if(val > 0)
                        map.put(nextEle,val - 1);
                    else return false;
                } else return false;
            }
        }
        
        return true;
    }
}