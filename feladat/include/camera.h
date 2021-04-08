#ifndef CAMERA_H
#define CAMERA_H

#include "draw.h"

#define M_PI 3.14159265358979323846
#define skybox_size 15000
#define sun_size 920
#define planet1_size 200
#define planet2_size 85
#define planet3_size 220
#define planet4_size 150
#define satellite_size 50

#define MOVE_SPEED 15.0  //BIGGER IS FASTER
#define CAMERA_SPEED 5.0 //BIGGER IS SLOWER

typedef struct Camera
{
	struct Vertex position;
	struct Vertex pose;
	struct Vertex prev_position;
} Camera ;

//Converts degree to radian.
double degree_to_radian(double degree);


//Checks if the camera can move. If it can't, loads the starter position.
void don_not_head_up_against_the_wall (struct Camera* camera, Move move);


//Initialize the camera position and direction.
void init_camera(struct Camera* camera);


//Transform the models into the view point of the camera.
void set_view_point(const struct Camera* camera);


//Rotate the camera horizontally and vertically.
void rotate_camera(struct Camera* camera, double horizontal, double vertical);


//Move the camera forward.
void move_camera_forward(struct Camera* camera, double distance);


//Move the camera backward.
void move_camera_backward(struct Camera* camera, double distance);


//Step the camera left.
void step_camera_left(struct Camera* camera, double distance);


//Step the camera right.
void step_camera_right(struct Camera* camera, double distance);


//Move the camera up.
void move_camera_up(struct Camera* camera, double distance);


//Move the camera down.
void move_camera_down(struct Camera* camera, double distance);


#endif