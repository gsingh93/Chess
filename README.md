Chess
=====

### Compiling

**Note: This project was abandoned in a non-working state. The code will compile and a chess board with some pieces will be shown, but the game isn't functional, nor do all the pieces display correctly. For educational purposes only.**

You must have Qt4.8.1 or higher installed to run this project. You can install this from the [Qt website](http://qt-project.org/). If you're using a Linux distro with apt-get, you can use the following command:

`sudo apt-get install libqt4-dev`

Once Qt is installed, run the following command to generate a makefile:

`qmake chess.pro -o Makefile`

Now to compile the project, run `make`

### Running

The executable can be run by typing `./chess`