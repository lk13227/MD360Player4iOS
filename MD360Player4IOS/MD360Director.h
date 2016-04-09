//
//  MD360Director.h
//  MD360Player4IOS
//
//  Created by ashqal on 16/4/7.
//  Copyright © 2016年 ashqal. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MD360Program.h"
#import <UIKit/UIKit.h>

@protocol MDTouchDelegate <NSObject>
- (void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event;
- (void)touchesMoved:(NSSet *)touches withEvent:(UIEvent *)event;
- (void)touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event;
- (void)touchesCancelled:(NSSet *)touches withEvent:(UIEvent *)event;
@end


@interface MD360Director : NSObject<MDTouchDelegate>
- (void) shot:(MD360Program*) program;
- (void) reset;
- (void) updateProjection:(int)width height:(int)height;
//- (void) updateSensorMatrix;
@end

