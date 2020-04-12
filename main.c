#include "point.h"
#include <stdio.h>

int main(void)
{
  Point food_points[5] = FOOD_LOCATIONS;
  Point current_position = ORGANISM_INITIAL_POSITION;
  Point closest_food_location = food_points[0];
  get_closest_point(food_points, 5, current_position, &closest_food_location);
  printf("Location of organism: [%d, %d],  Closest food target : [%d, %d]\n", current_position.x, current_position.y, closest_food_location.x, closest_food_location.y);
  return 0;
}