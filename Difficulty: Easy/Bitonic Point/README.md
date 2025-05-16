<h2><a href="https://www.geeksforgeeks.org/problems/maximum-value-in-a-bitonic-array3001/1">Bitonic Point</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given an array of integers <strong>arr[] </strong>that is first <strong>strictly increasing </strong>and then maybe <strong>strictly decreasing</strong>, find the <strong>bitonic point</strong>, that is the maximum element in the array.<br>Bitonic Point is a point before which elements are strictly increasing and after which elements are strictly decreasing.</span></p>
<p><span style="font-size: 14pt;"><strong>Note:</strong> It is guaranteed that the array contains <strong>exactly one</strong> bitonic point.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [1, 2, 4, 5, 7, 8, 3]
<strong>Output:</strong> 8
<strong>Explanation:</strong> Elements before 8 are strictly increasing [1, 2, 4, 5, 7] and elements after 8 are strictly decreasing [3].</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [10, 20, 30, 40, 50]
<strong>Output:</strong> 50
<strong>Explanation:</strong> Elements before 50 are strictly increasing [10, 20, 30 40] and there are no elements after 50.<br></span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [120, 100, 80, 20, 0]
<strong>Output:</strong> 120
<strong>Explanation:</strong> There are no elements before 120 and elements after 120 are strictly decreasing [100, 80, 20, 0].</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>3 ≤ arr.size() ≤ 10<sup>5</sup><br>1 ≤ arr[i] ≤ 10<sup>6</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Searching</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;<code>Binary Search</code>&nbsp;