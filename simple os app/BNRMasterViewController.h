//
//  BNRMasterViewController.h
//  simple os app
//
//  Created by greg chu on 4/30/14.
//  Copyright (c) 2014 com.gregchu. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BNRDetailViewController;

@interface BNRMasterViewController : UITableViewController

@property (strong, nonatomic) BNRDetailViewController *detailViewController;

@end
