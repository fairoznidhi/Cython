def palindrome(str):
    str=str.lower()
    str=str.replace(" ","")
    str=str.replace(",","")
    return str==str[::-1]
string= "A man, a plan, a canal, Panama"
print("Palindrome:", palindrome(string))
