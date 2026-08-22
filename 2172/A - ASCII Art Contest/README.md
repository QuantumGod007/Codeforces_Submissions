<h2><a href="https://codeforces.com/contest/2172/problem/A" target="_blank" rel="noopener noreferrer">2172A — ASCII Art Contest</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2172A](https://codeforces.com/contest/2172/problem/A) |

## Topics
`implementation`

---

## Problem Statement

<div class="header"><div class="title">A. ASCII Art Contest</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Three leading AI-powered creative assistants—Gemini, ChatGPT, and Claude—enter the first ever ASCII Art Contest, where they must impress a panel of human judges with their text-based masterpieces.</p><p>Each participant receives a score between 80 and 100 (inclusive). The organizers want to announce the final standing only if the judges' opinions are "close enough"; otherwise, they will ask the judges to reconsider.</p><p>Given the three integer scores of Gemini, ChatGPT, and Claude, determine the contest result:</p><ul> <li> If the maximum score and the minimum score differ by at least 10 points, print <span class="tex-font-style-tt">check again</span> (the judging seems inconsistent, so the panel must re-evaluate). </li><li> Otherwise, print <span class="tex-font-style-tt">final X</span>, where <span class="tex-font-style-tt">X</span> is the median of the three scores (the score that would be in the middle if all three were sorted in non-decreasing order). </li></ul></div><div class="input-specification"><div class="section-title">Input</div><p>A single line contains three integers $$$g, c, \ell$$$, representing the scores of Gemini, ChatGPT, and Claude respectively.</p><ul> <li> $$$80\le g, c, \ell \le 100$$$ </li></ul></div><div class="output-specification"><div class="section-title">Output</div><p>Print the required answer in a line.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0009308724766721443" id="id000284140542822503" class="input-output-copier">Copy</div></div><pre id="id0009308724766721443">88 94 95
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0038057533841438573" id="id009865908348135275" class="input-output-copier">Copy</div></div><pre id="id0038057533841438573">final 94
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003091938452440267" id="id0017039202929473796" class="input-output-copier">Copy</div></div><pre id="id003091938452440267">100 80 81
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008232444373423743" id="id0058191441324272" class="input-output-copier">Copy</div></div><pre id="id008232444373423743">check again
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00635622667587246" id="id006980955591206047" class="input-output-copier">Copy</div></div><pre id="id00635622667587246">98 99 98
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id000744706881113536" id="id003526337481369378" class="input-output-copier">Copy</div></div><pre id="id000744706881113536">final 98
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006100669983723567" id="id004757476157734284" class="input-output-copier">Copy</div></div><pre id="id006100669983723567">95 86 85
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0000997360370252498" id="id002791422306475182" class="input-output-copier">Copy</div></div><pre id="id0000997360370252498">check again
</pre></div></div></div>