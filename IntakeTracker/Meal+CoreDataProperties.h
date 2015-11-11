//
//  Meal+CoreDataProperties.h
//  IntakeTracker
//
//  Created by Cory Alder on 2015-11-11.
//  Copyright © 2015 Cory Alder. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Meal.h"

NS_ASSUME_NONNULL_BEGIN

@interface Meal (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *name;
@property (nonatomic) int64_t calories;

@end

NS_ASSUME_NONNULL_END
