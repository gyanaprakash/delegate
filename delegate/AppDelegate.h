//
//  AppDelegate.h
//  delegate
//
//  Created by Bsetecip10 on 07/11/14.
//  Copyright (c) 2014 gyana. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ViewController.h"
@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, retain) ViewController *vc;
@property (nonatomic, retain) UINavigationController *navi;

@end

