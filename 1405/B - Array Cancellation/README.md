<h2><a href="https://codeforces.com/contest/1405/problem/B" target="_blank" rel="noopener noreferrer">1405B — Array Cancellation</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1405B](https://codeforces.com/contest/1405/problem/B) |

## Topics
`constructive algorithms` `implementation`

---

## Problem Statement

<div class="header"><div class="title">B. Array Cancellation</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You're given an array $$$a$$$ of $$$n$$$ integers, such that $$$a_1 + a_2 + \cdots + a_n = 0$$$.</p><p>In one operation, you can choose two <span class="tex-font-style-bf">different</span> indices $$$i$$$ and $$$j$$$ ($$$1 \le i, j \le n$$$), decrement $$$a_i$$$ by one and increment $$$a_j$$$ by one. If $$$i  \lt  j$$$ this operation is free, otherwise it costs one coin.</p><p>How many coins do you have to spend in order to make all elements equal to $$$0$$$?</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 5000$$$). Description of the test cases follows.</p><p>The first line of each test case contains an integer $$$n$$$ ($$$1 \le n \le 10^5$$$)  — the number of elements.</p><p>The next line contains $$$n$$$ integers $$$a_1, \ldots, a_n$$$ ($$$-10^9 \le a_i \le 10^9$$$). It is given that $$$\sum_{i=1}^n a_i = 0$$$.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print the minimum number of coins we have to spend in order to make all elements equal to $$$0$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009398236813638255" id="id0028931395974524043" class="input-output-copier">Copy</div></div><pre id="id009398236813638255">7
4
-3 5 -3 1
2
1 -1
4
-3 2 -3 4
4
-1 1 1 -1
7
-5 7 -6 -4 17 -13 4
6
-1000000000 -1000000000 -1000000000 1000000000 1000000000 1000000000
1
0
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008344344333028029" id="id00007290216181748965" class="input-output-copier">Copy</div></div><pre id="id008344344333028029">3
0
4
1
8
3000000000
0
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>Possible strategy for the first test case: </p><ul> <li> Do $$$(i=2, j=3)$$$ three times (free), $$$a = [-3, 2, 0, 1]$$$. </li><li> Do $$$(i=2, j=1)$$$ two times (pay two coins), $$$a = [-1, 0, 0, 1]$$$. </li><li> Do $$$(i=4, j=1)$$$ one time (pay one coin), $$$a = [0, 0, 0, 0]$$$. </li></ul></div>