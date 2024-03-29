//
//  FindUserViewController.h
//  ProjectZero
//
//  Created by Larkin on 1/4/13.
//  Copyright (c) 2013 Larkin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FindUserViewController : UIViewController<UITextFieldDelegate>


@property (strong, nonatomic) IBOutlet UITextField * patientID;

@property (strong, nonatomic) IBOutlet UITextField * firstName;
@property (strong, nonatomic) IBOutlet UITextField * lastName;

@property (strong, nonatomic) IBOutlet UIButton * seeAllPatients;

@property (strong, nonatomic) IBOutlet UIButton * searchByName;

@end
