def anagram(str1,str2):
    str1=list(str1.lower())
    str2=list(str2.lower())
    str1.sort()
    str2.sort()
    if str1==str2:
        return True
    else:
        return False
str1="Listen"
str2="Silent"
print("Anagram:",anagram(str1,str2))
