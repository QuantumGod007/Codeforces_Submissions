<h2><a href="https://codeforces.com/contest/1593/problem/A" target="_blank" rel="noopener noreferrer">1593A — Elections</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1593A](https://codeforces.com/contest/1593/problem/A) |

## Topics
`math`

---

## Problem Statement

<div class="header"><div class="title">A. Elections</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>The elections in which three candidates participated have recently ended. The first candidate received $$$a$$$ votes, the second one received $$$b$$$ votes, the third one received $$$c$$$ votes. For each candidate, solve the following problem: how many votes should be added to this candidate so that he wins the election (i.e. the number of votes for this candidate was strictly greater than the number of votes for any other candidate)?</p><p>Please note that for each candidate it is necessary to solve this problem <span class="tex-font-style-bf">independently</span>, i.e. the added votes for any candidate <span class="tex-font-style-bf">do not</span> affect the calculations when getting the answer for the other two candidates.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases. Then $$$t$$$ test cases follow.</p><p>Each test case consists of one line containing three integers $$$a$$$, $$$b$$$, and $$$c$$$ ($$$0 \le a,b,c \le 10^9$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output in a separate line three integers $$$A$$$, $$$B$$$, and $$$C$$$ ($$$A, B, C \ge 0$$$) separated by spaces — the answers to the problem for the first, second, and third candidate, respectively.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0023314915896577548" id="id004929339821037434" class="input-output-copier">Copy</div></div><pre id="id0023314915896577548">5
0 0 0
10 75 15
13 13 17
1000 0 0
0 1000000000 0
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0036310555193112903" id="id00688962448873061" class="input-output-copier">Copy</div></div><pre id="id0036310555193112903">1 1 1
66 0 61
5 5 0
0 1001 1001
1000000001 0 1000000001
</pre></div></div></div>