#include "point.h"
#include <stdio.h>

int main(void)
{
  Point food_points[] = FOOD_LOCATIONS;
  Point current_position = ORGANISM_INITIAL_POSITION;
  Point closest_food_location = food_points[0];
  get_closest_point(food_points, LENGTH_OF(food_points), current_position, &closest_food_location);
  printf("Location of organism: [%d, %d],  Closest food target: [%d, %d]\n", CURRENT_POSITION, CLOSEST_FOOD_LOCATION);
  return 0;
}