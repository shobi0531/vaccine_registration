#include <stdio.h>
 
// Declaring a structure class
typedef struct details {
    long long int aadar_num;
    char mob_num;
    float sec_code;
}DET;
 
 
// Driver Code
int main()
{
    DET d [100]
        = { { 96346274891,9807653728,9043},
            { 84639834561,6578425974,6753},
            { 67834256907,9044683424,7689},
            { 78694645468,7895467388,5674},
            { 58674577734,9067883245,7893},
            { 40876437844,7864438790,7893},
            { 78904204749,6796434363,8944},
            { 29894746489,9780334666,8903},
            { 78936337892,9833462753,9833}};
    long long int aadar_num,mob_num,sec_code;
    int  j,i,vaccine_name,r=0;
    printf("Lets get vaccinated");
    printf("\nEnter your aadar number");
    scanf("%lld",&aadar_num);
    printf("\nEnter your mob number");
    scanf("%lld",&mob_num);
    printf("\nEnter your sec code");
    scanf("%lld",&sec_code);
    for(i=0;i<=9;i++)
    {

       
           if(aadar_num ==d[i].aadar_num)
           {
             
              r=1;
           }
           
       
     
    }
   
    if(r==1)
    {
       printf("\nchoose vaccine");
       printf("\n1.covid shield");
       printf("\n2.covaxin");
       scanf("\n%d",&vaccine_name);
       printf("You are successfully vaccinated ");
       
    }
    else
    {
       d[10].aadar_num=aadar_num;
       d[10].mob_num=mob_num;
       d[10].sec_code=sec_code;
       
    for(j=0;j<=10;j++)
       {
        printf("\n%lld\n%lld\n%lld",d[j].aadar_num,d[j].mob_num,d[j].sec_code);
       }  
    }
    return 0;
   
}
