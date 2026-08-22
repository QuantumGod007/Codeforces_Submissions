<h2><a href="https://codeforces.com/contest/1509/problem/B" target="_blank" rel="noopener noreferrer">1509B — TMT Document</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1509B](https://codeforces.com/contest/1509/problem/B) |

## Topics
`greedy`

---

## Problem Statement

<div class="header"><div class="title">B. TMT Document</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>The student council has a shared document file. Every day, some members of the student council write the sequence <span class="tex-font-style-tt">TMT</span> (short for Towa Maji Tenshi) in it.</p><p>However, one day, the members somehow entered the sequence into the document at the same time, creating a jumbled mess. Therefore, it is Suguru Doujima's task to figure out whether the document has malfunctioned. Specifically, he is given a string of length $$$n$$$ whose characters are all either <span class="tex-font-style-tt">T</span> or <span class="tex-font-style-tt">M</span>, and he wants to figure out if it is possible to partition it into some number of disjoint subsequences, all of which are equal to <span class="tex-font-style-tt">TMT</span>. That is, each character of the string should belong to exactly one of the subsequences.</p><p>A string $$$a$$$ is a subsequence of a string $$$b$$$ if $$$a$$$ can be obtained from $$$b$$$ by deletion of several (possibly, zero) characters.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \le t \le 5000$$$)  — the number of test cases.</p><p>The first line of each test case contains an integer $$$n$$$ ($$$3 \le n  \lt  10^5$$$), the number of characters in the string entered in the document. It is guaranteed that $$$n$$$ is divisible by $$$3$$$.</p><p>The second line of each test case contains a string of length $$$n$$$ consisting of only the characters <span class="tex-font-style-tt">T</span> and <span class="tex-font-style-tt">M</span>.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print a single line containing <span class="tex-font-style-tt">YES</span> if the described partition exists, and a single line containing <span class="tex-font-style-tt">NO</span> otherwise.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007851851582450654" id="id006537988868706127" class="input-output-copier">Copy</div></div><pre id="id007851851582450654">5
3
TMT
3
MTT
6
TMTMTT
6
TMTTTT
6
TTMMTT
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003686718953332593" id="id009106835693848399" class="input-output-copier">Copy</div></div><pre id="id003686718953332593">YES
NO
YES
NO
YES
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, the string itself is already a sequence equal to <span class="tex-font-style-tt">TMT</span>.</p><p>In the third test case, we may partition the string into the subsequences <span class="tex-font-style-tt"><span class="tex-font-style-bf">TM</span>TMT<span class="tex-font-style-bf">T</span></span>. Both the bolded and the non-bolded subsequences are equal to <span class="tex-font-style-tt">TMT</span>.</p></div>