<h2><a href="https://codeforces.com/contest/1987/problem/A" target="_blank" rel="noopener noreferrer">1987A — Upload More RAM</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1987A](https://codeforces.com/contest/1987/problem/A) |

## Topics
`greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Upload More RAM</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p><span class="tex-font-style-it">Oh no, the ForceCodes servers are running out of memory! Luckily, you can help them out by uploading some of your RAM!</span></p><p>You want to upload $$$n$$$ GBs of RAM. Every second, you will upload either $$$0$$$ or $$$1$$$ GB of RAM. However, there is a restriction on your network speed: in any $$$k$$$ consecutive seconds, you can upload only at most $$$1$$$ GB of RAM in total.</p><p>Find the minimum number of seconds needed to upload $$$n$$$ GBs of RAM!</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line of input contains a single integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases. The description of the test cases follows.</p><p>The first and only line of each test case contains two integers $$$n$$$ and $$$k$$$ ($$$1 \le n, k \le 100$$$) — the number of GBs that you want to upload and the length of the time window respectively.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single integer — the minimum number of seconds needed to upload $$$n$$$ GBs of RAM.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0022095802122387243" id="id005713524620586058" class="input-output-copier">Copy</div></div><pre id="id0022095802122387243"><div class="test-example-line test-example-line-even test-example-line-0">6</div><div class="test-example-line test-example-line-odd test-example-line-1">5 1</div><div class="test-example-line test-example-line-even test-example-line-2">2 2</div><div class="test-example-line test-example-line-odd test-example-line-3">2 3</div><div class="test-example-line test-example-line-even test-example-line-4">1 7</div><div class="test-example-line test-example-line-odd test-example-line-5">11 5</div><div class="test-example-line test-example-line-even test-example-line-6">100 100</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0006339616751586497" id="id007832473962845226" class="input-output-copier">Copy</div></div><pre id="id0006339616751586497">5
3
4
1
51
9901
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, you can upload $$$1$$$ GB of RAM per second, so to upload $$$5$$$ GBs, you need $$$5$$$ seconds.</p><p>In the second test case, you can upload $$$1$$$ GB in the first second, $$$0$$$ GBs in the second second, and $$$1$$$ GB in the third second, which in total adds up to exactly $$$2$$$ GBs of uploaded RAM.</p><p>In the third test case, you can upload $$$1$$$ GB in the first second, $$$0$$$ GBs in the second second, $$$0$$$ GBs in the third second, and $$$1$$$ GB in the fourth second, which in total adds up to exactly $$$2$$$ GBs of uploaded RAM.</p></div>