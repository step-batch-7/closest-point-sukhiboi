#include "point.h"
#include <stdio.h>
#include <math.h>

double distance_between(Point, Point);

double distance_between(Point a, Point b)
{
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

void get_closest_point(Point food_points[], int points_length, Point current_location, Point *closest_food_location)
{
    for (int i = 0; i < points_length; i++)
    {
        double distance_to_other_food = distance_between(current_location, food_points[i]);
        double distance_to_current_food = distance_between(current_location, *closest_food_location);

        if (distance_to_other_food < distance_to_current_food)
        {
            closest_food_location->x = food_points[i].x;
            closest_food_location->y = food_points[i].y;
        }
    }
}