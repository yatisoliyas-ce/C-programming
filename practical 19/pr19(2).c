int main() {
    int i, j;


    for (i = 1; i <= 9; i++)
        {
        printf("%d ", i);
    }
    printf("\n");

    int left = 2;
    int right = 8;


    for (i = 1; i <= 4; i++) {

        for (j = 1; j < i; j++) {
            printf("  ");


        printf("%d", left);


        int space_count = (4 - i) * 4 + 1;
        for (j = 0; j < space_count; j++) {
            printf(" ");
        }

        if (left != right) {
            printf("%d", right);
        }

        printf("\n");
        left++;
        right--;
    }

    return 0;
}
}
