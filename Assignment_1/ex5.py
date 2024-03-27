numbers=[3,5,1,9,7,2,8]

#bubble sort
for i in range(len(numbers)):
    for j in range(0, len(numbers)-i-1):
        if numbers[j]>numbers[j+1]:
            temp=numbers[j]
            numbers[j]=numbers[j+1]
            numbers[j+1]=temp

print("Sorter array in ascending order:")
print(numbers)