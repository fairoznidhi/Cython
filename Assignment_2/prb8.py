def duplicate(List):
    dict={}
    duplicateList=[]
    for x in range(0,len(List)):
        if List[x] in dict:
            dict[List[x]]+=1
            if dict[List[x]]==2:
                duplicateList.append(List[x])
        else:
            dict[List[x]]=1
    return duplicateList
List = [1, 2, 3, 2, 4, 5, 4, 6]
print(duplicate(List))