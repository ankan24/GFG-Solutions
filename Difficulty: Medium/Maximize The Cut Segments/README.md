<h2><a href="https://www.geeksforgeeks.org/problems/cutted-segments1642/1">Maximize The Cut Segments</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given an integer <strong>n</strong> denoting the Length of a line segment. You need to cut the line segment in such&nbsp;a way that the cut length of a line segment each time is either <strong>x</strong> , <strong>y</strong> or <strong>z</strong>. Here x, y, and z are integers.<br>After performing&nbsp;all the cut operations, your<strong> </strong>total number of cut segments must be maximum. Return the maximum number of cut segments possible.</span></p>
<p><span style="font-size: 14pt;"><strong>Note</strong>:&nbsp;if no segment can be cut then return 0.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>n = 4, x = 2, y = 1, z = 1
<strong>Output: </strong>4<strong>
Explanation: </strong>Total length is 4, and the cut lengths are 2, 1 and 1.&nbsp; We can make maximum 4 segments each of length 1.
</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>n = 5, x = 5, y = 3, z = 2
<strong>Output: </strong>2<strong>
Explanation: </strong>Here total length is 5, and the cut lengths are 5, 3 and 2. We can make two segments of lengths 3 and 2.<br></span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>n = 7, x = 8, y = 9, z = 10
<strong>Output: </strong>0<strong>
Explanation: </strong>Here the total length is 7, and the cut lengths are 8, 9, and 10. We cannot cut the segment into lengths that fully utilize the segment, so the output is 0.</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints</strong><br>1 &lt;= n, x, y, z &lt;= 10<sup>4</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>OYO Rooms</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Dynamic Programming</code>&nbsp;<code>Algorithms</code>&nbsp;