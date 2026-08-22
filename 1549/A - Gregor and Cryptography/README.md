<h2><a href="https://codeforces.com/contest/1549/problem/A" target="_blank" rel="noopener noreferrer">1549A — Gregor and Cryptography</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1549A](https://codeforces.com/contest/1549/problem/A) |

## Topics
`math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">A. Gregor and Cryptography</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Gregor is learning about RSA cryptography, and although he doesn't understand how RSA works, he is now fascinated with prime numbers and factoring them.</p><p>Gregor's favorite <span class="tex-font-style-bf">prime</span> number is $$$P$$$. Gregor wants to find two <span class="tex-font-style-it">bases</span> of $$$P$$$. Formally, Gregor is looking for two integers $$$a$$$ and $$$b$$$ which satisfy both of the following properties.</p><ul> <li> $$$P \bmod a = P \bmod b$$$, where $$$x \bmod y$$$ denotes the remainder when $$$x$$$ is divided by $$$y$$$, and </li><li> $$$2 \le a  \lt  b \le P$$$. </li></ul><p>Help Gregor find two bases of his favorite prime number!</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 1000$$$).</p><p>Each subsequent line contains the integer $$$P$$$ ($$$5 \le P \le {10}^9$$$), with $$$P$$$ guaranteed to be prime.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Your output should consist of $$$t$$$ lines. Each line should consist of two integers $$$a$$$ and $$$b$$$ ($$$2 \le a  \lt  b \le P$$$). If there are multiple possible solutions, print any.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0010809887186262856" id="id009741523483558516" class="input-output-copier">Copy</div></div><pre id="id0010809887186262856">2
17
5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008018313249154807" id="id00010277805860111289" class="input-output-copier">Copy</div></div><pre id="id008018313249154807">3 5
2 4</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The first query is $$$P=17$$$. $$$a=3$$$ and $$$b=5$$$ are valid <span class="tex-font-style-it">bases</span> in this case, because $$$17 \bmod 3 = 17 \bmod 5 = 2$$$. There are other pairs which work as well.</p><p>In the second query, with $$$P=5$$$, the only solution is $$$a=2$$$ and $$$b=4$$$.</p></div>