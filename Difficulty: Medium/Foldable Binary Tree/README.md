<h2><a href="https://www.geeksforgeeks.org/problems/foldable-binary-tree/0">Foldable Binary Tree</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a binary tree, check if the tree <strong>can be folded or not</strong>. A tree can be folded if left and right subtrees of the tree are <strong>structure wise mirror image of each other</strong>. An empty tree is considered as foldable.<br>
Consider the below trees:<br>
(a) and (b) can be folded.<br>
(c) and (d) cannot be folded.</span></p>

<div><br>
<span style="font-size:18px">(a)<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 10<br>
&nbsp;&nbsp;&nbsp;&nbsp; /&nbsp;&nbsp;&nbsp; \<br>
&nbsp;&nbsp;&nbsp; 7&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 15<br>
&nbsp;&nbsp;&nbsp;&nbsp; \&nbsp;&nbsp;&nbsp; /<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 9&nbsp; 11</span></div>

<div><span style="font-size:18px">(b)<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 10<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; /&nbsp; \<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 7&nbsp;&nbsp;&nbsp; 15<br>
&nbsp;&nbsp;&nbsp;&nbsp; /&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; \<br>
&nbsp;&nbsp;&nbsp; 9&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 11</span></div>

<div><span style="font-size:18px">(c)<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 10<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; /&nbsp; \<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 7&nbsp;&nbsp; 15<br>
&nbsp;&nbsp;&nbsp;&nbsp; /&nbsp;&nbsp;&nbsp; /<br>
&nbsp;&nbsp;&nbsp; 5&nbsp;&nbsp; 11</span></div>

<div><span style="font-size:18px">(d)</span></div>

<div><span style="font-size:18px">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 10<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; /&nbsp;&nbsp; \<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 7&nbsp;&nbsp;&nbsp;&nbsp; 15<br>
&nbsp;&nbsp;&nbsp; /&nbsp; \&nbsp;&nbsp;&nbsp; /<br>
&nbsp;&nbsp; 9&nbsp;&nbsp; 10&nbsp; 12</span></div>

<div>&nbsp;</div>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>&nbsp; &nbsp;&nbsp; 10
 &nbsp; &nbsp;/&nbsp;&nbsp; &nbsp;\
 &nbsp; 7&nbsp; &nbsp;&nbsp; 15
 /&nbsp; \&nbsp;  /&nbsp; \
N&nbsp; &nbsp;9&nbsp; 11&nbsp; &nbsp;N
<strong>Output:</strong>Yes
<strong>Explaination</strong>:Structure of every left and right subtree are same. </span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>&nbsp; &nbsp;   10
  &nbsp; /&nbsp; &nbsp; \
   7&nbsp; &nbsp; &nbsp;15
 /&nbsp; \&nbsp; &nbsp;/&nbsp; \
5&nbsp;&nbsp; N&nbsp; 11   N
<strong>Output: </strong>No
<strong>Explaination</strong>: 7's left child is not NULL and right child is NULL. That's why the tree is not foldable. <strong>

</strong></span>
</pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
The task is to complete the function <strong>isFoldable() </strong>that takes root of the tree as input and returns true or false depending upon whether the tree is foldable or not.</span></p>

<p dir="ltr"><span style="font-size:18px"><strong>Expected Time Complexity: </strong>O(N).<br>
<strong>Expected Auxiliary Space: </strong>O(Height of the Tree).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
0 &lt;= n &lt;= 10<sup>3</sup><br>
1 &lt;= data of node &lt;= 10<sup>4</sup></span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Expedia</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;