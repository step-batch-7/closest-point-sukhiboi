#include "point.h"
#include <math.h>

double distance_between(Point, Point);

double distance_between(Point a, Point b)
{
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

void get_closest_point(Point food_points[], int points_length, Point current_location, Point *closest_food_location)
{
    double distance_to_current_food = distance_between(current_location, *closest_food_location);
    FOR_LOOP(points_length)
    {
        double distance_to_other_food = distance_between(current_location, food_points[i]);
        if (distance_to_other_food < distance_to_current_food)
        {
            distance_to_current_food = distance_to_other_food;
            *closest_food_location = food_points[i];
        }
    }
}