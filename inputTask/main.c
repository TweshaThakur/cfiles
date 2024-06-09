// program to input details like name, age, reg no , last sem marks, blood group (without sign)

#include <stdio.h>
#include <stdlib.h>

/**int main()
{
    int age;
    float last_sem_cgpa;
    char B_grp[2];
    char name[15];
    long int reg_no;

    printf("Please enter your details below - \n");
    printf("Age : "); scanf("%d",&age);
    printf("Registration number : "); scanf("%ld",&reg_no);
    printf("Last semester CGPA : "); scanf("%f",&last_sem_cgpa);
    printf("Blood Group : "); scanf("%s", &B_grp);
    printf("Name : "); scanf("%s",&name);

    printf("Age - %d\n",age);
    printf("Reg no - %.2ld\n", reg_no);
    printf("last sem cgpa- %f\n", last_sem_cgpa);
    printf("Blood group - %s\n", B_grp);
    printf("Name %s ", name);

    return 0;
}
**/



// program to find number of vowels in a string (name)
/**
int check (char str[])
{
    int ctr=0;
    for (int i=0 ; i<15 ; i++)
    {
        if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            {
                ctr++;
            }
    }
    return ctr;
}
int main()
{
    char name[15];

    printf("Enter Name : ");
    scanf("%s",&name);

    printf("Yes Name contains %d vowels",check(name));


    return 0;
}
**/

//input 2d array
/**
int main()
{
    int matrix[3][4],i,j;

    for (i=0 ; i<3; i++)
    {
        for (j=0; j<4; j++)
        {
            printf("Enter value of matrix [%d][%d] = ",i,j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i=0 ; i<3; i++)
    {
        for (j=0; j<4; j++)
        {
            printf("%d ",matrix[i][j]);

        }
        printf("\n");
    }


    return 0;
}
**/

//reverse an array
// sum of two matrixces
//sum of diagonal elements
