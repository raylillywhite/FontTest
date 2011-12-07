//
//  FTViewController.h
//  FontTest
//
//  Created by Ray Lillywhite on 12/6/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FTViewController : UIViewController <UITextFieldDelegate, UIScrollViewDelegate>
@property (nonatomic, strong) IBOutlet UITextField *textField;
@property (nonatomic, strong) IBOutlet UITextField *sizeTextField;
@property (nonatomic, strong) IBOutlet UIScrollView *scrollView;
@end
