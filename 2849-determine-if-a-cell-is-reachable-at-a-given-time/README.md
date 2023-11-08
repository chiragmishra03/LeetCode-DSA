<h2><a href="https://leetcode.com/problems/determine-if-a-cell-is-reachable-at-a-given-time/">2849. Determine if a Cell Is Reachable at a Given Time</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given four integers <code style="user-select: auto;">sx</code>, <code style="user-select: auto;">sy</code>, <code style="user-select: auto;">fx</code>, <code style="user-select: auto;">fy</code>, and a <strong style="user-select: auto;">non-negative</strong> integer <code style="user-select: auto;">t</code>.</p>

<p style="user-select: auto;">In an infinite 2D grid, you start at the cell <code style="user-select: auto;">(sx, sy)</code>. Each second, you <strong style="user-select: auto;">must</strong> move to any of its adjacent cells.</p>

<p style="user-select: auto;">Return <code style="user-select: auto;">true</code> <em style="user-select: auto;">if you can reach cell </em><code style="user-select: auto;">(fx, fy)</code> <em style="user-select: auto;">after<strong style="user-select: auto;"> exactly</strong></em> <code style="user-select: auto;">t</code> <strong style="user-select: auto;"><em style="user-select: auto;">seconds</em></strong>, <em style="user-select: auto;">or</em> <code style="user-select: auto;">false</code> <em style="user-select: auto;">otherwise</em>.</p>

<p style="user-select: auto;">A cell's <strong style="user-select: auto;">adjacent cells</strong> are the 8 cells around it that share at least one corner with it. You can visit the same cell several times.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2023/08/05/example2.svg" style="width: 443px; height: 243px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> sx = 2, sy = 4, fx = 7, fy = 7, t = 6
<strong style="user-select: auto;">Output:</strong> true
<strong style="user-select: auto;">Explanation:</strong> Starting at cell (2, 4), we can reach cell (7, 7) in exactly 6 seconds by going through the cells depicted in the picture above. 
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2023/08/05/example1.svg" style="width: 383px; height: 202px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> sx = 3, sy = 1, fx = 7, fy = 3, t = 3
<strong style="user-select: auto;">Output:</strong> false
<strong style="user-select: auto;">Explanation:</strong> Starting at cell (3, 1), it takes at least 4 seconds to reach cell (7, 3) by going through the cells depicted in the picture above. Hence, we cannot reach cell (7, 3) at the third second.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= sx, sy, fx, fy &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= t &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
</ul>
</div>