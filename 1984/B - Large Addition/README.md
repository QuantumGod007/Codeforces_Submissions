<h2><a href="https://codeforces.com/contest/1984/problem/B" target="_blank" rel="noopener noreferrer">1984B — Large Addition</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1984B](https://codeforces.com/contest/1984/problem/B) |

## Topics
`implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">B. Large Addition</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>A digit is <span class="tex-font-style-it">large</span> if it is between $$$5$$$ and $$$9$$$, inclusive. A positive integer is <span class="tex-font-style-it">large</span> if all of its digits are large.</p><p>You are given an integer $$$x$$$. Can it be the sum of two <span class="tex-font-style-it">large</span> positive integers with the <span class="tex-font-style-bf">same number of digits</span>?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 10^4$$$) — the number of test cases.</p><p>The only line of each test case contains a single integer $$$x$$$ ($$$10 \leq x \leq 10^{18}$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output $$$\texttt{YES}$$$ if $$$x$$$ satisfies the condition, and $$$\texttt{NO}$$$ otherwise.</p><p>You can output $$$\texttt{YES}$$$ and $$$\texttt{NO}$$$ in any case (for example, strings $$$\texttt{yES}$$$, $$$\texttt{yes}$$$, and $$$\texttt{Yes}$$$ will be recognized as a positive response).</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00328693617539519" id="id009366785280241972" class="input-output-copier">Copy</div></div><pre id="id00328693617539519"><div class="test-example-line test-example-line-even test-example-line-0">11</div><div class="test-example-line test-example-line-odd test-example-line-1">1337</div><div class="test-example-line test-example-line-even test-example-line-2">200</div><div class="test-example-line test-example-line-odd test-example-line-3">1393938</div><div class="test-example-line test-example-line-even test-example-line-4">1434</div><div class="test-example-line test-example-line-odd test-example-line-5">98765432123456789</div><div class="test-example-line test-example-line-even test-example-line-6">11111111111111111</div><div class="test-example-line test-example-line-odd test-example-line-7">420</div><div class="test-example-line test-example-line-even test-example-line-8">1984</div><div class="test-example-line test-example-line-odd test-example-line-9">10</div><div class="test-example-line test-example-line-even test-example-line-10">69</div><div class="test-example-line test-example-line-odd test-example-line-11">119</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007687165782827183" id="id008423731569249523" class="input-output-copier">Copy</div></div><pre id="id007687165782827183">YES
NO
YES
YES
NO
YES
NO
YES
YES
NO
NO
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, we can have $$$658 + 679 = 1337$$$.</p><p>In the second test case, it can be shown that no numbers of equal length and only consisting of large digits can add to $$$200$$$.</p><p>In the third test case, we can have $$$696\,969 + 696\,969 = 1\,393\,938$$$.</p><p>In the fourth test case, we can have $$$777 + 657 = 1434$$$.</p></div>