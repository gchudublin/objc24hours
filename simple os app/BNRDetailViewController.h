//
//  BNRDetailViewController.h
//  simple os app
//
//  Created by greg chu on 4/30/14.
//  Copyright (c) 2014 com.gregchu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BNRDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
