<h2><a href="https://www.geeksforgeeks.org/problems/check-frequencies4211/1">Check if frequencies can be equal</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given a string <strong>s</strong> consisting only lowercase alphabetic characters, check whether it is possible to remove <strong>at most one character</strong> such that the&nbsp; frequency of each distinct character in the string becomes same. Return <strong>true</strong> if it is possible; otherwise, return <strong>false</strong>.<br></span></p>
<p><span style="font-size: 14pt;"><strong>Examples:<br></strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>s = "xyyz"
<strong>Output:</strong> true 
<strong>Explanation:</strong> Removing one 'y' will make frequency of each distinct character to be 1.<br></span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>s = "xyyzz"<br><strong>Output: </strong>true
<strong>Explanation:</strong> Removing one 'x' will make frequency of each distinct character to be 2.</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>s = "xxxxyyzz"
<strong>Output: </strong>false
<strong>Explanation:</strong> Frequency can not be made same by removing at most one character.</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 ≤ s.size() ≤ 10<sup>5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Zoho</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Hash</code>&nbsp;<code>Strings</code>&nbsp;<code>Data Structures</code>&nbsp;