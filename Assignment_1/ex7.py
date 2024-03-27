def FizzBuzzNum(num):
    if num%3==0 and num%5==0:
        return "FizzBuzz"
    elif num%3==0:
        return "Fizz" 
    elif num%5==0:
        return "Buzz"
    else:
        return "Not a Fizz-buzz number"

num=input("Enter the number:")
print(FizzBuzzNum(int(num)))
    
        