<h2><a href="https://www.geeksforgeeks.org/problems/root-to-leaf-paths/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=root-to-leaf-paths">Root to Leaf Paths</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;"><span style="font-size: 18px;">Given a <strong>Binary Tree</strong>, you need to <strong>find all the possible paths</strong> from the <strong>root node</strong> to all the <strong>leaf nodes</strong> of the binary tree. </span></span></p>
<p><span style="font-size: 18px;"><span style="font-size: 18px;"><strong>Note:</strong> The paths should be returned such that paths from the left subtree of any node are listed first, followed by paths from the right subtree.</span></span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>root[] = [1, 2, 3, 4, 5]
<img src="https://media.geeksforgeeks.org/wp-content/uploads/20241007105251989873/ex-3.webp" alt="ex-3" width="276" height="245">
<strong>Output: </strong>[[1, 2, 4], [1, 2, 5], [1, 3]] 
<strong>Explanation: </strong>All possible paths: 1-&gt;2-&gt;4, 1-&gt;2-&gt;5 and 1-&gt;3</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>root[] = [1, 2, 3]
       1
    /     \
   2       3
<strong>Output: </strong>[[1, 2], [1, 3]] 
<strong>Explanation: </strong>All possible paths: 1-&gt;2 and 1-&gt;3</span>
</pre>
<pre><span style="font-size: 18px;"><strong>Input:</strong> root[] = [10, 20, 30, 40, 60]
&nbsp;        10
&nbsp;      /    \
&nbsp;     20    30
&nbsp;    /  \
&nbsp;   40   60<strong>
Output: </strong>[[10, 20, 40], [10, 20, 60], [10, 30]]<br></span><strong style="font-size: 18px; font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">Explanation: </strong><span style="font-size: 18px; font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">All possible paths: 10-&gt;20 -&gt;40, 10-&gt;20-&gt;60 and 10-&gt;30</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1&lt;=number of nodes&lt;=10<sup>4<br></sup>1&lt;=node-&gt;data&lt;=10<sup>4</sup><sup><br></sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Paytm</code>&nbsp;<code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Recursion</code>&nbsp;<code>Arrays</code>&nbsp;<code>Binary Search Tree</code>&nbsp;