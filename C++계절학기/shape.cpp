//
// Created by newbi on 2023-07-07.
//

#include "shape.h"

std::vector<Shape> shape_list;
int next_id = 0;
const double PI = 3.141592;

void create_rectangle(Point& pos1, Point& pos2){
    Shape temp;
    Point center;
    temp.pos1 = pos1;
    temp.pos2 = pos2;
    temp.width =abs(pos2.x - pos1.x);
    temp.height = abs(pos1.y - pos2.y);
    center.x = temp.width/2;
    center.y = temp.height/2;
    temp.radius = sqrt(pow(temp.width,2)+pow(temp.height,2))/2;
    temp.center = center;
    temp.id = next_id;
    temp.type = ShapeType::RECT;
    temp.area = temp.height * temp.width;
    next_id++;
    shape_list.push_back(temp);
}
void create_circle(Point& center, int radius){
    Shape temp;
    temp.center = center;
    temp.radius = radius;
    temp.id = next_id;
    temp.type = ShapeType::CIRCLE;
    temp.area = PI * pow(radius,2);
    next_id++;
    shape_list.push_back(temp);
}
void sort_shapes(){
    sort(shape_list.begin(),shape_list.end(),[](Shape s1, Shape s2){
        return s1.area < s2.area;
    });
}
void remove_shape_by_id(int id){
    shape_list.erase(remove_if(shape_list.begin(),shape_list.end(),[=](Shape s1){
        if(s1.id == id)
            return true;
        else
            return false;
    }
    ),shape_list.end());
}

void move_shape(int id, int x, int y){
    auto found = find_if(shape_list.begin(),shape_list.end(),[=](Shape s){
        if(s.id == id)
            return true;
        else
            return false;
    });
    if(found != shape_list.end()){
        found->center.x += x;
        found->center.y += y;
    }
}

void align_shapes(){
    int sumRad = 0;
    int maxHeight = 0;
    sort_shapes();
    for(auto &elem : shape_list){
        if(elem.type == ShapeType::CIRCLE){
            elem.center.x = elem.center.y = sumRad + elem.radius;
            sumRad += elem.radius *2;
        }
        else if(elem.type == ShapeType::RECT){
            int tempWidth = elem.width/2;
            int tempHeight = elem.height/2;
            while(true){
            if(sumRad+tempWidth>= tempWidth && sumRad+tempWidth >= tempHeight){
                elem.center.x = elem.center.y = sumRad + tempWidth;
                break;
            }
            //cout<<"s:"<<sumRad<<endl;
            sumRad++;
            }
        }
    }
}

int find_furthest_shape(){
    auto found = max_element(shape_list.begin(),shape_list.end(),[](Shape s1,Shape s2){
        return sqrt(pow(s1.center.x,2)+pow(s1.center.y,2)) < sqrt(pow(s2.center.x,2)+pow(s2.center.y,2));
    });
    if(found != shape_list.end()) {
        return found->id;
    }
    return -1;
}

void print_shapes(){
    for( auto elem :shape_list){
        cout<<"ID: "<<elem.id<<", Type: ";
        if(elem.type==ShapeType::RECT){
            cout<<"RECT, Position: (";
        }
        else{
            cout<<"CIRCLE, Center: (";
        }
        cout<<elem.center.x<<", "<<elem.center.y<<"), ";
        if(elem.type==ShapeType::RECT){
            cout<<"Width: "<<elem.width<<", Height: "<<elem.height;
        }
        else{
            cout<<"Radius: "<<elem.radius;
        }

            cout << ", Area: " << fixed << setprecision(2) << elem.area << endl;


    }
}