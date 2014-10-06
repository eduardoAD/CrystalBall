//
//  CrystalBall.m
//  CrystalBall
//
//  Created by Eduardo Alvarado Díaz on 10/3/14.
//  Copyright (c) 2014 Globant. All rights reserved.
//

#import "CrystalBall.h"

@implementation CrystalBall

- (NSArray *) predictions {
    if( _predictions == nil){
        _predictions = [[NSArray alloc] initWithObjects:@"It is Certain",
                        @"It is Decidedly so",
                        @"All signs say YES",
                        @"The stars are not aligned",
                        @"My replay is NO",
                        @"It is doubtful",
                        @"Better not tell you now",
                        @"Concentrate and ask again",
                        @"Unable to answer now",
                        @"Maybe YES", nil];
    }
    return _predictions;
}

- (NSString *) randomPrediction{
    int random = arc4random_uniform((unsigned int)self.predictions.count);
    return [self.predictions objectAtIndex:random];
}

@end
