<h2><a href="https://www.geeksforgeeks.org/problems/josephus-problem/1">Josephus problem</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p data-pm-slice="1 1 []"><span style="font-size: 14pt;">You are playing a game with <strong>n</strong> people standing in a circle, numbered from <strong>1 </strong>to<strong> n</strong>. Starting from person 1, every <strong>k<sup>th</sup></strong> person is eliminated in a circular fashion. The process continues until only one person remains.</span><br><span style="font-size: 14pt;">Given integers n and k, return the <strong>position </strong>(1-based index) of the person who will survive.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples :</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>n = 5, k = 2
<strong>Output: </strong>3<strong>
Explanation: </strong>Firstly, the person at position 2 is killed, then the person at position 4 is killed, then the person at position 1 is killed. 
Finally, the person at position 5 is killed. So the person at position 3 survives. </span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>n = 7, k = 3
<strong>Output: </strong>4<strong>
Explanation: </strong>The elimination order is 3 → 6 → 2 → 7 → 5 → 1, and the person at position 4 survives.</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong></span><br><span style="font-size: 14pt;">1 ≤ n, k ≤ 500</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Walmart</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Recursion</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;