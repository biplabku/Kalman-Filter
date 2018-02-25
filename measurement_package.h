//
//  measurement_package.h
//  
//
//  Created by Biplab kumar das on 2/25/18.
//

#ifndef measurement_package_h
#define measurement_package_h


#endif /* measurement_package_h */
#ifndef MEASUREMENT_PACKAGE_H_
#define MEASUREMENT_PACKAGE_H_

#include "Dense"

class MeasurementPackage {
public:
    int64_t timestamp_;
    
    enum SensorType {
        LASER, RADAR
    } sensor_type_;
    
    Eigen::VectorXd raw_measurements_;
    
};

#endif /* MEASUREMENT_PACKAGE_H_ */
