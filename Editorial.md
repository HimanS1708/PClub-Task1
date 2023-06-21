First, let Himanshu play the pieces of the first type - they will never do any harm. At the same time, let him play the pieces of the fourth type at the very end - they will not do any good.

Types two and three are kind of opposites of each other. If you play pieces of each of them one after another, then moods of both spectators don't change. Let's use that to our advantage. Play the pieces of these types in pairs until one of them runs out. There's a little corner case here, though. If there were no pieces of the first type, then you can't use a single pair because atleast one of the spectators in that case leaves after one piece.

Finally, try to play the remaining pieces of the same type before the fourth type. So the construction looks like **$1,1,...,1,2,3,2,3,...,2,3,3,3,3,...,3,4,4,...,4$** with **$2$** and **$3$** possibly swapped with each other.

Let's recover the answer from that construction. After the first type, both moods are $a_1$. After the alternating pieces, the moods are still the same. After that, one of the spectators will have his mood only decreasing until the end. Once it reaches $-1$, the show ends.

Thus, Himanshu can play $a_1 + min(a_2,a_3)*2 + min(a_1 + 1, abs(a_2 - a_3) + a_4)$ pieces if $a_1 != 0$. Otherwise, it's always $1$.

We take $min(a_1 + 1, abs(a_2 - a_3) + a_4)$ because there could be a case that the final mood $(a_1)$ is less than what could decreased by the remaining $abs(a_2 - a_3) + a_4$ pieces.

Time Complexity: $O(1)$.
