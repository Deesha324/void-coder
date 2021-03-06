/*wap to find roots of non linear eqn using bisection method*/

#include<iostream>
#include<math.h>
#include<stdlib.h>
double f(double x , int A, int B, int C, int D )
{
     double y = A*(pow(x,3))+B*(pow(x,2))+C* x + D ;
     return y;
}

int signf(double x , int A , int B , int C , int D)
{
     int y;
     double fx;
   // std::cout<<"x="<<x;
    fx=(A*(pow(x,3))+B*(pow(x,2))+C* x + D);
     if(fx<0)
          y=0;
     else
          y=1;
     //     std::cout<<fx;
     return y;
}



int main()
{

int A,B,C,D,sign0,sign1;
double x0=0,x1=1,x,y,mid;
std :: cout<<"EQUATION  OF  FORM  :  Ax^3 + Bx^2 + Cx + D = 0\n";
std :: cout<<"Enter A :";
std :: cin>> A;
std :: cout<<"Enter B :";
std :: cin>> B;
std :: cout<<"Enter C :";
std :: cin>> C;
std :: cout<<"Enter D :";
std :: cin>> D;



 while(1)
{

sign0 = signf(x0,A,B,C,D);
sign1 = signf(x1,A,B,C,D);

      if(sign0!=sign1)

         {
          std :: cout<<"x0 = "<<x0<<"\n";

          std :: cout<<"x1 = "<<x1<<"\n";
          mid = ( x0 + x1 ) / 2 ;

          y = f(mid,A,B,C,D) ;

          std :: cout<<"root = "<<mid<<"\n";
          std :: cout<<"f("<<mid<<") = "<<y<<"\n";

                              if(fabs(y)<0.001)
                                   {
                                        break;
                                   }
               if(signf(mid,A,B,C,D)==(signf(x1,A,B,C,D)))
                    x1=mid;
               else
                    x0=mid;


         }
          else
               {
               x0++;
               x1=x0+1;
               }





}

return 0;

}
