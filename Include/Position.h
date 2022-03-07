/*
 * Position.h
 * 
 * faessfab
 */

#ifndef POSITION_H_
#define POSITION_H_

#include <cstdlib>
#include <mbed.h>

/**
 * This class can init a position, necessary for the mobile robot
 * of the ROME2 mobile robot.
 */
class Position {

    public:
        
                Position(float x_Coordinate, float y_Coordinate, float angle);
        virtual ~Position();
        void    setPosition(float x_Coordinate, float y_Coordinate, float angle);
        float   getXCoordinate();
        float   getYCoordinate();
        float   getAngle();
                //operator float();
        
    private:
        
        int x;
        int y;
        int angle;

};

#endif /* IR_SENSOR_H_ */

