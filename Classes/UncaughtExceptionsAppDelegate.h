//
//  UncaughtExceptionsAppDelegate.h
//  UncaughtExceptions
//
//  Created by Matt Gallagher on 2010/05/25.
//  Copyright Matt Gallagher 2010. All rights reserved.
//
//  Permission is given to use this source code file, free of charge, in any
//  project, commercial or otherwise, entirely at your risk, with the condition
//  that any redistribution (in part or whole) of source code must retain
//  this copyright and permission notice. Attribution in compiled projects is
//  appreciated but not required.
//

#import <UIKit/UIKit.h>

@interface UncaughtExceptionsAppDelegate : NSObject <UIApplicationDelegate> {
    
    UIWindow *window;
    UINavigationController *navigationController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;

@end

