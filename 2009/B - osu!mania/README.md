<h2><a href="https://codeforces.com/contest/2009/problem/B" target="_blank" rel="noopener noreferrer">2009B — osu!mania</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2009B](https://codeforces.com/contest/2009/problem/B) |

## Topics
`brute force` `implementation`

---

## Problem Statement

<div class="header"><div class="title">B. osu!mania</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are playing your favorite rhythm game, osu!mania. The layout of your beatmap consists of $$$n$$$ rows and $$$4$$$ columns. Because notes at the bottom are closer, you will process the bottommost row first and the topmost row last. Each row will contain exactly one note, represented as a '#'.</p><p>For each note $$$1, 2, \dots, n$$$, in the order of processing, output the column in which the note appears.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains $$$t$$$ ($$$1 \leq t \leq 100$$$) — the number of test cases.</p><p>For each test case, the first line contains $$$n$$$ ($$$1 \leq n \leq 500$$$) — the number of rows of the beatmap.</p><p>The following $$$n$$$ lines contain $$$4$$$ characters. The $$$i$$$-th line represents the $$$i$$$-th row of the beatmap from the top. It is guaranteed that the characters are either '.' or '#', and exactly one of the characters is '#'. </p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$500$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output $$$n$$$ integers on a new line, the column that the $$$i$$$-th note appears in for all $$$i$$$ from $$$1$$$ to $$$n$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00001123459634701507" id="id008137909312638354" class="input-output-copier">Copy</div></div><pre id="id00001123459634701507"><div class="test-example-line test-example-line-even test-example-line-0">3</div><div class="test-example-line test-example-line-odd test-example-line-1">4</div><div class="test-example-line test-example-line-odd test-example-line-1">#...</div><div class="test-example-line test-example-line-odd test-example-line-1">.#..</div><div class="test-example-line test-example-line-odd test-example-line-1">..#.</div><div class="test-example-line test-example-line-odd test-example-line-1">...#</div><div class="test-example-line test-example-line-even test-example-line-2">2</div><div class="test-example-line test-example-line-even test-example-line-2">.#..</div><div class="test-example-line test-example-line-even test-example-line-2">.#..</div><div class="test-example-line test-example-line-odd test-example-line-3">1</div><div class="test-example-line test-example-line-odd test-example-line-3">...#</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006766502737652292" id="id009909231464236133" class="input-output-copier">Copy</div></div><pre id="id006766502737652292">4 3 2 1 
2 2 
4 
</pre></div></div></div>