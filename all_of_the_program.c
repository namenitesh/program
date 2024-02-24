#include<stdio.h>
void sum_of_2_num();
void si_of_num();
void num_is_pos_or_neg();
void odd_or_even();
void gretest_amg_three_no();
void read_and_display_sum();
void sum_of_n_no();
void factoriol();
void fibb();
void count_no();
void rev();
void check();
void electrical_bill();
void hcf_lcm();
void primefac();
void choic();
void main()
{
    int choice;
    do{
        choic();
        printf("\nenter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 0:
            break;
            case 1:
            sum_of_2_num();break;
            case 2:
            si_of_num();break;
            case 3:num_is_pos_or_neg();break;
            case 4:odd_or_even();break;
            case 5:gretest_amg_three_no();break;
            case 6:read_and_display_sum();break;
            case 7:sum_of_n_no();break;
            case 8:factoriol();break;
            case 9:fibb();break;
            case 10:count_no();break;
            case 11:rev();break;
            case 12:check();break;
            case 13:electrical_bill();break;
            case 14:hcf_lcm();break;
            case 15:primefac();break;
            default:
            printf("invalid choice try again");
        }
    }while(choice!=0);
        }
void choic(){
    printf("\n\n0. exit\n");
    printf("1. calculate the sum of two given numbers\n");
    printf("2. calculate the simple interest using SI=(P*T*R)/100\n");
    printf("3. check if a number is +ve or -ve\n");
    printf("4. check if a number is odd or even\n");
    printf("5. find largest among given three different numbers\n");
    printf("6. read n numbers and find their sum\n");
    printf("7. find the sum of series 1+2+3+4+5+...+N\n");
    printf("8. calculate factorial of a given number N\n");
    printf("9. display fibbionic series up to  given number N\n");
    printf("10. calculate digit of the  given number N\n");
    printf("11. display the reverse  of a given number N\n");
    printf("12. check the requred condition \n");
    printf("13. calculate ELECTRICAL BILL of a given number N\n");
    printf("14. calculate HCF AND LCM of a given number N\n");
    printf("15. calculate PRIME FACTOR of a given number N\n");
}
void sum_of_2_num()
{
    //CALCULATE THE SUM OF TWO NUMBER

    int a,b;
    printf("enter the value of a and b for sum");
    scanf("%d%d",&a,&b);
    printf("/n the sum of two number is %d",a+b);

}
void si_of_num(){
     int p,t;
    float si,r;
    printf("enter the principle rate and time");
    scanf("%d%f%d",&p,&r,&t);
    si=(p*t*r)/100;
    printf("the si of the given value is %f",si);
}
void num_is_pos_or_neg(){
     int a;
    printf("\nenter the no for the +ve or neg ");
    scanf("%d",&a);
    if(a==0)
    {
        printf("\nthe no is zero");
    }
    else if (a>0)
    {
        printf("\nthe no is +ve");
    }
    else
    printf("\nthe no is -ve");
}
void odd_or_even(){
      int a;
    printf("\nenter the no for odd or even");
    scanf("%d",&a);
    if(a==0)
    {
        printf("\nthe no is zero");
    }
    else {
           if (a%2==0)
         {
             printf("\nthe no is even");
         }
            else
             printf("\nthe no is odd");
        }
}
void gretest_amg_three_no(){
     int a,b,c;
    printf("\nenter the three no for the greatest");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("\nthe a is greatest");
    }
    else if (b>c&&b>a)
    {
        printf("\nthe b is greatest");
    }
    else
    printf("\nthe c is greatest");
}
void read_and_display_sum(){
     int i,n,sum=0;
    printf("\nenter the value of n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("\nenter the %d no",i+1);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
   

    printf("\nthe sum of the n no is %d",sum);
}
void sum_of_n_no(){
    
    int i,n,sum=0;
    printf("\nenter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       
        sum=sum+i;
    }
    printf("\nthe sum of the n no is %d",sum);
}
void factoriol(){
int n,i=1,fac=1;
    printf("\nenter the no to find out factorial up to term ");
    scanf("%d",&n);
    if(n==0||n==1)
    {
        printf("\nthe fac is 1");
    }
    else{
        while(n!=0)
        {
            fac=fac*i;
            i++;
            n--;
        }
        printf("\nthe fac of the given no is %d",fac);
    }
}
void fibb(){
    int a=0,b=1,c=0;
    int i,n;
    printf("\nenter the no find out the fibbinoic sereies up to term n ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
     printf("%d,",c);
     a=b;
     b=c;
     c=a+b;
    }
}
void count_no(){
    int a,i,b,c=0;
    printf("\nenter the value of a ");
    scanf("%d",&a);
    while(a!=0)
       {
         b=a%10;
         if(b>=0)
         {
             c++; 
         }
       
        a=a/10;
          }
    printf("\nthe digit is %d",c);
}
void rev(){
     int a ,b=0,c;
     printf("\nenter the value of a ");
     scanf("%d",&a);
     while(a!=0)
     {
        c=a%10;
        b=b*10+c;
        a=a/10;
     }
     printf("\nthe rev is %d",b);
}
void check(){
    //CHECK IF A NO IS GREATER THAN N1,LESS THAN N2 AND DIVISIBLE BY 7
      int a,b,c;
    printf("\nenter the value of a ,b and c");
    scanf("%d%d%d",&a,&b,&c);
    if(b>a&&c<b&&c%7==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
void electrical_bill()
{
    /*CALCULATE ELECTRICITY BILL AS PER FOLLOWING FORMALA 
RS 80 FOR FIRST 20 UNNITS 
RS 8 FOR NEXT 100 UNNITS
RS 10 PER UNITS FOR ANYTHING MORE
*/
int u,p=0;
    printf("\nenter the unit ");
    scanf("%d",&u);
    if(u<=20)
    {
        p=80;
        printf(" /nrs is%d",p);
    }
     else if(u<=120)
    {
        p=80+(u-20)*8;
        printf(" /nrs is%d",p);
    }
    else{
          {
        p=80+100*8+(u-120)*10;
        printf(" /nrs is%d",p);
    }
    }
}
void hcf_lcm(){
     int a,b,c,d;
    printf("\n the value of a and b");
    scanf("%d%d",&a,&b);
    d=a;// a and b values  will change in program so that storing in other variable
    c=b;
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else
        b=b-a;
    }
    printf("\nthe hcf is %d",b);
    printf("\nthe lcm is %d",(d*c)/b);
}
void primefac(){
    int a,i,n;
    printf("\nenter the no");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        while(n%i==0)
        {
            printf("%d,",i);
            n=n/i;
        }
    }
}
