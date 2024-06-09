#include <stdio.h>
#include <stdlib.h>
// wap to create a data type with for student nested structure access it with . then pointer then pointer symbol
struct Student{
    char name[255];
    int year;
    int rollno;
    struct adress
    {
        int hno;
        char state[50];
        int pincode;
    }ad;
};

// *p.rollno;
// p-> rollno;

int main()
{
    struct Student st;
    struct student *p;
    p=&st;

    scanf("%s",&st.ad.state[50]);
//    printf("%s", &p->.state[50]);
    return 0;
}
