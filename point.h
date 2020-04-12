/* 
You are a single celled organism whose location is represented in two dimensions.
You have several food targets around you, whose locations are also represented in two dimensions.

Write a program, which when given the above data can determine the food target closest to the single celled organism.
Assuming that there are five food targets at:
    [18 76] [19 66] [89 57] [9 71] [55 38]

Location of organism: [18 86],  Closest food target : [18 76]
Location of organism: [97 27],  Closest food target : [89 57]
Location of organism: [69 7],   Closest food target : [55 38]
Location of organism: [10 94],  Closest food target : [18 76]
Location of organism: [36 27],  Closest food target : [55 38]
*/

#define ORGANISM_INITIAL_POSITION {1,1}
#define FOOD_LOCATIONS {{18, 76}, {19, 66}, {89, 57}, {9, 71}, {55, 38}}
#define LENGTH_OF(array) sizeof(array)/sizeof(array[0])
#define CURRENT_POSITION current_position.x, current_position.y
#define CLOSEST_FOOD_LOCATION closest_food_location.x, closest_food_location.y
#define UPDATE_CLOSEST_FOOD_LOCATION closest_food_location->x = food_points[i].x; closest_food_location->y = food_points[i].y;
#define FOR_LOOP(times) for (int i = 0; i < times; i++)
typedef struct
{
int x;
int y;
} Point;

void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location);
