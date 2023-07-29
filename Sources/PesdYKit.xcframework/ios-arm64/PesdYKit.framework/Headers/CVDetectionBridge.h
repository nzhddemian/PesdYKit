//
//  CVDetectionBridge.h
//  Hip
//
//  Created by Demian Nezhdanov on 04.02.2021.
//  Copyright © 2021 Demian Nezhdanov. All rights reserved.
//


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface CVDetectionBridge : NSObject
    
- (UIImage *) track_Mat: (UIImage *) image;
//- (CGImage *) detectPupils: (UIImage *) image;
- (NSArray<NSArray<NSValue *> *> *)track_Points:(UIImage *)image;
    
@end
