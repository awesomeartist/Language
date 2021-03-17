import random
secret=random.randint(1,10)

temp=input("guess the number in my mind:")
guess=int (temp)
if guess == secret:
        print("Nice Try!")
else:
    if guess > secret:
        print("your number is bigger than mine.")
    else:
        print("your number is smaller than mine")

while guess!=secret:
    temp=input("try again:")    
    guess=int (temp)
    if guess == secret:
        print("Nice Try!")
    else:
        if guess > secret:
             print("your number is bigger than mine.")
        else:
            print("your number is smaller than mine")

print("Game Over!")
        
