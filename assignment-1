/*In this homework you will write a running race simulator. Each athlete has acceleration (m/s^2)
and top speed (𝑚/𝑠) attributes. In this program you will enter attributes for two athletes and the
race length (in meters) and you will determine the winner of the race. Assume that the race is
long enough to reach top speed for both athletes.*/

#include <stdio.h>

float calculateAccelerationTime (float acceleration_of_athlete, float top_speed_of_athlete){
    /*This function calculates and returns the time (in seconds) needed for an athlete
     to reach top speed.*/
     
    return top_speed_of_athlete / acceleration_of_athlete;
}

float calculateDistanceAccelerating (float acceleration_of_athlete, float acceleration_time){
    /*This function calculates and returns the distance (in meters) covered by an
      athlete until reaching top speed.*/
      
    return (1 / 2) * acceleration_of_athlete * acceleration_time * acceleration_time; 
}

float calculateTimeTopSpeed (float top_speed_of_athlete, float remaining_distance){
    /*This function calculates and returns the time (in seconds) needed for an athlete
      to finish the race after reaching top speed.*/
      
    return (remaining_distance / top_speed_of_athlete);
    
}

int findWinner (float race_length, float acceleration_of_athlete1, float top_speed_of_athlete1, float acceleration_of_athlete2, float top_speed_of_athlete2){
    
    //athlete 1
    float acc_time_athlete1 = calculateAccelerationTime (acceleration_of_athlete1 , top_speed_of_athlete1);
    float distance_acc_athlete1 = calculateDistanceAccelerating (acceleration_of_athlete1 , acc_time_athlete1);
    float remaining_distance_athlete1 = race_length - distance_acc_athlete1;
    float time_top_speed_athlete1 = calculateTimeTopSpeed (top_speed_of_athlete1 , remaining_distance_athlete1);
    float total_time_of_athlete1 = acc_time_athlete1 + time_top_speed_athlete1;
    
    //athlete 2
    float acc_time_athlete2 = calculateAccelerationTime (acceleration_of_athlete2 , top_speed_of_athlete2);
    float distance_acc_athlete2 = calculateDistanceAccelerating (acceleration_of_athlete2 , acc_time_athlete2);
    float remaining_distance_athlete2 = race_length - distance_acc_athlete2;
    float time_top_speed_athlete2 = calculateTimeTopSpeed(top_speed_of_athlete2 , remaining_distance_athlete2);
    float total_time_of_athlete2 = acc_time_athlete2 + time_top_speed_athlete2;
    
    /*Return 1 if the athlete 1 is the winner, return 2 if the athlete 2 is the winner, return
    0 if both athletes finish the race at the same time.*/
    
    if (total_time_of_athlete1 < total_time_of_athlete2)
    {
        return 1;
    }
    else if (total_time_of_athlete2 < total_time_of_athlete1)
    {
        return 2;
    }
    return 0;
    
}

int main(){
    
    int lengthOfRace , winner;
    printf("Enter the length of the race: ");
    scanf("%d", &lengthOfRace);
    
    float accOfAthlete1, topSpeedOfAthlete1;
    printf("Enter the acceleration of athlete 1: ");
    scanf("%f", &accOfAthlete1);
    printf("Enter the top speed of athlete 1: ");
    scanf("%f", &topSpeedOfAthlete1);
    
    float accOfAthlete2, topSpeedOfAthlete2;
    printf("Enter the acceleration of athlete 2: ");
    scanf("%f", &accOfAthlete2);
    printf("Enter the top speed of athlete 2: ");
    scanf("%f", &topSpeedOfAthlete2);
    
    winner = findWinner (lengthOfRace , accOfAthlete1 , topSpeedOfAthlete1 , accOfAthlete2 , topSpeedOfAthlete2);
    
    if ( winner > 0)
    {
        printf("Winner is athlete %d\n." , winner);
    }
    else
    {
        printf("There is no winner, draw.");
    }
    
}







