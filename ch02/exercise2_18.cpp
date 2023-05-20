int main()
{
    int i = 3, j = 4;
    int *p = &i;

    p = &j;     // change the value of p
    *p = 5;     // change the value of the object to which p points
}
