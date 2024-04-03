def vowel_consonant_check(str):
    str=str.lower()
    print(str)
    vowel=0
    consonant=0
    for x in range(0,len(str)):
        if str[x]=='a' or str[x]=='e' or str[x]=='i' or str[x]=='o' or str[x]=='u':
            vowel+=1
        else:
            consonant+=1
    return(vowel,consonant)

vowel,consonant=vowel_consonant_check("Hello World")
print("Number of vowels:",vowel)
print("Number of consonants:",consonant)