//
//  gsGame.h
//  Pontra
//
//  Created by Jarod Luebbert on 4/15/10.
//  Copyright 2010 nil. All rights reserved.
//

#import <UIKit/UIKit.h>
#include "GLESGameState.h"
#include "Ball.h"
#include "Balto.h"

@interface gsGame : GLESGameState {
	int control_pressed;
	Ball *ball;
	Balto *sound;
}

@property (nonatomic, retain) Ball *ball;
@property (nonatomic, retain) Balto *sound;

- (void) touchesHandler:(NSSet*)touches;
- (IBAction) pause;
- (NSString *) settingsFile;

@end
