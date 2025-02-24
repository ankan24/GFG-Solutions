<h2><a href="https://www.geeksforgeeks.org/problems/children-sum-parent/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=hildren-sum-parent">Children Sum in a Binary Tree</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a binary tree having <strong>n</strong> nodes. Check whether all of its nodes have a value equal to the sum of their child nodes.</span><span style="font-size: 18px;">&nbsp;R</span><span style="font-size: 18px;">eturn 1 if all the nodes in the tree satisfy the given properties, else it returns 0. </span><span style="font-size: 18px;">For every node, the data value must be equal to the sum of the data values in the left and right children. Consider the data value 0 for a NULL child. Also, leaves are considered to follow the property.</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong style="font-size: 18px;">Input:<br></strong><span style="font-size: 18px;">Binary tree
       35
      /  \
     20   15
    / \   / \
   15  5 10  5

</span><strong style="font-size: 18px;">Output: </strong><span style="font-size: 18px;">1</span><strong style="font-size: 18px;">
Explanation: <br></strong><span style="font-size: 18px;">Here, every node is sum of its left and right child.</span></span></pre>
<pre><span style="font-size: 18px;"><strong>Input:<br></strong>Binary tree
       1
     /   \
&nbsp;   4     3
&nbsp;  /  
&nbsp; 5    
<strong>Output: </strong>0<strong>
Explanation: <br></strong>Here, 1 is the root node and 4, 3 are its child nodes. 4 + 3 = 7 which is not equal to the value of root node. Hence, this tree does not satisfy the given condition.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input:</strong></span><br><span style="font-size: 18.6667px;">Binary tree
       10
      /  \
     4    6
    / \  / \
   1   3 2  4
</span><br><span style="font-size: 18px;"><strong>Output: </strong></span><span style="font-size: 18px;">1</span><br><span style="font-size: 18px;"><strong>Explanation: </strong></span><br><span style="font-size: 18px;">Here, every node is a sum of its left and right child.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= number of nodes &lt;= 10<sup>5</sup><br>0 &lt;= node-&gt;data &lt;= 10<sup>5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Intuit</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;