//
//  AddSightingViewController.h
//  BirdWatching
//
//  Created by Maxwell Stanford on 1/25/13.
//  Copyright (c) 2013 Andrew Wirth. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BirdSighting;

@interface AddSightingViewController : UITableViewController <UITextFieldDelegate>


@property (weak, nonatomic) IBOutlet UITextField *birdNameInput;
@property (weak, nonatomic) IBOutlet UITextField *locationInput;

@property (strong, nonatomic) BirdSighting *birdSighting;

@end
