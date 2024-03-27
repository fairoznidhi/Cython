def age_determine(age1,age2):
    if age1>age2:
        print("First one is the elder bother.")
    elif age2>age1:
        print("Second one is the elder brother")
    else:
        print("Both are same age")

age1=input("Enter first one age:")
age2=input("Enter second one age:")
age_determine(age1,age2)