def binarySearch(a,k,lower,upper):
    print(a,lower,upper)
    if lower ==  upper:
        if a[0] == k:
            print("Answer",lower)
            return lower
        else:
            return -1
    else:
        middleElement = len(a) //2
        middleElementIndex = middleElement+lower
        if a[middleElement] == k:
            return middleElementIndex
        elif a[middleElement] > k:
            print("k is less by middleElement",a,lower,middleElement-1)
            return binarySearch(a[:middleElement],k,lower,middleElement-1)
        elif a[middleElement]<k and len(a)>2:
            print("k is greater by middleElement",a,middleElement+1,upper)
            return binarySearch(a[middleElement+1:],k,lower+middleElement+1,upper)
        else:
            return -1


k=int(input())
b=[int(i) for i in input().split(" ")]

data=binarySearch(b,k,0,len(b)-1)
print(data)
