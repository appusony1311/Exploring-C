#include <stdio.h>
#include <math.h>

// given hour & min - calculate the angle between two
int calcAngle(int hour, int minutes) {
    int h = (hour%12 + (int)minutes/60)*30; // Each hour is 30 degrees ie., 360/12 hour = 30 degrees
    int m = minutes*6; // Each min is 6 degrees ie., 360/60 min = 6 degrees
    int angle = fabs(h-m);
    if(angle > 180) angle = 360-angle;
    return angle; // return only the angle less than 180 degrees
}

int main(void)
{
   int ha = 11;
   printf("\nAngles move by hour hand: %d",ha);
   int ma = 30;
   printf("\nAngles move by minute hand: %d",ma);
	 
   if (ha <0 || ma < 0 || ha > 12 || ma > 60) 
   {
      printf("\nWrong input..!"); 
   }
   else
   {
	  printf("\nAngle between hour and minute hands %d",calcAngle(ha, ma)); 	  
   }
}

// Output:
// Run the code in this online compiler -  https://www.onlinegdb.com/online_c_compiler
Angles move by hour hand: 11
Angles move by minute hand: 30
Angle between hour and minute hands 150
