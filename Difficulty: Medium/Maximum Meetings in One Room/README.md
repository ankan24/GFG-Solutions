<h2><a href="https://www.geeksforgeeks.org/problems/maximum-meetings-in-one-room/0">Maximum Meetings in One Room</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">There is one meeting room in a firm. There are&nbsp;<strong>N</strong>&nbsp;meetings in the form of&nbsp;<strong>(S[i], F[i])</strong>&nbsp;where&nbsp;<strong>S[i]</strong>&nbsp;is the start time of meeting&nbsp;<strong>i</strong>&nbsp;and&nbsp;<strong>F[i]</strong>&nbsp;is the finish time of meeting&nbsp;<strong>i</strong>. The task is to find the <strong>maximum</strong> number of meetings that can be accommodated in the meeting room. You can accommodate a meeting if the start time of the meeting is strictly greater than the finish&nbsp;time of the previous meeting. Print all meeting numbers.</span></p>
<p><span style="font-size: 18px;"><strong>Note: </strong>If two meetings can be chosen for the same slot then choose meeting that <strong>finishes earlier</strong>.</span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><strong><span style="font-size: 18px;">Input:
</span></strong><span style="font-size: 18px;">N = 6
S = {1,3,0,5,8,5}
F = {2,4,6,7,9,9} </span><strong><span style="font-size: 18px;">
Output:
</span></strong><span style="font-size: 18px;">{1,2,4,5}</span><strong><span style="font-size: 18px;">
Explanation:
</span></strong><span style="font-size: 18px;">We can attend the 1st meeting from (1 to 2), then the 2nd meeting from (3 to 4), then the 4th meeting from (5 to 7), and the last meeting we can attend is the 5th from (8 to 9). It can be shown that this is the maximum number of meetings we can attend.</span></pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><strong><span style="font-size: 18px;">Input:</span></strong>
<span style="font-size: 18px;">N = 1
S = {3}
F = {7}</span>
<strong><span style="font-size: 18px;">Output:</span></strong>
<span style="font-size: 18px;">{1}</span>
<strong><span style="font-size: 18px;">Explanation:</span></strong>
<span style="font-size: 18px;">Since there is only one meeting, we can attend the meeting.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong></span></p>
<p><span style="font-size: 18px;">You don't need to read input or print anything. Your task is to complete the function <strong>maxMeetings()</strong>&nbsp;which takes the arrays <strong>S</strong>, <strong>F,</strong>&nbsp;and its size <strong>N&nbsp;</strong>as inputs and returns the meeting numbers we can attend in <strong>sorted order</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(N*log(N))<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(N)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= N&nbsp;&lt;= 10<sup>5</sup><br>0 &lt;= S[i] &lt;= F[i] &lt;= 10<sup>9</sup><br>Sum of N over all test cases doesn't exceeds 10<sup>6</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Greedy</code>&nbsp;<code>Sorting</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;