<h2><a href="https://www.geeksforgeeks.org/problems/find-rectangle-with-corners-as-1--141631/1">Find rectangle with corners as 1</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given an&nbsp;<strong><code data-start="97" data-end="104">n x m</code></strong>&nbsp;binary matrix&nbsp;<strong><code data-start="119" data-end="124">mat[][]</code></strong>&nbsp;containing only 0s and 1s, determine if there exists a rectangle within the matrix such that all four corners of the rectangle are 1. If such a rectangle exists, return&nbsp;<strong><code data-start="294" data-end="300" data-is-only-node="">true</code></strong>; otherwise, return&nbsp;<strong><code data-start="320" data-end="327">false</code></strong>.</span></p>
<p><strong><span style="font-size: 18px;">Example:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>mat[][] =<br>[[1, 0, 0, 1, 0],
[0, 0, <span style="color: rgb(255, 0, 0); --darkreader-inline-color: var(--darkreader-text-ff0000, #ff1515);" data-darkreader-inline-color="">1,</span> 0, <span style="color: rgb(255, 0, 0); --darkreader-inline-color: var(--darkreader-text-ff0000, #ff1515);" data-darkreader-inline-color="">1]</span>,
[0, 0, 0, 1, 0], 
[1, 0, <span style="color: rgb(255, 0, 0); --darkreader-inline-color: var(--darkreader-text-ff0000, #ff1515);" data-darkreader-inline-color="">1,</span> 0, <span style="color: rgb(255, 0, 0); --darkreader-inline-color: var(--darkreader-text-ff0000, #ff1515);" data-darkreader-inline-color="">1]</span>] </span>
<span style="font-size: 18px;"><strong>Output</strong>: true
<strong>Explanation: </strong>Valid corners are at index (1,2), (1,4), (3,2), (3,4) </span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>mat[][] =<br>[[0, 0, 0],
[0, 0, 0],
[0, 0, 0]]
<strong>Output: </strong>false<br><strong>Explanation: </strong>There are no valid corners.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= n, m &lt;= 200<br>0 &lt;= mat[i] &lt;= 1</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Matrix</code>&nbsp;<code>Data Structures</code>&nbsp;