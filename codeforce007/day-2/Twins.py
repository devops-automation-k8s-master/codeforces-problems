n = int(input())
coins = [int(i) for i in input().split()]
coins.sort(reverse=True)
totalSum=0
minCoins=0
coinSum=0
for i in coins:
    totalSum+=i

for i in coins:
    coinSum+=i
    minCoins+=1
    if coinSum>totalSum-coinSum:
        print(minCoins)
        break
