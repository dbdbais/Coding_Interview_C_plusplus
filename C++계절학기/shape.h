//
// Created by newbi on 2023-07-07.
//

#ifndef SUMMER_SHAPE_H
#define SUMMER_SHAPE_H
#include <vector>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;

enum class ShapeType {
    RECT,
    CIRCLE
};

struct Point {
    int x;
    int y;
};

struct Shape {
    int id;
    ShapeType type;
    Point pos1;
    Point pos2;
    Point center;
    int radius;
    int width;
    int height;
    double area;
    //std::unique_ptr<sf::RectangleShape> rect;
    //std::unique_ptr<sf::CircleShape> circle;
};

void create_rectangle(Point& pos1, Point& pos2);
void create_circle(Point& center, int radius);
void move_shape(int id, int x, int y);
void sort_shapes();
int find_furthest_shape();
void remove_shape_by_id(int id);
void align_shapes();
void print_shapes();

#endif //SUMMER_SHAPE_H
