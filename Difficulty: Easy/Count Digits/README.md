<h2><a href="https://www.geeksforgeeks.org/problems/count-digits5716/1">Count Digits</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given a positive integer <strong><code>n</code></strong>, count the number of digits in <code>n</code> that divide <code>n</code> evenly (i.e., without leaving a remainder). Return the total number of such digits.</span></p>
<blockquote>
<p><span style="font-size: 14pt;">A digit <code>d</code> of <code>n</code> divides <code>n</code> evenly if the remainder when <code>n</code> is divided by <code>d</code> is 0 (<code>n % d == 0</code>).</span><br><span style="font-size: 14pt;">Digits of <code>n</code> should be checked individually. If a digit is 0, it should be ignored because division by 0 is undefined.</span></p>
</blockquote>
<p><span style="font-size: 14pt;"><strong>Examples :</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>n = 12<strong>
Output: </strong>2<strong>
Explanation: </strong>1, 2 when both divide 12 leaves remainder 0.<br></span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>n = 2446<strong>
Output: </strong>1<strong>
Explanation: </strong>Here among 2, 4, 6 only 2 divides 2446 evenly while 4 and 6 do not.</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>n = 23<strong>
Output: </strong>0<strong>
Explanation: </strong>2 and 3, none of them divide 23 evenly.
</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1&lt;= n &lt;=10<sup>5</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Modular Arithmetic</code>&nbsp;<code>Algorithms</code>&nbsp;