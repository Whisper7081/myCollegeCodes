import random
counts = random.randint(3,6)
bigger = "it is bigger"
smaller = "it is smaller"
answer = random.randint(1,10)

while counts > 0:
    temp = input("Which is the number I love: ")
    guess = int(temp)

    if guess == answer:
        print("you are right!","good job!",sep=" ")
        break
    else:
        if guess < answer:
            print(smaller)
        else:
            print(bigger)
    counts = counts - 1

print("game is over!");print('the right answer is',int(answer),sep = " ,")