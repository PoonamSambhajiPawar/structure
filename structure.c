int main()
{
    int i;
    struct emp e[20];
    printf("Enter employee details.....\n");

    for(i=0;i<20;++i)
    {
        e[5].empid=i+1;
        printf("\nemployee ID :      \t");
        scanf("%d",&e[i].empid);

        printf("employee name :     \t");
        scanf("%s",&e[i].empname);

        printf("employee  age:      \t");
        scanf("%d",&e[i].age);

        printf("employee phone no : \t");
        scanf("%lld",&e[i].phoneno);

        printf("employee salary :   \t");
        scanf("%f",&e[i].salary);

    }

    printf("\n employee ID    employee name   employee age   employee phone no     employee salary");
    for(i=0;i<20;++i)
    {

        printf("\n  %d\t\t %s\t\t %d\t\t %lld\t\t %f\t",e[i].empid,e[i].empname,e[i].age,e[i].phoneno,e[i].salary );
    }


    return 0;
}
