//
//  HSDetailViewController.h
//  Git Test
//
//  Created by Harji Singh on 5/14/14.
//  Copyright (c) 2014 Harji Singh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HSDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
