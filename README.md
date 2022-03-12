<center>
  <img src="https://i.imgur.com/HJ0o56W.jpeg">
</center>

# Description
[Hangman](https://en.wikipedia.org/wiki/Hangman_%28game%29) is a words guessing game for one player. The computer guesses a word and the user has to suggest letters one by one. Every time the word contains a letter, the computer opens it (all of them, if there are a few). Every time the word doesn't contain a letter, the computer gives a penalty point for the user. If there are five penalty points, the user looses. If there are no hidden letters anymore, the computer looses.

# Setup
### Cross gcc
```
gcc main.cpp Animation.cpp Game.cpp -o hangman
```
### Cross g++
```
g++ main.cpp Animation.cpp Game.cpp -o hangman
```
### Cross g++ static
```
g++ main.cpp Animation.cpp Game.cpp -static-libstdc++ -static-libgcc -o hangman
```

## Game image
<p align="center" width="100%">
  <img src="https://i.imgur.com/JLGhDG9.png">
  <img src="https://i.imgur.com/hcjBa5a.png">
</p>
