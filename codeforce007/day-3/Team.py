n=int(input())

problemSolution = [tuple(int(j) for j in input().split()) for i in range(n)]
solution=0
for x,y,z in problemSolution:
    if x+y+z >=2:
        solution+=1

print(solution)
