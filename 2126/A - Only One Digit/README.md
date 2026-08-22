<h2><a href="https://codeforces.com/contest/2126/problem/A" target="_blank" rel="noopener noreferrer">2126A — Only One Digit</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2126A](https://codeforces.com/contest/2126/problem/A) |

## Topics
`brute force` `implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Only One Digit</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an integer $$$x$$$. You need to find the smallest non-negative integer $$$y$$$ such that the numbers $$$x$$$ and $$$y$$$ share at least one common digit. In other words, there must exist a decimal digit $$$d$$$ that appears in both the representation of the number $$$x$$$ and the number $$$y$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \le t \le 1000$$$) — the number of test cases.</p><p>The first line of each test case contains one integer $$$x$$$ ($$$1 \le x \le 1000$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output one integer $$$y$$$ — the minimum non-negative number that satisfies the condition.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003166840913689668" id="id008500189045238321" class="input-output-copier">Copy</div></div><pre id="id003166840913689668"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">6</div><div class="test-example-line test-example-line-even test-example-line-2">96</div><div class="test-example-line test-example-line-odd test-example-line-3">78</div><div class="test-example-line test-example-line-even test-example-line-4">122</div><div class="test-example-line test-example-line-odd test-example-line-5">696</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008292954151189996" id="id0037754480574857474" class="input-output-copier">Copy</div></div><pre id="id008292954151189996">6
6
7
1
6
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, the numbers $$$6$$$ and $$$6$$$ share the common digit '<span class="tex-font-style-tt">6</span>'. Moreover, there is no natural number smaller than this that shares a common digit.</p><p>In the second test case, the numbers $$$6$$$ and $$$96$$$ share the common digit '<span class="tex-font-style-tt">6</span>'.</p></div>