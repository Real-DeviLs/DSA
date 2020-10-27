from random import *
i = 0
jumble = ''

word = input("Enter a word: ")
word = str(word)
while i < len(word):
    jumble = jumble+ word[randrange(len(word))]
    i = i + 1

print(jumble)
