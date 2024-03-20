# ATTT
 Advanced TicTacToe
 This project was for my Computer Graphics class, which is why it uses the graphics.h library and requires Turbo C++ to run in.

This game consists of 9 3*3 Tic Tac Toe grids. 
It starts off with the X player putting down an X anywhere they want, after which, the 0 player must go to the corresponding grid and put down a 0 anywhere they want in that grid. This goes on till someone wins in one of the 9 grids, which is when that grid will be marked with an X or a 0 accordingly. For someone to win, they must secure 3 Xs or 0s in a row/column/grid in the big grid by winning in the smaller grids.

If someone's move takes their opponent to a grid that has already been won, the opponent will make their move in the same grid (the one they're currently in). 
If someone's move takes their opponent to a grid that has already been won and the current grid also just got won (from the last move), the opponent must make their move in the grid they were previously in. If the previous grid has also already been won, they keep going back till they find a grid they can make a move in. 
The program does this automatically.

Enjoy :D
