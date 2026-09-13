<h2><a href="https://codeforces.com/contest/1950/problem/C" target="_blank" rel="noopener noreferrer">1950C — Clock Conversion</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1950C](https://codeforces.com/contest/1950/problem/C) |

## Topics
`implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">C. Clock Conversion</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Given the time in 24-hour format, output the equivalent time in 12-hour format. </p><ul> <li> <a href="https://en.wikipedia.org/wiki/24-hour_clock#Description">24-hour format</a> divides the day into 24 hours from $$$00$$$ to $$$23$$$, each of which has 60 minutes from $$$00$$$ to $$$59$$$. </li><li> <a href="https://en.wikipedia.org/wiki/12-hour_clock#Description">12-hour format</a> divides the day into two halves: the first half is $$$\mathrm{AM}$$$, and the second half is $$$\mathrm{PM}$$$. In each half, the hours are numbered in the order $$$12, 01, 02, 03, \dots, 11$$$. Each hour has 60 minutes numbered from $$$00$$$ to $$$59$$$. </li></ul></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 1440$$$) — the number of test cases.</p><p>The only line of each test case contains a string $$$s$$$ of length $$$5$$$ with format <span class="tex-font-style-tt">hh:mm</span> representing a valid time in the 24-hour format. <span class="tex-font-style-tt">hh</span> represents the hour from $$$00$$$ to $$$23$$$, and <span class="tex-font-style-tt">mm</span> represents the minute from $$$00$$$ to $$$59$$$.</p><p>The input will always be a valid time in 24-hour format.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output two strings separated by a space ("<span class="tex-font-style-tt">hh:mm AM</span>" or "<span class="tex-font-style-tt">hh:mm PM</span>"), which are the 12-hour equivalent to the time provided in the test case (without quotes).</p><p>You should output the time exactly as indicated; in particular, you should not remove leading zeroes.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006657986991574194" id="id007403445812733964" class="input-output-copier">Copy</div></div><pre id="id006657986991574194"><div class="test-example-line test-example-line-even test-example-line-0">11</div><div class="test-example-line test-example-line-odd test-example-line-1">09:41</div><div class="test-example-line test-example-line-even test-example-line-2">18:06</div><div class="test-example-line test-example-line-odd test-example-line-3">12:14</div><div class="test-example-line test-example-line-even test-example-line-4">00:59</div><div class="test-example-line test-example-line-odd test-example-line-5">00:00</div><div class="test-example-line test-example-line-even test-example-line-6">14:34</div><div class="test-example-line test-example-line-odd test-example-line-7">01:01</div><div class="test-example-line test-example-line-even test-example-line-8">19:07</div><div class="test-example-line test-example-line-odd test-example-line-9">11:59</div><div class="test-example-line test-example-line-even test-example-line-10">12:00</div><div class="test-example-line test-example-line-odd test-example-line-11">21:37</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0030618832788154493" id="id009786245073419575" class="input-output-copier">Copy</div></div><pre id="id0030618832788154493">09:41 AM
06:06 PM
12:14 PM
12:59 AM
12:00 AM
02:34 PM
01:01 AM
07:07 PM
11:59 AM
12:00 PM
09:37 PM
</pre></div></div></div>