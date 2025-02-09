<h2><a href="https://www.geeksforgeeks.org/problems/remove-duplicates-from-a-sorted-doubly-linked-list/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=remove-duplicates-from-a-sorted-doubly-linked-list">Remove duplicates from a sorted doubly linked list</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a doubly&nbsp;linked list of <strong>n </strong>nodes sorted by values, the task is to remove duplicate nodes&nbsp;present in the linked list.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>n = 6<strong>
</strong>1&lt;-&gt;1&lt;-&gt;1&lt;-&gt;2&lt;-&gt;3&lt;-&gt;4
<strong>Output:
</strong>1&lt;-&gt;2&lt;-&gt;3&lt;-&gt;4
<strong>Explanation:</strong>
Only the first occurance of node with value 1 is 
retained, rest nodes with value = 1 are deleted.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>n = 7<strong>
</strong>1&lt;-&gt;2&lt;-&gt;2&lt;-&gt;3&lt;-&gt;3&lt;-&gt;4&lt;-&gt;4
<strong>Output:
</strong>1&lt;-&gt;2&lt;-&gt;3&lt;-&gt;4
<strong>Explanation:</strong>
Only the first occurance of nodes with values 2,3 and 4 are 
retained, rest repeating nodes are deleted.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You have to complete the method&nbsp;<strong>removeDuplicates</strong>() which takes <strong>1</strong>&nbsp;argument: the <strong>head</strong> of the linked list. &nbsp;Your function should&nbsp;return a pointer to a linked list with no duplicate</span>&nbsp;<span style="font-size:18px">element.</span></p>

<p><span style="font-size:18px"><strong>Constraint:</strong><br>
1 &lt;= n &lt;= 10<sup>5</sup><br>
<strong>Expected Time Complexity: </strong>O(n)<br>
<strong>Expected Space Complexity: </strong>O(1)</span></p>
</div>