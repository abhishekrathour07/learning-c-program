int load()
{
    int i;
    while (1)
    {
        cyan();
        printf("LOADING\t");
        for (i = 0; i < 3; i++)
        {
            red();
            Beep(3700, 500);

            printf(">>");

            Beep(3000, 500);
        }
        system("cls"); // for clearing the terminal screen
        break;
    }
}