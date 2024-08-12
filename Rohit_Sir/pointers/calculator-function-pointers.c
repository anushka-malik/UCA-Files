 #include <stdio.h>

 int add(int a,int b)
  {
      return a+b;
  }
 int sub(int a,int b)
  {
      return a-b;
  }
 int mult(int a,int b)
  {
       return a*b;
  }
 int div(int a,int b)
  {
       return a/b;
  }
 void calculate(int (*op)(int,int),int a,int b)
  {
       printf("%d\n",op(a,b));
  }

 int main()
  {
     int(*func)(int,int);
     
     func=add;
     calculate(func,2,4);
     
     func=sub;
     calculate(func,2,4);
     
     func=mult;
     calculate(func,2,4);
     
     func=div;
     calculate(func,2,4);
     
     return 0;
 }
