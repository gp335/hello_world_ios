//
//  HWAppDelegate.h
//  HelloWorld
//
//  Created by Geoffrey Peterson on 9/14/14.
//  Copyright (c) 2014 GLP. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HWAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
