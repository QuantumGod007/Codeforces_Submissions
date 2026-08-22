<h2><a href="https://codeforces.com/contest/2123/problem/A" target="_blank" rel="noopener noreferrer">2123A — Blackboard Game</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2123A](https://codeforces.com/contest/2123/problem/A) |

## Topics
`math`

---

## Problem Statement

<div class="header"><div class="title">A. Blackboard Game</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Initially, the integers from $$$0$$$ to $$$n-1$$$ are written on a blackboard.</p><p>In one round, </p><ul> <li> Alice chooses an integer $$$a$$$ on the blackboard and erases it; </li><li> then Bob chooses an integer $$$b$$$ on the blackboard such that $$$a+b \equiv 3 \pmod 4$$$$$$^{\text{∗}}$$$ and erases it. </li></ul><p>Rounds take place in succession until a player is unable to make a move — the first player who is unable to make a move loses. Determine who wins with optimal play. </p><div class="statement-footnote"><p>$$$^{\text{∗}}$$$We define that $$$x\equiv y\pmod m$$$ whenever $$$x-y$$$ is an integer multiple of $$$m$$$.</p></div></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \leq t \leq 100$$$)  — the number of test cases.</p><p>The only line of each test case contains an integer $$$n$$$ ($$$1\leq n \leq 100$$$) — the number of integers written on the blackboard.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output on a single line "<span class="tex-font-style-tt">Alice</span>" if Alice wins with optimal play, and "<span class="tex-font-style-tt">Bob</span>" if Bob wins with optimal play.</p><p>You can output the answer in any case (upper or lower). For example, the strings "<span class="tex-font-style-tt">aLiCe</span>", "<span class="tex-font-style-tt">alice</span>", "<span class="tex-font-style-tt">ALICE</span>", and "<span class="tex-font-style-tt">alICE</span>" will be recognized as "<span class="tex-font-style-tt">Alice</span>".</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0008899866333315343" id="id009924139301566139" class="input-output-copier">Copy</div></div><pre id="id0008899866333315343"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">2</div><div class="test-example-line test-example-line-even test-example-line-2">4</div><div class="test-example-line test-example-line-odd test-example-line-3">5</div><div class="test-example-line test-example-line-even test-example-line-4">7</div><div class="test-example-line test-example-line-odd test-example-line-5">100</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009905139768391137" id="id005608031966616553" class="input-output-copier">Copy</div></div><pre id="id009905139768391137">Alice
Bob
Alice
Alice
Bob
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first sample, suppose Alice chooses $$$0$$$, then Bob cannot choose any number so Alice wins immediately.</p><p>In the second sample, suppose Alice chooses $$$0$$$, then Bob can choose $$$3$$$. Then suppose Alice chooses $$$2$$$, then Bob can choose $$$1$$$. Then Alice has no numbers remaining, so Bob wins.</p></div>