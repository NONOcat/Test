//
//  DetailViewController.h
//  Test
//
//  Created by sunny on 13-7-3.
//  Copyright (c) 2013年 sunny. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
