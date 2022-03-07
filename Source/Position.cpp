/*
 * Position.h
 * Copyright (c) 2022, ZHAW
 * All rights reserved.
 */

#include <cmath>
#include "Position.h"

using namespace std;

/**
 * Creates and initialises the axis and angle
 * @param x-coordinate from position
 * @param y-Koordinate from position
 * @param angle from position
 */
Position::Position(float x_Coordinate, float y_Coordinate, float angle){
    
    this->x = x_Coordinate;
    this->y = y_Coordinate;
    this->angle = angle;
}

/**
 * Deletes this Position object and releases all allocated resources.
 */
Position::~Position() {}

/**
 * This method writes the position
 */
void Position::setPosition(float x_Coordinate, float y_Coordinate, float angle) {
    
    this->x = x_Coordinate;
    this->y = y_Coordinate;
    this->angle = angle;

}

/**
 * This method return the x coordinate
 * @return the x-Coordinate
 */
float Position::getXCoordinate() {    
    return this->x;
}
/**
 * This method return the y coordinate
 * @return the y-Coordinate
 */
float Position::getYCoordinate() {    
    return this->y;
}
/**
 * This method return the angle
 * @return the angle
 */
float Position::getAngle() {    
    return this->angle;
}

/**
 * The empty operator is a shorthand notation of the <code>read()</code> method.
 */
//Position::operator float() {
    
//    return read();
//}
//
