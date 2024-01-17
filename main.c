/*
** EPITECH PROJECT, 2018
** popup
** File description:
** main
*/

#include <ncurses.h>
#include <string.h>

int my_strlen(char *str)
{
    int i;

    for(i = 0; str[i]; i++);
    return (i);
}

int main (void)
{
    char txt[] = "coucou";
    int space = 0;
    //int x;
    //int y;

    initscr();
    //getmaxyx(stdscr, x ,y);
    //mvprintw(x/2, (y - my_strlen(txt))/2, "%s", txt);
    mvprintw(LINES/2, COLS/2, "%s", txt);
    refresh();
    while (space != 32)
        space = getch();
    endwin();
    return (0);
}
