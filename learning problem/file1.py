fp=open("test","w")
fp.write("anwarkhan\n")
fp.write("ganeshsutar\n")
fp.close()
fr=open("test","r")
text=fr.readlines()
print text
fr.close()
