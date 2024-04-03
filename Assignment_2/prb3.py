List=[1,2,4,6,3,7,8]
listSize=len(List)+1

#Method1
ans=listSize*(listSize+1)/2
ans-=sum(List)
print(int(ans))

#Method2
ans2=listSize
List.sort()
for x in range(1,listSize-1):
    if List[x]!=x+1:
        ans2=x+1
        break
print(ans2)