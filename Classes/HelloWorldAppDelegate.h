//
//  HelloWorldAppDelegate.h
//  HelloWorld
//
//  Created by Yuki Ueda on 10/07/06.
//  Copyright Three One Systems, Inc. 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HelloWorldViewController;

@interface HelloWorldAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    HelloWorldViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet HelloWorldViewController *viewController;

@end

