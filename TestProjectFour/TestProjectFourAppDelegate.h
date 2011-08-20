//
//  TestProjectFourAppDelegate.h
//  TestProjectFour
//
//  Created by Alex Grinman on 8/20/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TestProjectFourViewController;

@interface TestProjectFourAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet TestProjectFourViewController *viewController;

@end
