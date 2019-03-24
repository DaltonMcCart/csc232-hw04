# Hw04 - Language Recognition

This assignment is an adaptation of **Programming Exercise 5.7** found on page 187 of your textbook. The problem statement is repeated here for your convenience.

## Programming Problem 5.7

Implement a recognition algorithm for the language in Exercise 5.

## Exercise 5.5

Consider a language of strings that contains only _X_'s, _Y_'s and _Z_'s. A string in this language must begin with an _X_. If a _Y_ is present in the string, it must be the final character of the string.

This language is specified by the following recursive grammar:

```text
<word> = <X><U> | <X><word> | <X>Y
<U>    = X | Z
<X>    = X
```

## The Adaptation

As mentioned above, this assignment is an _adaptation_ of the above exercise/programming problem. You will implement the algorithm in a method of given class.

