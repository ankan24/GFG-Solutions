<h2><a href="https://www.geeksforgeeks.org/problems/huffman-encoding3345/1">Huffman Encoding</a></h2><h3>Difficulty Level : Difficulty: Hard</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a string <strong>S</strong>&nbsp;of distinct character&nbsp;of size <strong>N</strong>&nbsp;and their corresponding frequency <strong>f[ ]</strong> i.e. character <strong>S[i]</strong> has<strong> f[i]</strong> frequency. Your task is to build&nbsp;the Huffman tree print all the huffman codes in preorder traversal&nbsp;of the tree.<br>
<strong>Note: </strong>While merging if two nodes&nbsp;have the same value, then the node which occurs&nbsp;at first will be taken on the left of Binary Tree and the other one to the right, otherwise Node with less value will be taken on the left of the subtree and other one to the right.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px">S = "abcdef"
f[] = {5, 9, 12, 13, 16, 45}
<strong>Output: </strong>
0 100 101 1100 1101 111
<strong>Explanation:
</strong></span><img alt="Steps to print codes from Huffman Tree" src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/fig-6-300x167.jpg"><span style="font-size:18px"><strong>
</strong>HuffmanCodes will be:
f : 0
c : 100
d : 101
a : 1100
b : 1101
e : 111
Hence printing them in the PreOrder of Binary 
Tree.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read or print anything. Your task is to complete the function&nbsp;<strong>huffmanCodes()&nbsp;</strong>which takes the given string <strong>S</strong>, frequency array <strong>f[ ]</strong>&nbsp;and number of characters <strong>N</strong> as input parameters and returns a vector of strings containing all huffman codes in order of preorder traversal&nbsp;of the tree.</span></p>

<p><span style="font-size:18px"><strong>Expected Time complexity: </strong>O(N * LogN)&nbsp;<br>
<strong>Expected Space complexity:&nbsp;</strong>O(N)&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N&nbsp;≤ 26</span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Morgan Stanley</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Samsung</code>&nbsp;<code>United Health Group</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Heap</code>&nbsp;<code>priority-queue</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;