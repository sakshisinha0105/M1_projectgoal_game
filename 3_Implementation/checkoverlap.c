#include <stdio.h>

int main(){
char time[5];
int h,m;
int count;
scanf("%s",time);

// for hour
switch(time[0])
{
case '0' : h=0;
break;
case '1' : h=1;
break;
case '2' : h=2;
break;
}
switch(time[1])
{
case '0' : h = h*10 + 0;
break;
case '1' : h = h*10 + 1;
break;
case '2' : h = h*10 + 2;
break;
case '3' : h = h*10 + 3;
break;
case '4' : h = h*10 + 4;
break;
case '5' : h = h*10 + 5;
break;
case '6' : h = h*10 + 6;
break;
case '7' : h = h*10 + 7;
break;
case '8' : h = h*10 + 8;
break;
case '9' : h = h*10 + 9;
break;
}

// for minutes
switch(time[3])
{
case '0' : m=0;
break;
case '1' : m=1;
break;
case '2' : m=2;
break;
case '3' : m=3;
break;
case '4' : m=4;
break;
case '5' : m=5;
break;
}
switch(time[4])
{
case '0' : m = m*10 + 0;
break;
case '1' : m = m*10 + 1;
break;
case '2' : m = m*10 + 2;
break;
case '3' : m = m*10 + 3;
break;
case '4' : m = m*10 + 4;
break;
case '5' : m = m*10 + 5;
break;
case '6' : m = m*10 + 6;
break;
case '7' : m = m*10 + 7;
break;
case '8' : m = m*10 + 8;
break;
case '9' : m = m*10 + 9;
break;
}

// for count
switch(h)
{
case 0 : count = 1;
break;
case 1 : count = h;
if(m >= h*5 + 1)
count++;
break;
case 2 : count = h;
if(m >= h*5 + 1)
count++;
break;
case 3 : count = h;
if(m >= h*5 + 2)
count++;
break;
case 4 : count = h;
if(m >= h*5 + 2)
count++;
break;
case 5 : count = h;
if(m >= h*5 + 3)
count++;
break;
case 6 : count = h;
if(m >= h*5 + 3)
count++;
break;
case 7 : count = h;
if(m >= h*5 + 4)
count++;
break;
case 8 : count = h;
if(m >= h*5 + 4)
count++;
break;
case 9 : count = h;
if(m >= h*5 + 5)
count++;
break;
case 10 : count = h;
if(m >= h*5 + 5)
count++;
break;
case 11 : count = h;
break;
case 12 : count = h;
break;
case 13 : count = h-1;
if(m >= 1*5 + 1)
count++;
break;
case 14 : count = h-1;
if(m >= 2*5 + 1)
count++;
break;
case 15 : count = h-1;
if(m >= 3*5 + 2)
count++;
break;
case 16 : count = h-1;
if(m >= 4*5 + 2)
count++;
break;
case 17 : count = h-1;
if(m >= 5*5 + 3)
count++;
break;
case 18 : count = h-1;
if(m >= 6*5 + 3)
count++;
break;
case 19 : count = h-1;
if(m >= 7*5 + 4)
count++;
break;
case 20 : count = h-1;
if(m >= 8*5 + 4)
count++;
break; 
case 21 : count = h-1;
if(m >= 9*5 + 5)
count++;
break;
case 22 : count = h-1;
if(m >= 10*5 + 5)
count++;
break;
case 23 : count = h-1;
break;
}
printf("%d",count);
}