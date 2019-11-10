#include<stdio.h>

struct student
{
        int reg_no;
        char name[100];
        int marks[6];
        int total;
        float average;
};

void flush()
{
        while(getchar()!='\n');
}

void getString(char str[], int n)
{
        int i=0;
        while((i<n-1) && ((str[i++]=getchar())!='\n'));
        str[i-1]=0;
}

int compare(char str1[], char str2[])
{
        int i=-1;
        do
        {
                i++;
                if(str1[i]!=str2[i])
                        return (str1[i]-str2[i]);
        }while(str1[i]!='\0' && str2[i]!='\0');
        return 0;
}

int checkRegNo(struct student details[], int i)
{
        int j;
        for(j=0; j<i; ++j)
                if(details[j].reg_no==details[i].reg_no)
                        return 0;
        return 1;
}

int checkMarks(int m)
{
        if(!(m>=0 && m<=100)) return 0;
        else return 1;
}

void printDetails(struct student details[], int n)
{
        int i, j;
        for(i=0; i<n; ++i)
        {
                printf("\nReg No: %d\n", details[i].reg_no);
                printf("Name: %s\n", details[i].name);
                printf("Marks: ");
		               for(j=0; j<6; ++j) printf("%d ", details[i].marks[j]);
                printf("\nTotal: %d\n", details[i].total);
                printf("Average: %f\n", details[i].average);
        }
}
void name_sort(struct student details[], int n)
{
        struct student temp;
        int i, j, k;
        for(i=0; i<n-1; ++i) {
                for(j=0; j<n-i-1; ++j) {
                        if(compare(details[j].name, details[j+1].name)>0) {
                                for(k=0;details[j].name[k]!='\0' ;k++)
                                        temp.name[k]=details[j].name[k];
                                temp.name[k]='\0';
                                temp.reg_no = details[j].reg_no;
                                for(k=0; k<6; ++k)
                                        temp.marks[k]=details[j].marks[k];
                                temp.total = details[j].total;
                                temp.average = details[j].average;

                                for(k=0;details[j+1].name[k]!='\0' ;k++)
                                        details[j].name[k]=details[j+1].name[k];
                                details[j].name[k]='\0';
                                details[j].reg_no = details[j+1].reg_no;
                                for(k=0; k<6; ++k)
                                        details[j].marks[k]=details[j+1].marks[j];
                                details[j].total = details[j+1].total;
                                details[j].average = details[j+1].average;

                                for(k=0;temp.name[k]!='\0' ;k++)
                                        details[j+1].name[k]=temp.name[k];
                                details[j+1].name[k]='\0';
                                details[j+1].reg_no = temp.reg_no;
                                for(k=0; k<6; ++k)
                                        details[j+1].marks[k]=temp.marks[k];
                                details[j+1].total = temp.total;
                                details[j+1].average = temp.average;
                        }
                }
        }
}

void reg_no_sort(struct student details[], int n)
{
        struct student temp;
        int i, j, k;
        for(i=0; i<n-1; ++i) {
                for(j=0; j<n-i-1; ++j) {
                        if(details[j].reg_no>details[j+1].reg_no) {
                                for(k=0;details[j].name[k]!='\0' ;k++)
                                        temp.name[k]=details[j].name[k];
                                temp.name[k]='\0';
                                temp.reg_no = details[j].reg_no;
                                for(k=0; k<6; ++k)
                                        temp.marks[k]=details[j].marks[k];
                                temp.total = details[j].total;
                                temp.average = details[j].average;

                                for(k=0;details[j+1].name[k]!='\0' ;k++)
                                        details[j].name[k]=details[j+1].name[k];
				       details[j].name[k]='\0';
                                details[j].reg_no = details[j+1].reg_no;
                                for(k=0; k<6; ++k)
                                        details[j].marks[k]=details[j+1].marks[j];
                                details[j].total = details[j+1].total;
                                details[j].average = details[j+1].average;

                                for(k=0;temp.name[k]!='\0' ;k++)
                                        details[j+1].name[k]=temp.name[k];
                                details[j+1].name[k]='\0';
                                details[j+1].reg_no = temp.reg_no;
                                for(k=0; k<6; ++k)
                                        details[j+1].marks[k]=temp.marks[k];
                                details[j+1].total = temp.total;
                                details[j+1].average = temp.average;
                        }
                }
        }

}

void avg_sort(struct student details[], int n)
{
        struct student temp;
        int i, j, k;
        for(i=0; i<n-1; ++i) {
                for(j=0; j<n-i-1; ++j) {
                        if(details[j].average>details[j+1].average) {
                                for(k=0;details[j].name[k]!='\0' ;k++)
                                        temp.name[k]=details[j].name[k];
                                temp.name[k]='\0';
                                temp.reg_no = details[j].reg_no;
                                for(k=0; k<6; ++k)
                                        temp.marks[k]=details[j].marks[k];
                                temp.total = details[j].total;
                                temp.average = details[j].average;

                                for(k=0;details[j+1].name[k]!='\0' ;k++)
                                        details[j].name[k]=details[j+1].name[k];
                                details[j].name[k]='\0';
                                details[j].reg_no = details[j+1].reg_no;
                                for(k=0; k<6; ++k)
                                        details[j].marks[k]=details[j+1].marks[j];
                                details[j].total = details[j+1].total;
                                details[j].average = details[j+1].average;

                                for(k=0;temp.name[k]!='\0' ;k++)
                                        details[j+1].name[k]=temp.name[k];
                                details[j+1].name[k]='\0';
                                details[j+1].reg_no = temp.reg_no;
                                for(k=0; k<6; ++k)
                                        details[j+1].marks[k]=temp.marks[k];
                                details[j+1].total = temp.total;
                                details[j+1].average = temp.average;
                        }
                }
        }

}int main()
{
        int i, j, count, ch, n, reg_no;
        printf("Number of Students: ");
        scanf("%d", &n); flush();

        struct student details[n];

        printf("Enter details of Students below:\n");
        for(i=0; i<n; ++i)
        {
                printf("Student %d\n:", i+1);
                printf("Register Number: ");
                scanf("%d", &details[i].reg_no); flush();
                printf("Name: ");
                getString(details[i].name, 100);
                printf("Enter Marks in 6 Subjects:\n");
                details[i].total=0;
                for(j=0; j<6; ++j)
                {
                        do
                        {
                                scanf("%d", &details[i].marks[j]);
                                if((ch=checkMarks(details[i].marks[j]))!=1)
                                        printf("Invalid marks. Range [0, 100].\n");
                        }while(ch!=1);
                        details[i].total+=details[i].marks[j];
                }
                details[i].average=details[i].total/6.0;
                flush();
        }

        name_sort(details, n);
        printf("\nSorting by Name:\n");
        printDetails(details, n);
        reg_no_sort(details, n);
        printf("\nSorting by Reg No:\n");
        printDetails(details, n);
        avg_sort(details, n);
        printf("\nSorting by Average:\n");
        printDetails(details, n);

        printf("Enter Register Number: ");
        scanf("%d", &reg_no);

        for(i=0; i<n; ++i)
        {
                if(details[i].reg_no==reg_no)
                {
                        printf("\nReg No: %d\n", details[i].reg_no);
                        printf("Name: %s\n", details[i].name);
                        printf("Marks: ");
                        for(j=0; j<6; ++j) printf("%d ", details[i].marks[j]);
                        printf("\nTotal: %d\n", details[i].total);
                        printf("Average: %f\n", details[i].average);
                        break;
                }
        }

        return 0;
}//Student marks details
