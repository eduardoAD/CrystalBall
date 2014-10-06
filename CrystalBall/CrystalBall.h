//
//  CrystalBall.h
//  CrystalBall
//
//  Created by Eduardo Alvarado Díaz on 10/3/14.
//  Copyright (c) 2014 Globant. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CrystalBall : NSObject{
    NSArray *_predictions;
}

@property (strong, nonatomic, readonly) NSArray *predictions;

- (NSString *) randomPrediction;

@end
