<h2><a href="https://www.geeksforgeeks.org/problems/ceil-the-floor2802/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=ceil-the-floor">Ceil The Floor</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p style="text-align: left;"><span style="font-size: 18px;">Given an unsorted array <strong>arr[]</strong> of integers and an integer <strong>x</strong>, find the floor and ceiling of <strong>x</strong> in <strong>arr[]</strong>.</span></p>
<blockquote>
<p><span style="font-size: 18px;"><strong>Floor</strong>&nbsp;of <strong>x</strong> is the largest element which is smaller than or equal to <strong>x</strong>. Floor of <strong>x</strong>&nbsp;doesn’t exist if <strong>x</strong> is smaller than smallest element of <strong>arr[]</strong>.<br></span><span style="font-size: 18px;"><strong>Ceil</strong>&nbsp;of <strong>x</strong>&nbsp;is the smallest element which is greater than or equal to <strong>x</strong>. Ceil of <strong>x</strong>&nbsp;doesn’t exist if <strong>x</strong> is greater than greatest element of <strong>arr[]</strong>.</span></p>
</blockquote>
<p><span style="font-size: 18px;">Return an array of integers denoting the <code>[floor, ceil]</code>. Return <code>-1</code> for floor or ceiling if the floor or ceiling is not present.</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>x = 7 , arr[] = [5, 6, 8, 9, 6, 5, 5, 6]
<strong>Output:</strong> 6, 8
<strong>Explanation: </strong>Floor of 7 is 6 and ceil of 7 is 8.
</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>x = 10 , arr[] = [5, 6, 8, 8, 6, 5, 5, 6]
<strong>Output:</strong> 8, -1
<strong>Explanation: </strong>Floor of 10 is 8 but ceil of 10 is not possible.
</span></pre>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(n)<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints :</strong><br>1 ≤ arr.size ≤ 10<sup>5</sup><br>1 ≤ arr[i], x ≤ 10<sup>6</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;