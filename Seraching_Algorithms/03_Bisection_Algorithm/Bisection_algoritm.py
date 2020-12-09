#program that guess a number between 0 to 100
low=0
High=100
medium=(low+High) //2

state =True 
print("please Enter a number between 0 to 100 ")
while state :
    print("is your secret number:"+ str(medium))
    guess=input("Enter h if indicates is high and enter 'l' is low ")
    if guess=='c':
        print("GAME OVER . Your secret number was Medium" )
        state=False
    elif guess=='h':
        High= medium
        medium=(High+low) //2
    elif guess=='l':
        low= medium
        medium=(High+low) //2   
    else:
        print("Sorry. i don't understand your input")