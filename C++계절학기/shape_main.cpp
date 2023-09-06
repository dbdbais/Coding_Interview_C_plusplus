#include "shape.h"
#include <iostream>
int main() {

    bool isQuit = false;

    while(!isQuit) {
        std::string command;
        int radius;
        Point p1,p2;
        cin >> command;
        if (command == "RECT") {
            cin >> p1.x >>p1.y >>p2.x>>p2.y;
            create_rectangle(p1,p2);
        }
        else if(command == "CIRCLE") {
            cin >> p1.x >> p1.y>>radius;
            create_circle(p1,radius);
        }
        else if(command == "MOVE"){
            int id,x,y;
            cin >>id >>x >>y;
            move_shape(id,x,y);
        }
        else if(command == "SORT"){
            sort_shapes();
        }
        else if(command == "MAX"){
            find_furthest_shape();
        }
        else if(command == "REMOVE"){
            int id;
            cin>>id;
            remove_shape_by_id(id);
        }
        else if(command == "ALIGN"){
            align_shapes();
        }
        else if(command == "PRINT"){
            print_shapes();
        }
        else if (command == "QUIT") {
                isQuit = true;
            }
        else {
            std::cout << "Invalid command." << std::endl;
        }
    }
    return 0;
}