<h2><a href="https://www.geeksforgeeks.org/problems/nodes-at-odd-levels/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card">Nodes at Odd Levels</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given a binary tree, find all the nodes at odd levels. Return in sorted order. The root is considered at level 1.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input:</strong> root = [1, 2, 3, 4, 5, N, 6, N, N, 7, 8, 9]
          1
       /     \
      2       3
    /   \       \
   4     5       6
        /  \     /
       7    8   9
<strong>Output:</strong>  [1, 4, 5, 6]<br><strong>Explanation: </strong>The odd levels are 1 and 3 and thier node are 1 and 4 5 6 respectively. </span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>root = [1, 2, 3, 4, 5, N, 6, N, N, 7, 8, 9]
          1
&nbsp;      /     \
&nbsp;    2        3
&nbsp;  /   \    /   \
&nbsp; 4     5  6     7 
<strong>Output: </strong>[1, 4, 5, 6, 7]<br><strong>Explanation:<span style="font-size: 14pt;"> </span></strong>The odd levels are 1 and 3 and thier node are 1 and 4 5 6 7 respectively. </span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>root = [1, 2, 3, 4, 5, 8, 7]
          1
&nbsp;      /     \
&nbsp;    2        3
&nbsp;  /   \    /   \
&nbsp; 4     5  8     7
<strong>Output: </strong>[1, 4, 5, 7, 8]<br><strong>Explanation:<span style="font-size: 14pt;"> </span></strong>The odd levels are 1 and 3 and thier node are 1 and 4 5 8 7 respectively. </span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 &lt;= number of nodes &lt;= 10<sup>3</sup></span><br><span style="font-size: 14pt;">1 &lt;= node-&gt;data &lt;= 10<sup>3</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Accolite</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;