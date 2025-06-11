class Solution {
    public int findLength(int[] color, int[] radius) {
       Stack<Integer> st=new Stack<>();
      
       int len=color.length;
       for(int i=0;i<len;i++)
       {
           st.add(i);
           if(st.size()>=2)
           {
               int index1=st.peek();
               st.pop();
               int index2=st.peek();
               st.pop();
                if(!(color[index1]==color[index2] && radius[index1]==radius[index2]))
                    {
                        st.push(index2);
                        st.push(index1);
                    }
            
           }
       }
        return st.size();
    }
}