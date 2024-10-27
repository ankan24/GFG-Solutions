<h2><a href="https://www.geeksforgeeks.org/problems/count-non-leaf-nodes-in-tree/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card">Count Non-Leaf Nodes in Tree</a></h2><h3>Difficulty Level : Difficulty: Basic</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a Binary Tree of size <strong>n</strong>, your task is to return the count of all the non-leaf nodes of the given binary tree.</span></p>
<pre><span style="font-size: 18px;"><strong>Example:</strong></span><br><br><span style="font-size: 18px;"><strong style="font-size: 18px;">Input:</strong><span style="font-size: 18px;"> 
<input style="height: 156px; width: 259px;" alt="Image" src="https://contribute.geeksforgeeks.org/wp-content/uploads/tree121.gif" type="image"></span></span><br><span style="font-size: 18px;"><strong style="font-size: 18px;">Output: </strong><span style="font-size: 18px;">2
</span><strong style="font-size: 18px;">Explanation: </strong><span style="font-size: 18px;">Nodes 1 and 2 are the only non leaf nodes.</span></span></pre>
<pre><span style="font-size: 18px;"><strong style="font-size: 18px; font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">Input:</strong><span style="font-size: 18px; font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;"> </span></span><br><span style="font-size: 18px;"><span style="font-size: 18px;"><span style="font-size: 18px;">          8
        /   \
       3     9
      / \
     1   6
        / \
       4   7
</span><strong style="font-size: 18px;">Output: </strong><span style="font-size: 18px;">3
</span><strong style="font-size: 18px;">Explanation: </strong><span style="font-size: 18px;">Nodes 8, 3 and 6 are the only non leaf nodes.</span></span></span></pre>
<pre><span style="font-size: 18px;"><span style="font-size: 18px;"><strong style="font-size: 18px;">Input:</strong><span style="font-size: 18px;"> <br>          10
        /    \
      5       20
     / \     /  \
    3   7   15   25
</span><strong style="font-size: 18px;">Output: </strong><span style="font-size: 18px;">3
</span><strong style="font-size: 18px;">Explanation: </strong><span style="font-size: 18px;">Nodes 10, 5 and 20 are the only non leaf nodes.</span></span></span></pre>
<p><span style="font-size: 18px;"><span style="font-size: 14pt;"><strong style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">Constraints:<br></strong><span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">1 ≤ number of nodes ≤ 10</span><sup style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">5<br></sup><span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">1 ≤ node-&gt;data ≤ 10</span><sup style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">5</sup></span></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;