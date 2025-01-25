<h2><a href="https://www.geeksforgeeks.org/problems/max-sum-in-sub-arrays0824/0?category&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=max-sum-in-sub-arrays">Maximum Score from Subarray Minimums</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given an array <strong>arr[]</strong>, with 0-based indexing, select any two indexes, <strong>i</strong> and <strong>j</strong> such that <strong>i &lt; j</strong>. From the subarray <strong>arr[i...j]</strong>, select the <strong>smallest</strong> and <strong>second smallest&nbsp;</strong>numbers and add them, you will get the <strong>score </strong>for that subarray. Return the <strong>maximum </strong>possible score<strong> </strong>across all the subarrays of array <strong>arr[]</strong>.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples :</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input :</strong> arr[] = [4, 3, 1, 5, 6]
<strong>Output :</strong> 11
<strong>Explanation :</strong> Subarrays with smallest and second smallest are:- [4, 3] smallest = 3,second smallest = 4
[4, 3, 1] smallest = 1, second smallest = 3
[4, 3, 1, 5] smallest = 1, second smallest = 3
[4, 3, 1, 5, 6] smallest = 1, second smallest = 3
[3, 1] smallest = 1, second smallest = 3
[3, 1, 5] smallest = 1, second smallest = 3
[3, 1, 5, 6] smallest = 1, second smallest = 3
[1, 5] smallest = 1, second smallest = 5
[1, 5, 6] smallest = 1, second smallest = 5
[5, 6] smallest = 5, second smallest = 6
Maximum sum among all above choices is, 5 + 6 = 11.</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input :</strong> arr[] = [5, 4, 3, 1, 6] 
<strong>Output :</strong> 9</span></pre>
<p><span style="font-size: 14pt;"><strong>Expected Time Complexity:</strong> O(n)<br><strong>Expected Auxiliary Space:</strong> O(1)</span></p>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>2 ≤ arr.size ≤ 10<sup>5</sup><br>1 ≤ arr[i] ≤ 10<sup>6</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Stack</code>&nbsp;<code>Data Structures</code>&nbsp;