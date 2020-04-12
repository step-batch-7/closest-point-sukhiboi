#include "point.h"
#include <stdio.h>

int main(void)
{
  Point food_points[5] = food_locations;
  Point current_position = organism_initial_position;
  Point closest_food_location;
  get_closest_point(food_points, 5, current_position, &closest_food_location);
  printf("Location of organism: [%d, %d],  Closest food target : [%d, %d]\n", current_position.x, current_position.y, closest_food_location.x, closest_food_location.y);
  return 0;
}