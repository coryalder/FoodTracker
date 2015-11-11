//
//  DetailViewController.h
//  IntakeTracker
//
//  Created by Cory Alder on 2015-11-11.
//  Copyright © 2015 Cory Alder. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

