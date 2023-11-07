<h2><a href="https://leetcode.com/problems/eliminate-maximum-number-of-monsters/"><div id="big-omega-company-tags" style="user-select: auto;"><div id="big-omega-topbar" style="user-select: auto;"><div class="companyTagsContainer" style="overflow-x: scroll; flex-wrap: nowrap; user-select: auto;"><div class="companyTagsContainer--tag" style="user-select: auto;">No companies found for this problem</div></div><div class="companyTagsContainer--chevron" style="user-select: auto;"><div style="user-select: auto;"><svg version="1.1" id="icon" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px" viewBox="0 0 32 32" fill="#4087F1" xml:space="preserve" style="width: 20px; user-select: auto;"><polygon points="16,22 6,12 7.4,10.6 16,19.2 24.6,10.6 26,12 " style="user-select: auto;"></polygon><rect id="_x3C_Transparent_Rectangle_x3E_" class="st0" fill="none" width="32" height="32" style="user-select: auto;"></rect></svg></div></div></div></div>1921. Eliminate Maximum Number of Monsters</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are playing a video game where you are defending your city from a group of <code style="user-select: auto;">n</code> monsters. You are given a <strong style="user-select: auto;">0-indexed</strong> integer array <code style="user-select: auto;">dist</code> of size <code style="user-select: auto;">n</code>, where <code style="user-select: auto;">dist[i]</code> is the <strong style="user-select: auto;">initial distance</strong> in kilometers of the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> monster from the city.</p>

<p style="user-select: auto;">The monsters walk toward the city at a <strong style="user-select: auto;">constant</strong> speed. The speed of each monster is given to you in an integer array <code style="user-select: auto;">speed</code> of size <code style="user-select: auto;">n</code>, where <code style="user-select: auto;">speed[i]</code> is the speed of the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> monster in kilometers per minute.</p>

<p style="user-select: auto;">You have a weapon that, once fully charged, can eliminate a <strong style="user-select: auto;">single</strong> monster. However, the weapon takes <strong style="user-select: auto;">one minute</strong> to charge. The weapon is fully charged at the very start.</p>

<p style="user-select: auto;">You lose when any monster reaches your city. If a monster reaches the city at the exact moment the weapon is fully charged, it counts as a <strong style="user-select: auto;">loss</strong>, and the game ends before you can use your weapon.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">maximum</strong> number of monsters that you can eliminate before you lose, or </em><code style="user-select: auto;">n</code><em style="user-select: auto;"> if you can eliminate all the monsters before they reach the city.</em></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> dist = [1,3,4], speed = [1,1,1]
<strong style="user-select: auto;">Output:</strong> 3
<strong style="user-select: auto;">Explanation:</strong>
In the beginning, the distances of the monsters are [1,3,4]. You eliminate the first monster.
After a minute, the distances of the monsters are [X,2,3]. You eliminate the second monster.
After a minute, the distances of the monsters are [X,X,2]. You eliminate the thrid monster.
All 3 monsters can be eliminated.</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> dist = [1,1,2,3], speed = [1,1,1,1]
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong>
In the beginning, the distances of the monsters are [1,1,2,3]. You eliminate the first monster.
After a minute, the distances of the monsters are [X,0,1,2], so you lose.
You can only eliminate 1 monster.
</pre>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> dist = [3,2,4], speed = [5,3,2]
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong>
In the beginning, the distances of the monsters are [3,2,4]. You eliminate the first monster.
After a minute, the distances of the monsters are [X,0,2], so you lose.
You can only eliminate 1 monster.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">n == dist.length == speed.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= n &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= dist[i], speed[i] &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
</ul>
</div>