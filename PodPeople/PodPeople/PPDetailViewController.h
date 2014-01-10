//
//  PPDetailViewController.h
//  PodPeople
//
//  Created by Travis Vachon on 1/9/14.
//  Copyright (c) 2014 Utah Street Labs. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PPDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
