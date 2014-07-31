//
//  DetailViewController.h
//  ContactList
//
//  Created by X Code User on 7/16/14.
//  Copyright (c) 2014 Joshua Spicer, Fabio Germann. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController
- (void)viewWillAppear:(BOOL)animated;
@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *outletName;
@property (weak, nonatomic) IBOutlet UILabel *outletEMail;
@property (weak, nonatomic) IBOutlet UILabel *outletPhone;

@end
