# C Programming Tutorial for Beginners

This is a series of notes I've taken based off of this freeCodeCamp video on YouTube.

* [FreeCodeCamp Video](https://www.youtube.com/watch?v=KJgsSFOSQv0)

It's taught by my main man Mike from GiraffeAcademy. Much love brother! Looking
forward to spending another 4 hours learning to code with you!

## Setup

I'll be running C on Linux using gcc as my compiler. I'm running Ubuntu so I
just apt installed gcc and I'm good to go.

I'll just be editing my programs as plain text files using vim. No IDE for me!

To run the programs quickly sometimes I'll be using my homemade `run` command.
This is just a simple shell script that I use to quickly compile my c program
and then run the executable. 

run - shell script

```
#!/usr/bin/env bash
# This script compiles and runs C programs.
gcc $1 
[[ $? -eq 0 ]] &&
printf "Running $1\n-------------------------------\n" &&
./a.out
```

## Hello World!

Our first program will of course be the classic 'Hello World!' printer. 

`hello_world.c`

```
#include<stdio.h>
#include <stdlib.h>

int main(){
	printf("Hello World!\n");
	return 0;
}
```

And when we run it we get!

```
> run hello_world.c 
Running hello_world.c
-------------------------------
Hello World!
```

There are a few basic components of the above program that we should review. To
start with there are these statements at the very top `#include<stdio.h>` and
`#include <stdlib.h>`. 

Those are the include statements. They tell the compiler what C library files
our program depends on. See not all of the code for our program lives within
our programs. Lots of it has already been written and lives in prepackages
bundles of tools called code libraries. The include statements allow us to
checkout something from one of those code libraries.

Then there is this statement `int main()`. That's our programs main function,
ie the most important one. Its executed automatically when the program is run
and its the place where all of our code will eventually tie back to. In C
whenever you define a function you have to specify its return type. That's the
reason why it's `int main()` because our main function will return a value of
type integer.

## Drawing A Triangle

We can use some print statements to create a basic shape.

`triangle.c`

```
#include<stdio.h>
#include <stdlib.h>

int main(){
	printf("   /|\n");
	printf("  / |\n");
	printf(" /  |\n");
	printf("/___|\n");
	return 0;
}
```

## Variables

A variable is a thing we can use to store information in our program. There are
a few different types of variables.

We'll look at the data-types, `int` and `char`.

```
#include<stdio.h>
#include <stdlib.h>

int main(){
	char characterName[] = "John";
	int characterAge = 35;

	printf("There once was a man named %s\n", characterName);
	printf("and he was %d years old.\n", characterAge);
	printf("He really liked the name %s\n", characterName);
	printf("but did not like being called %d.\n", characterAge);
	return 0;
}
```

We can use %s and %d to refer to strings and ints within printf respectively.

## Data Types

Data types are types of variables. They include but are not limited to,
characters, integers, floating point numbers, ect.

```
#include<stdio.h>
#include <stdlib.h>

int main(){
	int age = 40; 		// Age is type int
	double gpa = 3.7; 	// GPA is type double 
	char grade = 'A';	// Grade is type char and is storing a single character
	char name[] = "John";	// Name is an array of characters containing "John"

	printf("\n");
	return 0;
}
```

### Doubles vs Floats

A double is just a 64 bit float. Aka more precise. Its double the nubmer of sig
figs as a float hence the name. 

> double is a 64 bit IEEE 754 double precision Floating Point Number (1 bit for
> the sign, 11 bits for the exponent, and 52* bits for the value), i.e. double
> has 15 decimal digits of precision.

[Difference Betweeb Float and Double in C](https://www.geeksforgeeks.org/difference-float-double-c-cpp/)

### No String Type in C

There is no type 'string' in C. Instead if you want to make a string you need
to create an array of characters.

The char data types by default only stores a single character! 

If you define the variable as an array by using the [] then you can assign a
string to that character array. You have to use double quotes for any "string"
within a C program.

## Printf() 

One of the most useful prebuilt functions in C is the printf() function. It comes
in the stdio.h library and is essential for outputting stuff to the terminal
screen.

```
#include<stdio.h>
#include <stdlib.h>

int main(){
	int age = 26; 		// Age is type int
	double gpa = 3.7; 	// GPA is type double 
	char grade = 'A';	// Grade is type char and is storing a single character
	char name[] = "Johnny";	// Name is an array of characters containing "John"

	printf("Student Info\n");
	printf("Name: %s\n", name);	// %s for type char array[]
	printf("Grade: %c\n", grade); 	// %c for type single char
	printf("Age: %d\n", age);	// %d for type singed int
	printf("GPA: %f\n", gpa);	// %f for floating points nums aka type double

	return 0;
}
```

### Format Specifiers 

Printf has a number of format specifiers to detail what type of var printf() is
being handed. See a list of common ones below.

```
Format Specifier	Type

	%c			Character
	%d			Signed integer
	%f			Float values
	%i			Unsigned integer
	%lf			Double
	%o			Octal representation
	%p			Pointer
	%s			String
	%u			Unsigned int
	%x or %X		Hexadecimal representation
	%n			Prints nothing
	%%			Prints % character
```

[Format Specifiers in C](https://www.tutorialspoint.com/format-specifiers-in-c)

## Numbers and Arithmetic

Just like any programming language, C has a number of arithmetic operators for
doing math.

```
#include<stdio.h>
#include <stdlib.h>

int main(){

	printf("%f\n", 5.0 + 4.5);

	printf("%d\n", 5 / 4);		// Prints 1 because type is int
	printf("%f\n", 5 / 4.0);	// Prints 1.25 because type is float


	return 0;
}
```

Full list of C arithmetic operators below.

```
Operator	Description	

	+		Adds two operands.
	−		Subtracts second operand from the first.
	*		Multiplies both operands.
	/		Divides numerator by de-numerator.
	%		Modulus Operator and remainder of after an integer division.
	++		Increment operator increases the integer value by one.	
	--		Decrement operator decreases the integer value by one.
```

[C Arithmetic Operators](https://www.tutorialspoint.com/cprogramming/c_arithmetic_operators.htm)

### Strong Typing in C

C is considered a strongly typed language, meaning that variable types must be
specified and cannot easily be shifted or misinterpreted. For example, if the
number 1 is stored as a character type variable (char var = '1';) it cannot be
used to do arithmetic with unless first converted to a type int.

This also comes into play when using different data typed numbers. For example,
an int divided by an int will always give you a whole number. Whereas, a float
divided by a float will return a type float, ie a decimal number.

### Additional Math Functions

Built into the C stdlib.h library are a few useful additional math functions for
doing more than just simple arithmetic.

```
#include<stdio.h>
#include <stdlib.h>

int main(){

	printf("%f\n", pow(4, 3));	// pow() is the power of function for exponents
	printf("%f\n", sqrt(36));	// sqrt() is the square root funtion
	printf("%f\n", ceil(25.01));	// ceil() rounds up int (no matter remainder)
	printf("%f\n", floor(25.99));	// floor() rounds down int (no matter remainder)

	return 0;
}
```

## Comments

There's not much to say about comments in C. There are multi line comments
denoted by an opening '/*' and a closing '*/' character sequence and single
line comments denoted by a double slash '//' character sequence.

For example,

```
#include<stdio.h>
#include <stdlib.h>

int main(){

	// This is a single line C comment

	/* This is a multi line 
			C Comment */

	return 0;
}
```

## Constants

A contant is a special type of variable in C that cannot be modified. You can
make a variable a constant by prepending `const` to its declaration. It is
convention to name constants in all uppercase letters to help distinguish them.

The following program tries to modify a contstant and thus throws an error if
you try to compile it.

`constants.c`

```
#include<stdio.h>
#include <stdlib.h>

int main(){
	const int NUM = 5;
	printf("Number is: %d\n", NUM);

	NUM = 8;
	printf("Number is: %d\n", NUM);

	return 0;
}
```

```
> gcc constants.c
constants.c: In function ‘main’:
constants.c:8:6: error: assignment of read-only variable ‘NUM’
    8 |  NUM = 8;
      |      ^

shell returned 1
```

Other things considered to be constants are stings or numbers not stored in a
variable but instead refferenced directly. For example, the following are also
examples of constants in C.

`more_constants.c`

```
#include<stdio.h>
#include <stdlib.h>

int main(){
	printf("This string not stored in a variable is a constant.\n");

	printf("These ints are constants, %d %d", 17, 39);

	return 0;
}
```

Those values cannot be changed while the program is running.


## User Input

### Scanf() 

We can use a function in the <stdio.h> library called `scanf()` to take user
input in C. With scan if you have to tell it what type of input to expect (Ex.
type int, char, float, ect.) and then give it a variable to throw that value
into.

`basic_user_input.c`

```
#include<stdio.h>
#include <stdlib.h>

int main(){
	char grade;
	char name[20];		// Can store 20 chars
	int age;
	double gpa;

	printf("Enter your single digit grade: ");
	scanf(" %c", &grade);	// Use %c for character with scanf.
	// Scanf needs leading single space when recording single char 


	printf("Enter your name: ");
	scanf("%s", name);	// Use %s for character array with scanf.

	printf("Please enter your age: ");
	scanf("%d", &age);	// Use &age when putting data into age var.

	printf("Please enter your gpa: ");
	scanf("%lf", &gpa);	// Use %lf for double with scanf.


	printf("Your grade is %c.\n", grade);	
	printf("Your name is %s.\n", name);	
	printf("You are %d years old.\n", age);
	printf("Your gpa is %f.\n", gpa);		// Use %f for double with printf

	return 0;
}
```

### Fgets()

A limitation of scanf is that it cannot easily be made to read input with
spaces. So instead if we need to read in whole lines of text at a time we can
use a function called `fgets`.

`full_name.c`

```
#include<stdio.h>
#include <stdlib.h>

int main(){
	char full_name[20];	// Can store 20 chars
	printf("Enter your full name: ");
	fgets(full_name, 20, stdin);

	printf("Your full name is %s", full_name);	

	return 0;
}
```

A thing worth noting about fgets is that if you take input from stdin it will
come with a trailing invisible newline character from when the user pressed
enter.

## Basic Calc

Let's build a simple calculator using C. We could use type int's however that
won't allow us to add decimal numbers. So instead we'll use doubles (aka long
floats).

`basic_calc.c`

```
#include<stdio.h>
#include <stdlib.h>

int main(){
	double num1;
	double num2;

	printf("Enter first number: ");
	scanf("%lf", &num1);	// Pointer to num1

	printf("Enter second number: ");
	scanf("%lf", &num2);	// Pointer to num1

	printf("Result: %f\n", num1 + num2);

	return 0;
}
```

## MadLibs Game

Next we'll build a MadLibs game where we fill in the blanks with various verbs
and nouns and names taken as input.

`madlibs.c`

```
#include<stdio.h>
#include <stdlib.h>

int main(){
	char color[20];
	char pluralNoun[20];
	char celebrityF[20];
	char celebrityL[20];

	printf("Enter a color: ");
	scanf("%s", color);	// No & needed for string

	printf("Enter a plural noun: ");
	scanf("%s", pluralNoun);

	printf("Enter a celebrity name: ");
	scanf("%s%s", celebrityF, celebrityL);


	printf("Roses are %s\n", color);
	printf("%s are blue\n", pluralNoun);
	printf("I love %s %s\n", celebrityF, celebrityL);

	return 0;
}
```

With the celebrity name we want to be able to take a first and last name. To do
this with scanf we just tell it to read for two words with "%s%s". So that's
how you can accept two inputs with a space in the middle in C.

Now unfortunately however, we've created a new problem. The last input feild
must be given a first and last name. Else the program hangs waiting for input.

## Arrays

A very powerful datastructure in C is the `Array`. Arrays are lists of values
stored in sequence according to an index. Elements in an array can be
incremented over accoring to that index value. You can add elements to an
array, you can remove elements from an array.

When we declare an array in C we have to specify its type (ie. the type of the
variable the array will contain). If we're defining an empty array to start
with we must specify the max number of elements it can hold.

`arrays.c`

```
#include<stdio.h>
#include <stdlib.h>

int main(){
	int luckyNumbers[] = {3, 16, 77, 56, 23};
	     // Index values  0   1   2   3   4

	double favNumbers[77];	

	printf("%d\n", luckyNumbers[0]); 

	luckyNumbers[0] = 100;	// Can reassign just like normal var

	printf("%d\n", luckyNumbers[0]);

	favNumbers[7] = 23;

	printf("%f\n", favNumbers[15]);

	return 0;
}
```

To access a specific element in an array we have to refference the array
element's index value. The above print's out '4' because four is the first
value of our array (ie. index zero). Generally in programming array's are zero
based indexed, meaning the first element's index is always zero.

We can see with the `favNumbers[]` array that if we ask for the value of an
element that has not yet been defined we'll get either garbage or 0. 

As you can see everytime we've used strings before now we've just been using
them as an array of characters.


## Functions

According to some smart dude who works for the [UU CS
Department](https://www.cs.utah.edu/~germain/PPS/Topics/functions.html),

> Functions are "self contained" modules of code that accomplish a specific task.

So far the function we're most familiar with is the `main()` function. Main is
a special type of function that is automatically invoked without the need to
call it directly. Some of the other ones we've used so far are printf(),
scanf(), and fgets().

The first thing we have to tell C when we're creating a function is the return
type. In our case below we're going to use `void` meaning our function does not
return any information. It does do something, it prints to the screen. However,
printing to the screen is not the same as returning information to the parent
function.

Its good practice to name a function based on what it does / accomplishes.

`functions.c`

```
#include<stdio.h>
#include <stdlib.h>

int main(){
	sayHi("John", 26);
	sayHi("Timmy", 25);
	sayHi("Kim", 24);
	return 0;
}

void sayHi(char name[], int age){
	printf("Hello %s %d\n", name, age);
}
```

### Return Statements

Functions are invoked, meaning you have to call the function in order for the
code inside of the function to be execute. A function can return information to
the function that called it via the return type. 

To demonstrate return types we're going to make a fucntion that cubes a number.

In C its convention to define functions that return something higher up in the
code before the line where they're invoked.

`return_statements.c`

```
#include<stdio.h>
#include <stdlib.h>

double cube(double num){
	double result = num * num * num;
	return result;
}

int main(){

	printf("Answer: %f\n", cube(3.0));

	return 0;
}
```

### Prototyping

You are able to write a function below main if you do what's called prototyping
first. Essentially, you have to predeclare a few pieces on information about
your function first such as return type, number of args ect. 


`prototyping.c`

```
#include<stdio.h>
#include <stdlib.h>

double cube(double num); 	// Prototyping line

int main(){

	printf("Answer: %f\n", cube(3.0));

	return 0;
}

double cube(double num){
	double result = num * num * num;
	return result;
}
```

## If Statements

If statements allow us to add conditionality to our program (aka if something
is the case then do a thing else do other thing and so on and so on).

`if_statements.c`

```
#include<stdio.h>
#include <stdlib.h>

// Else example

int maxOfTwo(int num1, int num2){
	int result;

	if(num1 > num2){ 	// The '>' char is a Relational Operator
		result = num1;
	} else {
		result = num2;
	}
	return result;
}

// Else if example

int maxOfThree(int num1, int num2, int num3){
	int result;

	if(num1 >= num2 && num1 >= num3){	// The '&&' is a Logical And Operator
		result = num1;
	} else if(num2 >= num1 && num2 >= num3){
		result = num2;
	} else{
		result = num3;
	}
	return result;
}

int main(){

	printf("Answer: %d\n", maxOfTwo(10, 7));
	printf("Answer: %d\n", maxOfThree(23, 10, 7));

	// Logical Operators demonstrated using 0 and 1
	// Zero is false and One is true

	// The || only returns false if both sides evaluate to false
	if( 0 || 0 ){			// Try replacing 0 and 1 to test
		printf("True\n");
	} else {
		printf("False\n");
	}

	// The && only returns true if both sides evaluate to true
	if( 1 && 1 ){			// Try replacing 0 and 1 to test
		printf("True\n");
	} else {
		printf("False\n");
	}

	// Negation
	// Zero is false, so '! 0' means 'Not False'
	if( ! 0 ){
		printf("True\n");
	}

	return 0;
}
```

### Relational Operators

```
	Symbol 		Meaning

	==		equal to
	!=		not equal to
	>		greater than
	<		less than
	>=		greater than or equal to
	<=		less than or equal to
```

### Logical Operators

```
	Symbol		Meaning

	&&		Logical And
	||		Logical Or
	!		Logical Not
```

[C Operators](https://www.tutorialspoint.com/cprogramming/c_operators.htm)


### Building a Better Calculator

Now that we've learned about if statements and conditional logic we can put
that knowledge to use to improve on our calculator from earlier.

`better_calc.c`

```
#include<stdio.h>
#include <stdlib.h>

int main(){
	double num1;
	double num2;
	char op;

	printf("Enter first number: ");
	scanf("%lf", &num1);

	printf("Enter an operator (+, -, *, /): ");
	scanf(" %c", &op);	// Scanf needs leading single space for char 

	printf("Enter second number: ");
	scanf("%lf", &num2);	// Pointer to num1

	if(op == '+'){
		printf("Result: %f\n", num1 + num2);
	} else if(op == '-'){
		printf("Result: %f\n", num1 - num2);
	} else if(op == '*'){
		printf("Result: %f\n", num1 * num2);
	} else if(op == '/'){
		printf("Result: %f\n", num1 / num2);
	} else {
		printf("Invalid Operator!\n");
	}

	return 0;
}
```

As you can see the calculator above uses a chain of if statements to do basic
arithemetic on suplied input.


## Switch Statements

An alternative way of implementing conditionality in C is to use the `switch`
statement. Switch statements allow you to compare multiple options in a single
cascade of cases.

`switch_statement.c`

```
#include<stdio.h>
#include <stdlib.h>

int main(){
	char grade = 'A';

	switch(grade){
		case 'A' :
			printf("You did great! ");
			break;
		case 'B' :
			printf("You did alright. ");
			break;
		case 'C' :
			printf("You did average. ");
			break;
		case 'D' :
			printf("Ehh you shoulda studied a little bit. You can do better. ");
			break;
		case 'F' :
			printf("What's going on bud? Problems at home? ");
			break;
		default:
			printf("Invalid Grade!\n");
	}
	return 0;
}
```

This just saves you time instead of having to type out else if, else if, ect.


## Struct 

A `struct` is sort of like a build your own datatype. It can store multiple
differnt types of data in a single structure. So for example with a struct we
can store an int along side an array of chars, ect. Its is convention in C to
name structs starting with a capital letter.


```
#include<stdio.h>
#include <stdlib.h>

struct Student{
	char name[50];
	char major[50];
	int age;
	double gpa;
};

int main(){
	struct Student student1;	// Defined instance of struct almost like a var
	struct Student student2;	// Defined instance of struct almost like a var

	student1.age = 22;
	student1.gpa = 4.0;
	strcpy( student1.name, "Jim" );		// Have to use strcpy() function to load up arrays of chars
	strcpy( student1.major, "Football" );	// Have to use strcpy() function to load up arrays of chars

	student1.age = 23;
	student1.gpa = 3.98;
	strcpy( student1.name, "Zia" );		// Have to use strcpy() function to load up arrays of chars
	strcpy( student1.major, "Physics" );	// Have to use strcpy() function to load up arrays of chars

	return 0;
}
```

## While loops

A while loop is a programatic structure that allows us to continually loop over
some block of code until a certain condition is met.

`while_loop.c`

```
#include<stdio.h>
#include <stdlib.h>

int main(){
	int index = 1;

	while(index <= 5){
		printf("%d\n", index);
		index++;		// Same as, index = index + 1;
	}

	// Do while loop example
	do {
		printf("%d\n", index);
		index++;		// Same as, index = index + 1;
	} while(index <= 5);

	printf("%d\n", index);

	return 0;
}
```

You can see in the above example the difference between a do while loop and a
regular while loop is that a do while loop doesn't check the condition first.
So in the above case the do while loop will print 6 and increment the index
before checking the condition.


## Guessing Game

In this guessing game were going to pick a number and have the user try to
guess it. Our game will have a guessLimit aka a max number of guesses you're
allowed to take. And it will alert you if you're out of guesses or have guessed
the number correctly.

`guessing_game.c`

```
#include<stdio.h>
#include <stdlib.h>

int main(){
	int secretNumber = 5;
	int guess;
	int guessCount = 0;
	int guessLimit = 3;
	int outOfGuesses = 0;

	while(guess != secretNumber && outOfGuesses == 0){	// loop condition 
		if(guessCount < guessLimit){
			printf("Guess a number: ");
			scanf("%d", &guess);	// Throw input into guess var
			guessCount++;
		} else {
			outOfGuesses = 1;
		}
	}

	if(outOfGuesses == 1){
		printf("You're out of guesses.\n");
	} else {
		printf("You Win!\n");
	}

	return 0;
}
```


## For loops

For loops are almost like specialized while loops. They allow us to increment
over items automatically with an indexing variable.

Just like a while loop, for loops also have a loop condition which will stop
the looping. 

`for_loop.c`

```
#include<stdio.h>
#include <stdlib.h>

int main(){
	// Prototypical while loop
	int i = 1;
	while(i <= 5){
		printf("%d ", i);
		i++;
	}

	printf("\n");

	// Equivalent for loop
	int j;
	for(j = 1; j <= 5; j++){
		printf("%d ", j);
	}

	// Lucky numbers
	int luckyNumbers[] = {4, 6, 14, 23, 9, 16};

	printf("\nYour lucky numbers are:\n");

	int x;
	for(x = 0; x < 6; x++){
		printf("%d ", luckyNumbers[x]);
	}
	
	return 0;
}
```

In a for loop three pieces of information can be specfied between the
parenthesis. First is the value of the incrementing variable. The next is the
loop condition. Finally is the operation to be preformed on the incrementation
variable.

You can see how each of these parts is also present in the while loop. However,
the forloop is specifically designed with these elements ready at hand.

## 2D Arrays & Nested Loops

2D (multi dimentional) arrays allow you to have an array inside of another array.

`2d_arrays_and_nested_loops.c``

```
#include<stdio.h>
#include <stdlib.h>

int main(){
	// Defined using two sets of brackets [][]
	// Number of arrays
	//       | Number of elements per array
	//       v  v 
	int nums[3][2] = { 
			{1, 2},
			{3, 4},
			{5, 6}
		};

	printf("%d\n", nums[0][0]);	// First array, first element (1)
	printf("%d\n", nums[1][1]);	// Second array, second element (4)
	printf("%d\n", nums[2][1]);	// Last array, last element (6)
	printf("\n");

	// Nested forloop
	int i, j;
	// Increment over top level array (has 3 elements)
	for(i = 0; i < 3; i++){
		// Increment over inner arrays (each has 2 elements)
		for(j = 0; j < 2; j++){
			printf("%d\n", nums[i][j]);	// If i and j are both zero, nums[i][j] has the value 1, ect.
		}
		printf("\n");
	}

	return 0;
}
```


## Memory Addresses

Variables are stored in memory. Memory comes in chunks called registers. Those
registers have addresses which are typically represented as hexidecimal
numbers. In C we're able to directly access the physical/virtual memory
addresses.

`memory_addresses.c`

```
#include<stdio.h>
#include <stdlib.h>

int main(){
	int age = 30;
	double gpa = 3.4;
	char grade = 'A';

	printf("Age address: %p\n", &age);	// Print's physical memory address
	printf("GPA address: %p\n", &gpa);	// Print's physical memory address
	printf("Grade address: %p\n", &grade);	// Print's physical memory address

	return 0;
}
```

## Pointers

A pointer is a type of data representing a memory address. As mentioned
previously these are typically represented as hex numbers.

To define a pointer variable you have to use the * character after specifying
the type (i.e. int*, float*, char*, ect.)

When naming pointer variables it it convension to name it following the scheme,
pOriginalVarName.

```
#include<stdio.h>
#include <stdlib.h>

int main(){
	int age = 30;		// Integer variable storing integer value 30.
	int* pAge = &age;	// Pointer variable storing memory address of age variable.

	double gpa = 3.4;
	double* pGpa = &gpa;	// Pointer variable storing memory address of gpa variable.

	char grade = 'A';
	char* pGrade = &grade;	// Pointer variable storing memory address of grade variable.

	printf("Age address: %p\n", &age);	// & prefix print's physical memory address

	return 0;
}
```

### Dereferencing Pointers

To de-reference a pointer is to get the memory stored at that physical address
(i.e. to resolve a memory address to some data).

To de-reference a pointer in C we use the * character before the pointer
variables name (i.e. *pVar).

```
#include<stdio.h>
#include <stdlib.h>

int main(){
	int age = 30;		// Integer variable storing integer value 30.
	int* pAge = &age;	// Pointer variable storing memory address of age variable.

	printf("Age address: %p\n", pAge);
	printf("Value at pAge: %d\n", *pAge);	// Notice de-refferenced pointer is type int 
	printf("Value of age: %d\n", *&age);	// De-refferenced pointer to age

	return 0;
}
```


## File IO

We can use C to write to files and to read from files. To open a file for
reading or writing we'll use a pointer to a function called `fopen()`. The
fopen function can be called in a few different modes depending on what you
intend to do to the file.

`file_io.c`

```
#include<stdio.h>
#include <stdlib.h>

int main(){
	// Writing to a file
	FILE* fpointer1 = fopen("employees.txt", "w");

	// Like printf but for files
	fprintf(fpointer1, "Jim, Sales\nPan, Reception\nOscar, Accounting");
	
	fclose(fpointer1);	// Closes file

	// Reading from a file
	char line[255];

	FILE* fpointer2 = fopen("employees.txt", "r");

	// Gets first line from file and stores it in variable line
	fgets(line, 255, fpointer2);
	printf("%s\n", line);

	// Gets second line from file and stores it in variable line
	fgets(line, 255, fpointer2);
	printf("%s\n", line);

	// Gets third line from file and stores it in variable line
	fgets(line, 255, fpointer2);
	printf("%s\n", line);

	// See how the line number is auto incremented by fgets

	fclose(fpointer2);	// Closes file

	return 0;
}
```

### Fopen File Modes

```
"r"	Opens a file for reading. The file must exist.

"w"	Creates an empty file for writing. If a file with the same name already exists,
	its content is erased and the file is considered as a new empty file.

"a"	Appends to a file. Writing operations, append data at the end of the file. The
	file is created if it does not exist.

"r+"	Opens a file to update both reading and writing. The file must exist.
	
"w+" 	Creates an empty file for both reading and writing.

"a+"	Opens a file for reading and appending.
```

[Fopen File Modes](https://www.tutorialspoint.com/c_standard_library/c_function_fopen.htm)
