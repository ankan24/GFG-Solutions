<h2><a href="https://www.geeksforgeeks.org/problems/generate-all-binary-strings/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card">Generate all binary strings</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an integer <strong>N</strong>&nbsp;, Print all binary strings of size N&nbsp;which do not contain&nbsp;consecutive 1s.</span></p>
<p><span style="font-size: 18px;">A binary string is that string which contains only 0 and 1.</span></p>
<pre><span style="font-size: 18px;"><strong>Example 1:</strong></span>

<span style="font-size: 18px;"><strong>Input:</strong>
N = 3
<strong>Output:</strong>
000 , 001 , 010 , 100 , 101
<strong>Explanation:</strong>
None of the above strings contain consecutive 1s. "110" is not an answer as it has '1's occuring consecutively. </span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong></span></p>
<p><span style="font-size: 18px;">You don't need to read input or print anything. Your task is to complete the function<strong> generateBinaryStrings()</strong>&nbsp;which takes an integer <strong>N </strong>as input and&nbsp;returns a list of all valid binary strings in lexicographically increasing order.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(2<sup>N</sup>)<br><strong>Expected Auxiliary Space:</strong> O(N)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= N &lt;= 20</span></p></div>