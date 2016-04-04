//
//  MSDetailViewController.h
//  MyStuff
//
//  Created by Andres Socha on 7/1/14.
//  Copyright (c) 2014 AndreSocha. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MyWhatsit.h"
#import <MobileCoreServices/UTCoreTypes.h>

@interface MSDetailViewController : UIViewController <UISplitViewControllerDelegate,
                                                    UIImagePickerControllerDelegate,
                                                    UINavigationControllerDelegate,
                                                    UIActionSheetDelegate>

@property (strong, nonatomic)MyWhatsit *detailItem;
@property (weak,nonatomic) IBOutlet UITextField *nameField;
@property (weak, nonatomic) IBOutlet UITextField *locationField;
@property (weak, nonatomic) IBOutlet UIImageView *imageView;
-(IBAction)changeDetail:(id)sender;
-(IBAction)choosePicture:(id)sender;
-(IBAction)dismissKeyboard:(id)sender;

@end
