//
//  DetailViewController.h
//  DreamJournal
//
//  Created by Josh Henry on 5/20/17.
//  Copyright © 2017 Big Smash Software. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DreamJournal+CoreDataModel.h"

@interface DetailViewController : UIViewController

@property (strong, nonatomic) Event *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

