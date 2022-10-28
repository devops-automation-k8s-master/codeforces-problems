inputList=raw_input().split()
dataSet=raw_input().split()
nextParti=0
kthValue=int(dataSet[int(inputList[1])-1])
for i in range(int(inputList[0])):
    if kthValue==0:
        if kthValue<int(dataSet[i]):
            nextParti=nextParti+1
    else:
        if kthValue<=int(dataSet[i]):
            nextParti=nextParti+1
print nextParti
