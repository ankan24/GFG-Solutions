<h2><a href="https://www.geeksforgeeks.org/problems/search-in-a-rotated-array4618/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card">Search in Rotated Sorted Array</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a sorted (in ascending order) and rotated array <strong>arr</strong> of distinct elements which may be rotated at some point and given an element <strong>key, </strong>the task is to find the index of the given element <strong>key</strong> in the array <strong>arr</strong>. The whole array </span><strong style="font-size: 18px;">arr </strong><span style="font-size: 18px;">is given as the range to search.</span></p>
<blockquote>
<p><span style="font-size: 18px;"><span style="font-size: 18px;">Rotation shifts elements of the array by a certain number of positions, with elements that fall off one end reappearing at the other end.</span></span></p>
</blockquote>
<p><span style="font-size: 18px;">Note:- 0-based indexing is followed &amp; returns <strong>-1</strong> if the key is not present.</span></p>
<p><span style="font-size: 18px;"><strong>Examples :</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [5, 6, 7, 8, 9, 10, 1, 2, 3], key = 10
<strong>Output</strong>: 5
<strong>Explanation</strong>: 10 is found at index 5.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input</strong>: arr[] = [3, 5, 1, 2], key = 6</span><span style="font-size: 18px;"><strong>
Output</strong>: -1</span><span style="font-size: 18px;"><strong>
Explanation</strong>: There is no element that has value 6.<br></span></pre>
<pre><span style="font-size: 14pt;"><strong>Input</strong>: arr[] = [33, 42, 72, 99], key = 42<strong>
Output</strong>: 1<strong>
Explanation</strong>: 42 is found at index 1.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints</strong>:<br>1 ≤ arr.size() ≤ 10<sup>6</sup><br>0 ≤ arr[i] ≤ 10<sup>6</sup><br>1 ≤ key ≤ 10<sup>5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Paytm</code>&nbsp;<code>Flipkart</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Snapdeal</code>&nbsp;<code>D-E-Shaw</code>&nbsp;<code>FactSet</code>&nbsp;<code>Hike</code>&nbsp;<code>MakeMyTrip</code>&nbsp;<code>Intuit</code>&nbsp;<code>Adobe</code>&nbsp;<code>Google</code>&nbsp;<code>BankBazaar</code>&nbsp;<code>Times Internet</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Searching</code>&nbsp;<code>Divide and Conquer</code>&nbsp;<code>Algorithms</code>&nbsp;