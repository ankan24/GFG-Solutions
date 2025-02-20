<h2><a href="https://www.geeksforgeeks.org/problems/floor-in-bst/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=floor-in-bst">Floor in BST</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">You are given a BST(Binary Search Tree) with <strong>n</strong>&nbsp;number of nodes and value <strong>x</strong>. your task is to find the greatest value node of the BST which is smaller than or equal to x.<br><strong>Note:</strong> when x is smaller than the smallest node of BST then returns -1.</span></p>
<p><strong><span style="font-size: 18px;">Examples:</span></strong></p>
<pre><strong><span style="font-size: 18px;">Input:</span></strong><span style="font-size: 18px;">
n = 7               2
                     \
                      81
                    /     \
                 42       87
                   \       \
                    66      90
                   /
                 45
x = 87
<strong>Output: </strong>87
<strong>Explanation: </strong>87 is present in tree so floor will be 87.</span>
</pre>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
n = 4                     6
                           \
                            8
                          /   \
                        7       9
x = 11
<strong>Output: </strong>9</span>
</pre>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
n = 4                     6
                           \
                            8
                          /   \
                        7       9
x = 5
<strong>Output: </strong>-1<br></span></pre>
<p><strong><span style="font-size: 18px;">Constraint:</span></strong><br><span style="font-size: 18px;">1 &lt;= Noda data &lt;= 10<sup>9</sup><br>1 &lt;= n &lt;= 10<sup>5</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Binary Search Tree</code>&nbsp;<code>Data Structures</code>&nbsp;