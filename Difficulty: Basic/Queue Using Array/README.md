<h2><a href="https://www.geeksforgeeks.org/problems/implement-queue-using-array/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=implement-queue-using-array">Queue Using Array</a></h2><h3>Difficulty Level : Difficulty: Basic</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Implement a Queue using an Array. Queries in the Queue are of the following type:<br><strong>(i)</strong>&nbsp;1 x&nbsp; &nbsp;(a query of this type means&nbsp;&nbsp;pushing&nbsp;<strong>'x'</strong>&nbsp;into the queue)<br><strong>(ii)</strong> 2 &nbsp; &nbsp; (a query of this type means to pop an element from the queue and print the popped element. If the queue is empty then return -1)</span></p>
<p><span style="font-size: 18px;">We just have to implement the functions <strong>push </strong>and <strong>pop </strong>and the driver code will handle the output. </span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>Queries = 1 2 1 3 2 1 4 2
<strong>Output: </strong>2&nbsp;3<strong>
Explanation: </strong>For query 1 2 the queue will be {2} 1 3 the queue will be {2 3} 2 &nbsp; poped element will be 2 the queue will be {3} 1 4 the queue will be {3 4} 2 poped element will be 3 </span>
</pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>Queries = 1 3 2 2 1 4 &nbsp; 
<strong>Output: </strong>3 -1<strong>
Explanation: </strong>For query 1 3 the queue will be {3} 2 poped element will be 3 the queue will be empty 2 there is no element in the queue and hence -1 1 4 the queue will be {4}. </span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>Queries = 1 3 2 2 1 3 &nbsp; 
<strong>Output: </strong>3 -1<strong>
Explanation: </strong><span style="font-size: 14pt;">For query 1 3 the queue will be {3} 2 poped element will be 3 the queue will be empty 2 there is no element in the queue and hence -1 1 3 the queue will be {3} a</span></span><span style="font-size: 14pt;">nd hence -1 1 3 the queue will be {3}.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ number of query≤ 10<sup>5</sup><br>0 ≤ x<strong> </strong>≤ 10<sup>5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Goldman Sachs</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Queue</code>&nbsp;<code>Data Structures</code>&nbsp;