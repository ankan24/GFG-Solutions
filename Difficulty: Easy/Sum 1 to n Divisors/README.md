<h2><a href="https://www.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1">Sum 1 to n Divisors</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a positive integer <strong>n,</strong> The task is to find the value of <strong>Σ<sub>i </sub></strong></span><span style="font-size: 18px;"><strong>F(i)</strong> where <strong>i is from 1 to n</strong> and function </span><em style="font-size: 18px;"><strong>F(i)</strong></em><span style="font-size: 18px;">&nbsp;is defined as the sum of all divisors of </span><strong style="font-size: 18px;">i</strong><span style="font-size: 18px;">.</span></p>
<p><strong><span style="font-size: 18px;">Examples:</span></strong></p>
<pre><strong><span style="font-size: 18px;">Input:</span></strong><span style="font-size: 18px;"> n = 4</span>
<strong><span style="font-size: 18px;">Output: </span></strong><span style="font-size: 18px;">15</span>
<span style="font-size: 18px;"><strong>Explanation:</strong>
F(1) = 1
F(2) = 1 + 2 = 3
F(3) = 1 + 3 = 4
F(4) = 1 + 2 + 4 = 7<br>So, F(1) + F(2) + F(3) + F(4)
    = 1 + 3 + 4 + 7 = 15<br></span></pre>
<pre><strong><span style="font-size: 18px;">Input:</span></strong><span style="font-size: 18px;"> n</span><span style="font-size: 18px;"> = 5</span>
<strong><span style="font-size: 18px;">Output: </span></strong><span style="font-size: 18px;">21</span>
<strong><span style="font-size: 18px;">Explanation:
</span></strong><span style="font-size: 18px;">F(1) = 1
F(2) = 1 + 2 = 3
F(3) = 1 + 3 = 4
F(4) = 1 + 2 + 4 = 7
F(5) = 1 + 5 = 6<br>So,  F(1) + F(2) + F(3) + F(4) + F(5)
    = 1 + 3 + 4 + 7 + 6 = 21</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>n = 1
<strong>Output: </strong>1
<strong>Explanation:
</strong>F(1) = 1<br>So,  F(1) = 1 </span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= n &lt;= 10<sup>5</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Mathematical</code>&nbsp;<code>Algorithms</code>&nbsp;