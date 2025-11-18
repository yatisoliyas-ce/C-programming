#include <stdio.h>
#include <string.h>

struct Coach
{
    char name[50];
    int age;
    int yearsOfExperience;
};

struct Team
{
    char teamName[50];
    char sportType[50];
    struct Coach coach;
};

struct Team teams[100];
int teamCount = 0;

void addTeam()
{
    if (teamCount >= 100)
        {
        printf("\nCannot add more teams. Maximum limit reached!\n");
        return;
    }

    printf("\n=== Add New Team ===\n\n");

    printf("Enter Team Name: ");
    getchar();
    fgets(teams[teamCount].teamName, 50, stdin);
    teams[teamCount].teamName[strcspn(teams[teamCount].teamName, "\n")] = 0;

    printf("Enter Sport Type: ");
    fgets(teams[teamCount].sportType, 50, stdin);
    teams[teamCount].sportType[strcspn(teams[teamCount].sportType, "\n")] = 0;

    printf("\nCoach Details\n");
    printf("Enter Coach Name: ");
    fgets(teams[teamCount].coach.name, 50, stdin);
    teams[teamCount].coach.name[strcspn(teams[teamCount].coach.name, "\n")] = 0;

    printf("Enter Coach Age: ");
    scanf("%d", &teams[teamCount].coach.age);

    printf("Enter Years of Experience: ");
    scanf("%d", &teams[teamCount].coach.yearsOfExperience);

    teamCount++;
    printf("\nTeam added successfully!\n");
}

void searchTeam() {
    char searchName[50];
    int found = 0;

    printf("\nSearch Team\n\n");
    printf("Enter Team Name to search: ");
    getchar();
    fgets(searchName, 50, stdin);
    searchName[strcspn(searchName, "\n")] = 0;

    for (int i = 0; i < teamCount; i++) {
        if (strcmp(teams[i].teamName, searchName) == 0) {
            printf("\n Team Found \n");
            printf("Team Name: %s\n", teams[i].teamName);
            printf("Sport Type: %s\n", teams[i].sportType);
            printf("Coach Name: %s\n", teams[i].coach.name);
            printf("Coach Age: %d\n", teams[i].coach.age);
            printf("Years of Experience: %d\n", teams[i].coach.yearsOfExperience);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nTeam not found!\n");
    }
}

void displayAllTeams() {
    if (teamCount == 0) {
        printf("\nNo teams available!\n");
        return;
    }

    printf("\n=== All Teams ===\n");

    for (int i = 0; i < teamCount; i++) {
        printf("\n--- Team %d ---\n", i + 1);
        printf("Team Name: %s\n", teams[i].teamName);
        printf("Sport Type: %s\n", teams[i].sportType);
        printf("Coach Name: %s\n", teams[i].coach.name);
        printf("Coach Age: %d\n", teams[i].coach.age);
        printf("Years of Experience: %d\n", teams[i].coach.yearsOfExperience);
    }
}

int main()
{
    int choice;
    printf(" CHARUSAT Sports Team Management System \n");

    while (1)
        {
        printf("\nMenu\n");
        printf("1. Add New Team\n");
        printf("2. Search Team\n");
        printf("3. Display All Teams\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            addTeam();
        }
    else if (choice == 2)
        {
            searchTeam();
        }
    else if (choice == 3)
        {
            displayAllTeams();
        }
    else if (choice == 4)
        {
            printf("\nExiting... Thank you!\n");
            break;
        }
    else
        {
            printf("\nInvalid choice! Please try again.\n");
        }
    }
    return 0;
}
