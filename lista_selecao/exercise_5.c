#include <stdio.h>

int main() {
    int first_team_goals, second_team_goals;

    printf("Digite os gols do primeiro time: ");
    scanf("%d", &first_team_goals);
    printf("Digite os gols do segundo time: ");
    scanf("%d", &second_team_goals);

    if (first_team_goals == second_team_goals) {
        printf("Empate\n");
    } else if (first_team_goals > second_team_goals) {
        printf("Vitoria do primeiro time\n");
    } else {
        printf("Vitoria do segundo time\n");
    }

    return 0;
}
