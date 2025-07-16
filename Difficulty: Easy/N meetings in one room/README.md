<h2><a href="https://www.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1">N meetings in one room</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">You are given timings of <strong>n</strong> meetings in the form of <strong>(start[i], end[i])</strong> where start[i]<strong>&nbsp;</strong>is the start time of meeting <strong>i </strong>and end[i]<strong> </strong>is the finish time of meeting <strong>i. </strong>Return&nbsp;the <strong>maximum</strong> number of meetings that can be accommodated in a single meeting room, when only one meeting can be held in the meeting room at a particular time.&nbsp;</span></p>
<p><span style="font-size: 14pt;"><strong>Note:</strong> The start time of one chosen meeting can't be equal to the end time of the other chosen meeting.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples :</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>start[] = [1, 3, 0, 5, 8, 5], end[] =  [2, 4, 6, 7, 9, 9]
<strong>Output: </strong>4<strong>
Explanation: </strong>Maximum four meetings can be held with given start and end timings. The meetings are - (1, 2), (3, 4), (5,7) and (8,9)
</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>start[] = [10, 12, 20], end[] = [20, 25, 30]
<strong>Output: </strong>1<strong>
Explanation: </strong>Only one meetings can be held with given start and end timings.</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>start[] = [1, 2], end[] = [100, 99]
<strong>Output: </strong>1</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong></span><br><span style="font-size: 14pt;">1 ≤ n ≤ 10<sup>5</sup></span><br><span style="font-size: 14pt;">0 ≤ start[i] &lt; end[i] ≤ 10<sup>6</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>MakeMyTrip</code>&nbsp;<code>Cisco</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Greedy</code>&nbsp;<code>Algorithms</code>&nbsp;