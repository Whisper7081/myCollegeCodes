counts = 3
bigger = "it is bigger"
smaller = "it is smaller"

while counts > 0:
    temp = input("Which is the number I love: ")
    guess = int(temp)

    if guess == 8:
        print("you are right!","good job!",sep=" ")
        break
    else:
        if guess < 8:
            print(smaller)
        else:
            print(bigger)
    counts = counts - 1

print("game is over!")