// SONNET: ETERNAL MONTHLY CALENDAR SINCE MAY 1916
// Size (14x50)           Microsoft Visual C++ 6.0

#include <iostream.h> 
char *N[12]={"January","February","March","April",
"May","June","July","August","September","October"
,"November","December"},C[14]="~>:><><>><><>",a,i;

char D[9]="SMTWTFS\n",*Q="\nY M = ",*q=" >",R[22],
w,z=48;  int y=1916,m=4,d=1,Y,M,S,s,g,p,b=12,k=21;
n() {C[2]=56+(y%4?0:y%400?y%100?2:0:2); ++d>C[m]/2
?m+=d=1:0; m>12?y+=m=1:0;} u(){cout<<R<<"\n";s=1;}

h(){cout<<"\n";for(i=0;i<8;i++) cout<<"  "<<D[i];}
r(){for(w=i=0;i<k;)n(),i?0:s=d^1,R[i++]=' ',R[i++]
=z+d/10,R[i++]=z+d%10,p|=w|=g=y*b+m==S;  w?u():0;}

main(){cout<<Q,cin>>Y>>M;Y<=y?Y=y,M=5:0;while(M>b?
Y+=M=1:0,S=Y*b+M, cout<<"\n\n"<<Y<<" "<<N[M-1]<<q,
cin>>a,a!='<'){h();s||u();while(!p||g)r();g=M++;}}

                    // Copyright @ D.D.Dobrev 2010
                    //     dobrev@fmi.uni-sofia.bg

/*  VOCABULARY:

main() - Main control following the dialogue. 
h()    - Prints the 7 initials of the week days. 
n()    - Determines the consecutive calendar date. 
r()    - Constructs a row of 7 week dates. 
u()    - Prints a constructed week row.  

*N[12]    =  Set of the 12 month names. 
C[1+12+@] =  Set of the 12 doubled month lenghts.
D[7+1+@]  =  Set of initials of the 7 week days.
Q[7+@]    =  Question about seeked year & month.
q[2+@]    =  Question about prolongation.
R[7*3+@]  -  Space to construct a row of 7 calendar dates.

a         -  Answer.
y,m,d     =  1916,05,01   Start/current calendar date.
Y,M       -  The seeked month.
S         -  The seeked month (packaged with the year).

s==0      -  The current month starts on sunday.
g!=0      -  The last day is in the seeked month.
w!=0      -  The current week overlaps the seeked month.
p!=0      -  The seeked month is already reached. 

b         =  12    Months number.
k         =  21    Limit position in R[].  
z         =  '0'   The base digit.
i         -  Iteration parametar.
*/



/* AN EXECUTION RECORD:

Y M = 2010 12      //  Dialog to fix the seeked month.


2010 December >>   //  Offer acsepted by '>'.

  S  M  T  W  T  F  S
 28 29 30 01 02 03 04
 05 06 07 08 09 10 11
 12 13 14 15 16 17 18
 19 20 21 22 23 24 25
 26 27 28 29 30 31 01


2011 January >>    //  Prolongation acsepted by '>'.

  S  M  T  W  T  F  S
 02 03 04 05 06 07 08
 09 10 11 12 13 14 15
 16 17 18 19 20 21 22
 23 24 25 26 27 28 29
 30 31 01 02 03 04 05


2011 February >>   //  Prolongation acsepted by '>'.

  S  M  T  W  T  F  S
 06 07 08 09 10 11 12
 13 14 15 16 17 18 19
 20 21 22 23 24 25 26
 27 28 01 02 03 04 05


2011 March ><      //  Prolongation refused by '<'.
Press any key to continue  

*/
