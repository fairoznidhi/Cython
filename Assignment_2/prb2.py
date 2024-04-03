def reverse(str):
    strlen=len(str)
    rev_str=""
    for x in range(strlen-1,-1,-1):
        rev_str+=str[x]
    return rev_str

str="Hello World"
print(reverse(str))