# number guesser

Little game where you have to guess a number between 1 and 100.    
7 guesses is average. Below is good and above is bad.  

Game was written using this rough algorithm:  

```
enable input and output
define true and false as 1 and 0

main(){
	create name variable as char
	create guess as int
	create correct as int
	create turnTracker as int
	create keepGoing as int
	
	 ask user for name
	print("hello" name "Let's play a game")
	turnTracker = 0

	generate random number
	correct = random number

	while keepGoing:
		turnTracker++
		guess = input(print("turn " + turnTracker + ") " + "please guess a number: "))
		if guess < correct:
			print("Too low!")
		else if guess > correct:
			print("Too high!")
		else:
			print("correct!")
			keepGoing = False
	if turnTracker > 7:
		print("You did pretty bad...")
	else if turn < 7:
		print("You did great!")
	else:
		print("You did ok.")
}
```
