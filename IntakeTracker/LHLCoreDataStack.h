//
//  LHLCoreDataStack.h
//  IntakeTracker
//
//  Created by Cory Alder on 2015-11-11.
//  Copyright © 2015 Cory Alder. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@interface LHLCoreDataStack : NSObject

@property (nonatomic, strong) NSManagedObjectContext *context;

@end
