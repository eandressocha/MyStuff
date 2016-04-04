//
//  MSMasterViewController.h
//  MyStuff
//
//  Created by Andres Socha on 7/1/14.
//  Copyright (c) 2014 AndreSocha. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MSDetailViewController;

@interface MSMasterViewController : UITableViewController

@property (strong, nonatomic) MSDetailViewController *detailViewController;


@end
