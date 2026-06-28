# Loop abstractions

This is repository is me playing around with C.

## lessons

1. Bottom line: C arrays are limited. You cannot calculate their length in a sub-function, period. You have to code your way around that limitation, or use a different language (like C++). See [SO](https://stackoverflow.com/a/4162948)

2. GNU Make is a public secret:

> Make is a dirty secret among developers - none of us understand it, we just borrow a make script from somebody else and change it. I imagine only one script was ever written from scratch (probably by the creator of the tool).

* There is an amazing source here: https://makefiletutorial.com/#makefile-cookbook

See https://stackoverflow.com/a/220177.

3. Executables and libraries are **not** same.

> The .o's are executables and the .so and .a are libraries
> comparable to R packages.