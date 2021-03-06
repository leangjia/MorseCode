//
//  CAMViewController.h
//  MorseCode
//
//  Created by Chris Meehan on 1/20/14.
//  Copyright (c) 2014 Chris Meehan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CAMViewController : UIViewController{
    NSArray *arrayForOneLetteredStrings;
    NSArray* arrayOfStringsRepresentingAMorseCodeLetters;
}

@property (weak, nonatomic) IBOutlet UITextField *myTextField;
@property (weak, nonatomic) IBOutlet UILabel *myLabel;

- (IBAction)goWasHit:(id)sender;

@end
