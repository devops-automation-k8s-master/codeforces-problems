totalwords=int(raw_input())
for i in range(totalwords):
    word=raw_input()
    if len(word)>10:
        print word[0]+str(len(word)-2)+word[-1]
    else:
        print word
