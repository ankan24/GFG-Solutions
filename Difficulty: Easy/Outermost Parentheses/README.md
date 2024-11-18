<h2><a href="https://www.geeksforgeeks.org/problems/outermost-parentheses/1">Outermost Parentheses</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">A valid parentheses string is either empty&nbsp;<code>""</code>,&nbsp;<code>"(" + X&nbsp;+ ")"</code>, or X<code>&nbsp;+ Y</code>, where X&nbsp;and Y&nbsp;are valid parentheses strings, and&nbsp;<code>+</code>&nbsp;represents string concatenation.</span></p>

<p><span style="font-size:18px">For example,&nbsp;<code>""</code>,&nbsp;<code>"()"</code>,&nbsp;<code>"(())()"</code>, and&nbsp;<code>"(()(()))"</code>&nbsp;are all valid parentheses strings.</span></p>

<p><span style="font-size:18px">A valid parentheses string&nbsp;<code>s</code>&nbsp;is primitive if it is nonempty, and there does not exist a way to split it into&nbsp;<code>s = X&nbsp;+ Y</code>, with X&nbsp;and Y&nbsp;nonempty valid parentheses strings.</span></p>

<p><span style="font-size:18px">Given a valid parentheses string&nbsp;<code>s</code>, consider its primitive decomposition:&nbsp;<code>s = P<sub>1</sub>&nbsp;+ P<sub>2</sub>&nbsp;+ ... + P<sub>k</sub></code>, where&nbsp;<code>P<sub>i</sub></code>&nbsp;are primitive valid parentheses strings.</span></p>

<p><span style="font-size:18px">Return&nbsp;<code>s</code>&nbsp;after removing the outermost parentheses of every primitive string in the primitive decomposition of&nbsp;<code>s</code>.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
s = "(()())(())"
<strong>Output:</strong>
"()()()"
<strong>Explanation:</strong>
</span><span style="font-size:18px">The input string is "(()())(())", with primitive decomposition "(()())" + "(())".
After removing outer parentheses of each part, this is "()()" + "()" = "()()()".</span>

<span style="font-size:18px"><strong>Example 2:
</strong>
<strong>Input:</strong>
s = "()()"
<strong>Output:</strong>
""
<strong>Explanation:</strong>
</span><span style="font-size:18px">The input string is "()()", with primitive decomposition "()" + "()".
After removing outer parentheses of each part, this is "" + "" = "".</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function<strong> removeOuter()</strong>&nbsp;which takes a string s&nbsp;as inputs and returns s&nbsp;&nbsp;after removing the outermost parentheses of every primitive string in the primitive decomposition of&nbsp;<code>s</code>&nbsp;.&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(n)<br>
<strong>Expected Space Complexity:</strong> O(n)</span></p>

<p><strong><span style="font-size:18px">Constraint:</span></strong><br>
<span style="font-size:18px">1 &lt;= s.length &lt;= 10<sup>5</sup><br>
s[i] is either '(' or ')'<br>
<code>s</code>&nbsp;is a valid parentheses string.</span></p>
</div>