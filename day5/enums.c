#include<stdio.h>
  enum Day{Sun,Mon,Tues,Wed,Thu,Fri,Sat};
  
  enum bike{
    duke,
    royalengfield,
    hondaRS,
    hondaHness,
    hondaCb350,
    suzukRX100,
};

enum fruits{
    apple,
    orange,
    banana, 
    peach, 
    grape
};

enum BikeCC {
    ReInterceptor = 650, ReClassic = 350 ,HondaHness = 355,RX100 = 100,TVSXL = 50
};

int main(){

   enum BikeCC myBike = ReInterceptor;
   printf("%d\n",myBike);

   enum BikeCC myFriendBike = ReClassic;
   printf("%d\n",myFriendBike);

   enum Day today = Sun;  //Enums are not String , But it can be treated as integers.
   printf("%d\n",today);

   enum bike MathiOwn = hondaHness;
   printf("%d\n",MathiOwn);
}
 



// Enums are not String.
// It is treated as integer (default assigns values starting from 0.)


