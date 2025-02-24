<h2><a href="https://www.geeksforgeeks.org/problems/unique-binary-tree-requirements/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=unique-binary-tree-requirements">Unique Binary Tree Requirements</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Geek wants to know the traversals required to construct a <strong>unique binary tree</strong>.</span>&nbsp;<span style="font-size:18px">Given a pair of traversal, return <strong>true</strong> if it is possible to construct unique binary tree from the given traversals otherwise return <strong>false</strong>.</span></p>

<p><span style="font-size:18px">Each traversal is represented with an integer:&nbsp;preorder - 1, inorder - 2, postorder - 3.&nbsp;&nbsp;&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
a = 1, b=2
<strong>Output:</strong> 1
<strong>Explanation: </strong>We can construct binary tree using inorder traversal and preorder traversal. 
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong> a = 1, b=3
<strong>Output:</strong> 0 
<strong>Explanation: </strong>We cannot construct binary tree using preorder traversal and postorder traversal. </span></pre>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= a,b &lt;=3</span></p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>isPossible()</strong> which takes <strong>a</strong> and <strong>b</strong>&nbsp;as input parameters and returns <strong>true</strong> or <strong>false</strong>.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(1)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Traversal</code>&nbsp;<code>Algorithms</code>&nbsp;