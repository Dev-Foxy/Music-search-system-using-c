#include <stdio.h>
#include <string.h>

char songs[][80] = {
    "Home - Vince Stampple",
    "Memories - Thutmose",
    "Save the day - Ski mask",
    "Sunflower - Post Malone",
    "Familia - Nicki Minaj",
    "Way up - Jadon Smith",
};

void find_songs(char search_for[80]) // function for finding song
{
    int i;
    for (i = 0; i < 6; i++)
    {
        if (strstr(songs[i], search_for))
        {
            printf("Track %d: '%s'\n", i + 1, songs[i]);
        }
    }
}

int main()
{
    char search_for[80];
    printf("Search for: ");
    fgets(search_for, 80, stdin);
    search_for[strlen(search_for) - 1] = '\0';
    find_songs(search_for);
    return 0;
}