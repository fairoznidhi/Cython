def remove_duplicate(List):
    for x in range(len(List)-1,0,-1):
        if List[x-1]==List[x]:
            del List[x]
    return len(List)

List = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4]
print("Length of the modified list:",remove_duplicate(List))