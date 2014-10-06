//
//  ViewController.h
//  CrystalBall
//
//  Created by Eduardo Alvarado Díaz on 10/2/14.
//  Copyright (c) 2014 Globant. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CrystalBall.h"

@interface ViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *predictionLabel;
@property (strong, nonatomic) CrystalBall *cristalBall;

@property (strong, nonatomic) IBOutlet UIImageView *backgroundImageView;

-(void) makePrediction;

@end
