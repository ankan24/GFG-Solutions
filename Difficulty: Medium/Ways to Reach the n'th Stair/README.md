<h2><a href="https://www.geeksforgeeks.org/problems/count-ways-to-reach-the-nth-stair-1587115620/1">Ways to Reach the n'th Stair</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">There are<strong> n</strong> stairs, a person standing at the bottom wants to reach the top. The person can climb either <strong>1 stair or 2 stairs at a time</strong>. Count the number of ways, the person can reach the top (<strong>order does matter</strong>).</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>n = 4
<strong>Output: </strong>5<strong>
Explanation: </strong>You can reach 4th stair in 5 ways.</span> 
<span style="font-size: 18px;">Way 1: Climb 2 stairs at a time. </span>
<span style="font-size: 18px;">Way 2: Climb 1 stair at a time.</span>
<span style="font-size: 18px;">Way 3: Climb 2 stairs, then 1 stair and then 1 stair.</span>
<span style="font-size: 18px;">Way 4: Climb 1 stair, then 2 stairs then 1 stair.</span>
<span style="font-size: 18px;">Way 5: Climb 1 stair, then 1 stair and then 2 stairs.</span>
</pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>n = 10
<strong>Output: </strong>89 
<strong>Explanation: </strong>There are 89 ways to reach the 10th stair.</span>
</pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>n = 3
<strong>Output: </strong>3
<strong>Explanation: </strong>There are 3 ways to reach the 3th stair.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ n ≤ 32</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>OYO Rooms</code>&nbsp;<code>Adobe</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>sliding-window</code>&nbsp;<code>Dynamic Programming</code>&nbsp;<code>Mathematical</code>&nbsp;<code>Algorithms</code>&nbsp;