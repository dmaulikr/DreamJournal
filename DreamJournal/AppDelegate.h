//
//  AppDelegate.h
//  DreamJournal
//
//  Created by Josh Henry on 5/20/17.
//  Copyright © 2017 Big Smash Software. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

