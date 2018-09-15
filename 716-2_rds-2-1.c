 #include<stdio.h>
 int main()
   {
   long int n,h,max=0;
   scanf ("%li",&n);
   scanf ("%li",&max);
       for (long int i=1;i<n;i++) {
           scanf("%li",&h);
           if (h>max) max=h;
                          }
   printf("%li",max);
    }


