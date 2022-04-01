[![CodeFactor](https://www.codefactor.io/repository/github/arthurboucard/cpe_matchstick/badge)](https://www.codefactor.io/repository/github/arthurboucard/cpe_matchstick)

# Matchstick

## <img width="26px" src="https://newsroom.ionis-group.com/wp-content/uploads/2018/12/epitech-logo-signature-quadri.png"/> Epitech project :

A game of matchstick against a small AI in C.

---

### :video_game: How to play :
• There is a certain number of matchstick lines.
<br>
• The two players take turns; each player can, on a same line, take at least one or several matchsticks.
<br>
• The losing player is the one to take the last matchstick.

---

### :computer: How to run :
```
./matchstick x y
   x = number of lines
   y = max amount of matches that can be removed
```

---

### :exclamation: Rules :
> The basic version must generate a game board with n matchstick lines (1 < n < 100). <br>
> When matchsticks are removed, they must be removed starting from the right. <br>
> The user will always start the game.

---

### Exemple of a game :
```
$> ./matchstick 4 5
*********
*   |   *
*  |||  *
* ||||| *
*|||||||*
*********

Your turn:
Line: 4
Matches: 2
Player removed 2 match(es) from line 4
*********
*   |   *
*  |||  *
* ||||| *
*|||||  *
*********

AI's turn...
AI removed 2 match(es) from line 3
*********
*   |   *
*  |||  *
* |||   *
*|||||  *
*********

...

Your turn:
Line: 4
Matches: 2
Player removed 2 match(es) from line 4
*********
*       *
*       *
*       *
*|      *
*********

AI's turn...
AI removed 1 match(es) from line 4
*********
*       *
*       *
*       *
*       *
*********
I lost... snif... but I'll get you next time!!
```

---

Made in C
