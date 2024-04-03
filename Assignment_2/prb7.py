def merge(List1,List2):
    List=[]
    i=0
    j=0
    list1_size=len(List1)
    list2_size=len(List2)
    List1.append(float('inf'))
    List2.append(float('inf'))
    for x in range(0,list1_size+list2_size):
        if List1[i]<=List2[j]:
            List.append(List1[i])
            i+=1
        else:
            List.append(List2[j])
            j+=1
    return List
List1 = [1, 3, 5]
List2 = [2, 4, 6]
print(merge(List1,List2))


    
