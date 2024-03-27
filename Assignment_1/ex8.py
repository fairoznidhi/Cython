def guessing_game():
    var=input("Enter a number from 1 to 9: ")
    guess=int(var)
    number=6
    if guess<number:
        print ("Your guess is almost there")
    elif guess>number:
        print("Your guess is higher")
    else:
        print("Your Guess Is Correct!")

guessing_game()
