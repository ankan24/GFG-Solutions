<h2><a href="https://www.geeksforgeeks.org/problems/postorder-traversal-iterative/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=postorder-traversal-iterative">Iterative Postorder</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a binary tree. Find the postorder traversal of the tree <strong>without using recursion</strong>. R</span><span style="font-size: 18px;">eturn a list containing the postorder traversal of the tree, calculated</span><strong style="font-size: 18px;">&nbsp;without using recursion.</strong></p>
<p><span style="font-size: 18px;"><strong>Examples :</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
<strong>           </strong>1
<strong>         /   \</strong>
        2     3
      /  \
     4    5

<strong>Output: </strong>4 5 2 3 1
<strong>Explanation: </strong>Postorder traversal (Left-&gt;Right-&gt;Root) of the tree is 4 5 2 3 1.
</span></pre>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
             8
          /      \
        1          5
         \       /   \
          7     10    6
           \   /
&nbsp;           10 6

<strong>Output: </strong>10 7 1 6 10 6 5 8&nbsp;
<strong>Explanation: </strong>Postorder traversal (Left-&gt;Right-&gt;Root) of the tree is 10 7 1 6 10 6 5 8 .</span></pre>
<div>&nbsp;</div>
<div><span style="font-size: 18px;"><strong>Expected time complexity: </strong>O(n)</span></div>
<div><span style="font-size: 18px;"><strong>Expected auxiliary space: </strong>O(n)</span></div>
<div>&nbsp;</div>
<div><span style="font-size: 18px;"><strong>Constraints:</strong></span></div>
<div><span style="font-size: 18px;">1 &lt;= Number of nodes &lt;= 10<sup>5</sup><br>1 &lt;= Data of a node &lt;= 10<sup>5</sup></span></div></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Stack</code>&nbsp;<code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;