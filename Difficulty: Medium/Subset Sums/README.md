<h2><a href="https://www.geeksforgeeks.org/problems/subset-sums2234/1">Subset Sums</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><div class="entry-content">
<p><span style="font-size: 14pt;">Given a array <strong><code>arr</code> </strong>of integers, return the sums of all subsets in the list.&nbsp; Return the sums in any order.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples:<br></strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [2, 3]
<strong>Output: </strong>[0, 2, 3, 5]
<strong>Explanation: </strong>When no elements are taken then Sum = 0. When only 2 is taken then Sum = 2. When only 3 is taken then Sum = 3. When elements 2 and 3 are taken then Sum = 2+3 = 5.</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [1, 2, 1]
<strong>Output: </strong>[0, 1, 1, 2, 2, 3, 3, 4]<br><strong>Explanation: </strong>The possible subset sums are 0 (no elements), 1 (either of the 1's), 2 (the element 2), and their combinations.</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [5, 6, 7]
<strong>Output: </strong>[0, 5, 6, 7, 11, 12, 13, 18]
<strong>Explanation: </strong>The possible subset sums are 0 (no elements), 5, 6, 7, and their combinations.</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 ≤ arr.size() ≤ 15<br>0 ≤ arr[i] ≤ 10<sup>4</sup></span></p>
</div></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Recursion</code>&nbsp;<code>Algorithms</code>&nbsp;