<h2><a href="https://www.geeksforgeeks.org/problems/count-pairs-whose-sum-is-less-than-target/1">Count Pairs whose sum is less than target</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array&nbsp;<strong>arr[]</strong>&nbsp;and an integer&nbsp;<strong>target</strong>.&nbsp;</span><span style="background-color: #ffffff; color: #273239; font-family: Nunito, sans-serif; font-size: 18px; letter-spacing: 0.162px; text-align: justify;">You have to find the number of pairs in the array whose sum is strictly less than the&nbsp;<strong>target</strong>.</span></p>
<p><strong style="font-size: 18px;">Examples:</strong></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong></span><span style="font-size: 18px;">arr[] = [7, 2, 5, 3], target = 8</span><span style="font-size: 18px;">
<strong>Output: </strong>2<strong>
Explanation: </strong></span><span style="font-size: 18px;">There are 2 pairs with sum less than 8: (2, 5) and (2, 3). </span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [5, 2, 3, 2, 4, 1], target = 5
<strong>Output: </strong>4<strong>
Explanation: </strong></span><span style="font-size: 18.6667px;">There are 4 pairs whose sum is less than 5: (2, 2), (2, 1), (3, 1) and (2, 1).<br></span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [2, 1, 8, 3, 4, 7, 6, 5], target = 7
<strong>Output: </strong>6<strong>
Explanation: </strong></span><span style="font-size: 18.6667px;">There are 6 pairs whose sum is less than 7: (2, 1), (2, 3), (2, 4), (1, 3), (1, 4) and (1, 5).</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:<br></strong>1 &lt;= arr.size() &lt;= 10<sup>5</sup><strong><br></strong></span><span style="font-size: 18px;">0 &lt;= arr[i]&nbsp;</span><span style="font-size: 18px;">&lt;= 10<sup>4</sup></span><span style="font-size: 18px;"><br></span><span style="font-size: 18px;">1 &lt;= target &lt;= 10<sup>4</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Sorting</code>&nbsp;<code>two-pointer-algorithm</code>&nbsp;<code>Arrays</code>&nbsp;