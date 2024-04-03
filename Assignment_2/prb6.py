def occurrences(List):
    dict={}
    for x in range(0,len(List)):
        if List[x] in dict:
            dict[List[x]]+=1
        else:
            dict[List[x]]=1
    return dict
List=[1, 2, 2, 3, 3, 3, 4, 4, 4, 4]
print(occurrences(List))

