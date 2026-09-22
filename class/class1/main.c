//Glossary

// library = reusable collection of code  (similar to a  plugin)
// analogy = it is like a reusable engine just plug it into your car(code) and run so it would save your time and you don't have to craft an engine from scratch

// function = executable chunk of code

// variable = named memory location used to store data that can change during execution
// const = named memory location used to store data that cannot change during execution



// here, the #include is a preprocessor directive used to copy external library and paste into our main code
#include <stdio.h>
#include <conio.h>
// here we are telling it to copy stdio(library)'s header file(.h) and attach it to my code




// here main is the parent function

int main(){
	printf("Aryan\n");

// here \n is a escape sequence known as newline escape sequence to move to a new line


	int mane(){
		// variable
		char* nickname = "soul reaper"
		// const
		char* const name =  "Aryan";
		printf(name + "The" + nickname + '\n');
	}
	mane();

	// In  late IDEs the console used to close instantly as soon as the code is executed so getch() function was used to stop the console from closing, letting the programmers see the output
	// getch();
}



