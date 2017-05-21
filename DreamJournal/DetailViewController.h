//
//  DetailViewController.h
//  DreamJournal
//
//  Created by Josh Henry on 5/20/17.
//  Copyright © 2017 Big Smash Software. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DreamJournal+CoreDataModel.h"
@import GoogleMobileAds;

@interface DetailViewController : UIViewController

@property (strong, nonatomic) Event *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@property (weak, nonatomic) IBOutlet GADBannerView *bannerView;


@end

