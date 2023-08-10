# Learning Make

I'm following along with the video linked below learn the basics of and take
some notes on using `make`.

[Makefiles Make Your Life Easier - NeuralNine](https://youtu.be/yWLkyN_Satk)

Thanks, Florian Dedov!

## Source Files

Its a very simple example hello world program that makes use of a fucntions in
a header file.

* `functions.h`

```
const char* get_message() {
    return "Hello World!\n";
}
```

* `hello.c`

```
#include <stdio.h>
#include "functions.h"

void hello() {
    printf ("%s", get_message());
}
```

* `main.c`

```
int main() {
    hello();
    return 0;
}
```

As you can see in `main.c` hello is not defined so we'll have to manually link
`main.c` to `hello.c`.

## The Manual Way

First we'll compile `main.c`. We're using the
`-Wno-implicit-function-declaration` gcc flag to ignore some warnings.

```
gcc -Wno-implicit-function-declaration -c main.c
```

That will produce a `main.o` object file.

Then we'll compile the `hello.c` file.

```
gcc -Wno-implicit-function-declaration -c hello.c
```

Then we have to link our two object files.

```
gcc -Wno-implicit-function-declaration main.o hello.o -o final
```

Then we have our executable linked binary and we can run it.

```
./final 
Hello World!
```

So that's a bit of a process and as the program grows in complexity it becomes
a pain to run all of those commands each time.

## Using Make

We can automate this process with `make`.

From `man make`,

```
NAME
       make - GNU make utility to maintain groups of programs

DESCRIPTION
       The  make  utility  will determine automatically which pieces of a large program need to be
       recompiled, and issue the commands to recompile them...
```

The makefile script lang has rules and targets. From GNU.orgs article on the
subject.

> A rule in the makefile tells Make how to execute a series of commands in
> order to build a target file from source files.  It also specifies a list of
> dependencies of the target file. This list should include all files (whether
> source files or other targets) which are used as inputs to the commands in
> the rule.
>
> Here is what a simple rule looks like:
> 
> target:   dependencies ...
>           commands
>           ...

- [GNU Make](https://www.gnu.org/software/make/)

### Making our Makefile

Makefiles can either be named `makefile` or `Makefile`, with an uppercase or
lowercase m. All caps will not work.

```
CFLAGS = -Wno-implicit-function-declaration

all: final

final: main.o hello.o
	@echo "Linking files"
	@gcc $(CFLAGS) main.o hello.o -o final

main.o: main.c
	@echo "Compiling the main file"
	@gcc $(CFLAGS) -c main.c

hello.o: hello.c
	@echo "Compiling the hello file"
	@gcc $(CFLAGS) -c hello.c

clean: 
	@echo "Cleaning up"
	rm main.o hello.o final
```

At the top of our Makefile we're going to define the gcc flags that we've been
using when compiling manually to suppress some warnings.

Next we'll setup our first target `all`, that will have the dependency `final`.

Make is smart and sees that the `final` target file does not exist yet and so
it will automatically resolve that dependency by calling the code under the
`final` target.

Likewise, the `final` depends on the `main.o` and `hello.o` files. So make will
then go on to resolve those dependencies, compiling those files.

Once the chain of deps has been resolved, make will pop back up the stack and
produce the final ELF binary.

The `clean` target at the end is for uninstalling / cleaning up the non-source
files.

The `@` in front of commands makes it so only the output of those commands is
printed, and not the commands themselves. In the case of the `rm` command under
the clean target we want the user to see that so we leave it un-prefixed.

### Compiling with Make

Since we've already manually compiled this project once, first we'll run `make
clean` to cleanup the project directory.

```
» make clean 
Cleaning up
rm main.o hello.o final
```

Then we can just run `make` to compile our project for us.

```
» make
Compiling the main file
Compiling the hello file
Linking files
```

