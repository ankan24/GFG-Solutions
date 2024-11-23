<h2><a href="https://www.geeksforgeeks.org/problems/search-in-rotated-array-2/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=search-in-rotated-array">Search in Rotated Array 2</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given a sorted and rotated array <strong>arr</strong> and a target key <strong>k</strong> which is rotated at some point, and may contain duplicates and given an element key. Check whether the key is present in the array or not.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [2, 5, 6, 0, 0, 1, 2], k = 0
<strong>Output</strong>: true
<strong>Explanation</strong>: 0 is found at index 3.</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input</strong>: arr[] = [2, 5, 6, 0, 0, 1, 2], k = 3<strong>
Output</strong>: false<strong>
Explanation</strong>: There is no element that has value 3.</span></pre>
<p><span style="font-size: 14pt;"><strong>Expected Time Complexity: </strong>O(logn)<strong><br>Expected Auxilary Space: </strong>O(1)</span></p>
<p><span style="font-size: 14pt;"><strong>Constraints</strong>:</span><br><span style="font-size: 14pt;">1 ≤ arr.size() ≤ 10<sup>6</sup></span><br><span style="font-size: 14pt;">0 ≤ arr[i] ≤ 10<sup>8</sup></span><br><span style="font-size: 14pt;">1 ≤ key ≤ 10<sup>8</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Binary Search</code>&nbsp;<code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;