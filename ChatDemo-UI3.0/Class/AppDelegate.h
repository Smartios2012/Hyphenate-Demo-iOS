/************************************************************
  *  * Hyphenate   
  * __________________ 
  * Copyright (C) 2016 Hyphenate Inc. All rights reserved. 
  *  
  * NOTICE: All information contained herein is, and remains 
  * the property of Hyphenate Inc.

  */

#import <UIKit/UIKit.h>
#import "MainViewController.h"
#import "FriendRequestViewController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate, EMChatManagerDelegate>

@property (strong, nonatomic) UIWindow *window;

/** Hyphenate **/
@property (assign, nonatomic) EMConnectionState connectionState;

/** Google Analytics **/
@property (strong, nonatomic) id<GAITracker> tracker;

@property (strong, nonatomic) MainViewController *mainController;

@end
