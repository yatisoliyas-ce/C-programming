#include <stdio.h>

int main()
{
    int refill_rate, tank_capacity, current_level = 0;


    printf("Enter the refill rate (liters per minute): ");
    scanf("%d", &refill_rate);

    printf("Enter the tank capacity (liters): ");
    scanf("%d", &tank_capacity);


    if (tank_capacity <= 0 || refill_rate <= 0)
        {
        printf("Invalid input. Tank capacity and refill rate must be greater than zero.\n");
        return 1;
    }

    while (current_level < tank_capacity)
        {
        current_level += refill_rate;


        if (current_level > tank_capacity)
            {
            current_level = tank_capacity;
        }

        printf("Current water level: %d liters (%d%% full)\n", current_level, (current_level * 100) / tank_capacity);

        for (int i = 0; i < 100000; i++);
    }


    printf("Tank is full.\n");

    return 0;
}
