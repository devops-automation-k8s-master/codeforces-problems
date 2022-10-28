def binarySearch(a,k,lower,upper):
    if lower == upper:
        if a[lower] == k:
            return lower
        else:
            return -1
    else:
        middleElementIndex = (lower+upper) // 2
        if a[middleElementIndex] == k:
            return middleElementIndex
        elif a[middleElementIndex]>k:
            return binarySearch(a,k,lower,middleElementIndex-1)
        else:
            return binarySearch(a,k,middleElementIndex+1,upper)


k = int(input())

a = [int(i) for i in input().split(" ")]

print(binarySearch(a,k,0,len(a)-1))
