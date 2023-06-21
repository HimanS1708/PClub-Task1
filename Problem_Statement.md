# Problem Statement

## Scrape-through-performance
Himanshu is a beginner guitar player. His first show gathered a grand total of two spectators: Arin and Shreyansh.

Himanshu prepared $a_1 + a_2 + a_3 + a_4$ pieces to play, grouped by their type:

* Type 1: Both Arin and Shreyansh like them.
* Type 2: Arin likes them but Shreyansh doesn't.
* Type 3: Shreyansh likes them but Arin doesn't.
* Type 4: Neither Arin nor Shreyansh likes them.

Initially, both spectators have their mood equal to 0. When a spectator hears a piece he likes, his mood increases by 1. When a spectator hears a piece he doesn't like, his mood decreases by 1. If the mood of a spectator becomes negative (strictly below zero), he leaves.

When someone leaves, Himanshu gets sad and ends the show. If no one leaves, and Himanshu is out of plays, he ends the show.

Thus, Himanshu wants to arrange the pieces in such a way that the show lasts as long as possible. Help him to calculate the maximum number of pieces he can play before the show ends.

### Input
The first line contains a single integer $t$ $(1 \le t \le 10^4)$ - the number of testcases.

The only line of each testcase contains four integers $a_1, a_2, a_3, a_4$ $(0 \le a_1, a_2, a_3, a_4 \le 10^8; a_1 + a_2 + a_3 + a_4 \ge 1)$ - the number of pieces of each type Himanshu prepared.

### Output
For each testcase, print a single integer - the maximum number of pieces Himanshu can play before at least one of the spectators leaves or before he runs of pieces to play.
