class Solution {
    public static ArrayList<Integer> findUnion(int[] a, int[] b) {
        HashSet <Integer> hs = new HashSet<>();
        for(int i=0;i<a.length;i++){
            hs.add(a[i]);
        }
        for (int j=0;j<b.length;j++){
            hs.add(b[j]);
        }
        ArrayList<Integer> al = new ArrayList<>(hs);
        return al;
        

    }
}