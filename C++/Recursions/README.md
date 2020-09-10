# DSA
DSA progress and competition between C++ and Python coders

The C++ recursion problems are:

#Warm­Ups

1. Write a recursive implementation of the factorial function. Recall that n! = 1 × 2 × … × n,
with the special case that 0! = 1.

2. Write a recursive function that, given a number  n, returns the sum of the digits of the
number n.

3. Write a recursive function that, given a string s, prints the characters of s in reverse order.

4. Write a recursive function that checks whether a string is a palindrome (a palindrome is
a string that's the same when reads forwards and backwards.)

5. Write a recursive function that, given a pointer to the root of a binary search tree, prints
out the elements in that tree in sorted order.

6. Write a recursive function that, given two strings, returns whether the first string is a
subsequence of the second. For example, given hac and cathartic, you should return true,
but given bat and table, you should return false.


#Enumeration

7. Given a list of n distinct elements, write a function that lists all subsets of those elements.

8. Given a list of n distinct elements, write a function that lists all permutations of that list.

9. Given a list of n distinct elements and a number k, write a function that lists all k­element
subsets of that list. Make sure not to output the same subset multiple times.

10. Given a list of n distinct elements and a number k, write a function that lists all k­element
permutations of that list.

11. Given a list of n distinct elements and a number k, write a function that lists all possible
ways of assigning those elements into k (possibly empty) groups.

12. Given a nonnegative integer n, write a function that lists all strings formed from exactly n
pairs of balanced parentheses. For example, given n = 3, you'd list these five strings:
((())) (()()) (())() ()(()) ()()()
As a hint, given any string of n ≥ 1 balanced parentheses, focus on the first open parentheses and the close parentheses it matches. What can you say about the string inside those
parentheses? What about the string that follows those parentheses?

13. Given a number n, generate all n­character passwords, subject to the restriction that every
password must have a number, a lower­case letter, an upper­case letter, and a symbol.

14. Given a number n, generate all distinct ways to write n as the sum of positive integers.
For example, with n = 4, the options are 4, 3 + 1, 2 + 2, 2 + 1 + 1, and 1 + 1 + 1 + 1.
2 / 7

#Backtracking 

15. Given a list of n integers and a number U, write a function that returns whether there is a
subset of those n integers that adds up to exactly U. (This is a famous problem called the
“subset sum problem,” by the way.)

16. A shrinkable word is a word that can be reduced down to the empty string by deleting
one letter at a time such that, at each stage, the remaining string is a word. For example,
the word “startling” is shirnkable because of this sequence of words:
startling   starting   staring   string   sting   sing   sin   in   i    → → → → → → → → → (empty)
Write a function that accepts as input a string and a set of all the words in English, then
reports whether the input word is shrinkable.

17. Some words can be spelled out using only element symbols from the periodic table. For example, the world “canine” can be spelled as  CaNiNe  (calcium, nickel, neon). Some words,
like “element,” cannot. Write a function that accepts as input a string and a set of all the
element symbols in the periodic table, then returns whether the word can or cannot be
spelled using element symbols. Even better, if the string can be spelled this way, return
the string with the capitalization changed to reflect that spelling.

18. Suppose you have n doctors, each of which are free for a certain number of hours per day,
and  m  patients, each of whom needs to be seen for a certain number of hours. Write a
function that determines whether it's possible for all the patients to be scheduled so that
none of the doctors spends more time than they have available. Better yet, tell us which
people should see which doctors.

19. You have a collection of cell phone towers, each represented by an (x, y) coordinate in the
plane. Each cell phone tower needs to be assigned a transmitting frequency chosen from a
list of k different frequencies. The only requirement is that no two towers within distance
d of one another can be assigned the same frequency, since that would cause interference.
Determine whether it's possible to assign the cell towers the frequencies so that no two
towers overlap. If you can, tell us what frequencies get assigned to which towers.

20. You are given a grid of nonnegative integers. You begin in the upper­left corner, and your
goal is to get to the lower­right corner. However, at each point in time, you can only move
up, down, left, or right exactly the number of squares given by the number you're standing
on. For example, if you were standing on a 3, you could move exactly three spots left, exactly three spots right, exactly three spots up, or exactly three spots down. You can't walk
off the board. Determine if there's a path that gets you from the upper­left corner of the
grid to the lower­right corner.
