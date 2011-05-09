//
//  my_test_projectAppDelegate.h
//  my test project
//
//  Created by Steven Streeting on 09/05/2011.
//  Copyright 2011 Torus Knot Software Ltd. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface my_test_projectAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end
