word=raw_input("please enter a word")
count={}
for letter in word:
    count[letter]=count.get(letter,0)+1

print count
