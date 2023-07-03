# Dante
=======

## Description
Dante is a first-year project at Epitech, divided into two parts. The first part generates a maze, while the second part solves the maze. The program must be run with a specific file that contains all necessary information

The goal of this project is to generate mazes (in a reasonable amount of time), solve them (in a reasonable
amount of time), and print the solution.

## Install and Run the project
### Requirements
---
To use the Dante, you need to install the dependencies and launch it locally on your PC.

*Clone the project:*
```
git clone https://github.com/ablaring/Dante

cd Dante
```

*Generate the Maze:*
```
make && ./generator/generator x y [perfect]
```

*Solve the Maze:*
```
./solver maze.txt
```

*Error 84:*
```
echo $?
84
```

Enjoy !

---

## Example of Program Execution
Here's an example of how you might run the dante program and what the expected output would look like:

```
make && ./generator 24 6
```
#Here is a 24x6 maze. . .
```
*****XX****X********XXXX
XX******XX***XXXXX***XXX
XX***XXXX**XXXXX****XXXX
XX***XXXXXXXXXXXXXX****X
*****XXXXXX****XX***XXXX
XX*************XXXX*****
```

```
./solver maze.txt
```

. . .and a way to solve it.
```
oooooXXooooXooooooooXXXX
XX**ooooXXoooXXXXX*o*XXX
XX***XXXX**XXXXX***oXXXX
XX***XXXXXXXXXXXXXXo***X
*****XXXXXX****XX**oXXXX
XX*************XXXXooooo
```

## Developers
- [Arthur Blaringhem](https://github.com/ablaring)
- [Raphaël Sillegue](https://github.com/raaphh)
